/////////////////////////////////////////////////////////////////////////////
// Name:        winMain.cpp
// Purpose:     
// Author:      Philip Pemberton
// Modified by: 
// Created:     Mon 25 Apr 2011 03:23:29 BST
// RCS-ID:      
// Copyright:   (C) 2011 Philip Pemberton
// Licence:     GNU GPL v2 or later
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "wx/aboutdlg.h"

#include "wx/xy/xyplot.h"
#include "wx/xy/xysimpledataset.h"
#include "wx/xy/xylinerenderer.h"
#include "wx/axis/logarithmicnumberaxis.h"
#include "wx/chart.h"
#include "wx/chartpanel.h"

#include <iostream>
#include <fstream>
#include <exception>
#include <stdint.h>

#include "CTrack.h"
#include "version.h"
#include "winMain.h"

////@begin XPM images
////@end XPM images

using namespace std;

/*
 * winMain type definition
 */

IMPLEMENT_CLASS( winMain, wxFrame )


/*
 * winMain event table definition
 */

BEGIN_EVENT_TABLE( winMain, wxFrame )

////@begin winMain event table entries
	EVT_LISTBOX( ID_TRACKLIST, winMain::OnTrackSelected )

	EVT_MENU( ID_FILEOPEN_CATWEASEL_IMG, winMain::OnFileOpenCatweaselIMGClick )

	EVT_MENU( ID_FILEOPEN_DISCFERRET_IMAGE, winMain::OnFileOpenDiscFerretImageClick )

	EVT_MENU( wxID_EXIT, winMain::OnEXITClick )

	EVT_MENU( wxID_ABOUT, winMain::OnHelpAbout )

////@end winMain event table entries

END_EVENT_TABLE()


/*
 * winMain constructors
 */

winMain::winMain()
{
    Init();
}

winMain::winMain( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}


/*
 * winMain creator
 */

bool winMain::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin winMain creation
	wxFrame::Create( parent, id, caption, pos, size, style );

	CreateControls();
	SetIcon(GetIconResource(wxT("discferret-notext32.png")));
	Centre();
////@end winMain creation

#ifndef DISABLE_QUIPS
	// Random quips... inspired by ImgBurn.
	wxArrayString quips;
	quips.Add(wxT("Magic Quip System powered by dumb luck and brute force!"));
	quips.Add(wxT("Use the Source, Luke!"));													// because after all, this app is OSS/FS...
	quips.Add(wxT("Perfectionism is the enemy of 'just good enough'."));						// Voltaire
	quips.Add(wxT("Baldrick, I have a cunning plan."));											// Blackadder
	quips.Add(wxT("Coming soon: in-status-bar advertising!"));									// God I hope not.
	quips.Add(wxT("When in trouble, when in doubt, run in circles, scream and shout."));		// Freefall #47: http://freefall.purrsia.com/ff100/fv00047.htm
	quips.Add(wxT("All technology, no matter how primitive, is magic to those who don't understand it."));	// Freefall #255: http://freefall.purrsia.com/ff300/fv00255.htm
	quips.Add(wxT("I do not read organic expressions well and yours still worry me."));			// Freefall #2021: http://freefall.purrsia.com/ff2100/fv02021.htm
	// I should probably stop quoting Freefall before Mark Stanley sics a lawyer on me.
	quips.Add(wxT("YOW! Are we having fun yet?"));												// Zippy the Pinhead
	quips.Add(wxT("What have the Romans ever done for us?"));									// Monty Python's Life of Brian
	quips.Add(wxT("Do not fold, bend, spindle or mutilate."));									// IBM punched cards (allegedly)
	quips.Add(wxT("Smoke me a kipper, I'll be back for breakfast."));							// 'Ace' Rimmer (Red Dwarf)
	quips.Add(wxT("It is a miracle that curiosity survives formal education."));				// Albert Einstein
	quips.Add(wxT("Beware of computer programmers that carry screwdrivers."));
	quips.Add(wxT("Made it, Ma! Top of the world!"));											// James Cagney in White Heat
	quips.Add(wxT("Toto, I've got a feeling we're not in Kansas anymore."));					// The Wizard of Oz
	quips.Add(wxT("What we've got here is a failure to communicate."));							// Cool Hand Luke
	quips.Add(wxT("Gentlemen. You can't fight in here. This is the War Room!"));				// Dr. Strangelove
	quips.Add(wxT("I'm sure this thing is somehow useful, but I'll be damned if I know how."));	// Sam and Max Hit The Road
	quips.Add(wxT("I'm thinking of a number between one and ten, and... I don't know why."));	// Sam and Max Hit The Road
	quips.Add(wxT("If you stare at the graphs long enough, they make sense. Eventually."));

	// Now we seed the RNG and pick a random quip
	srand(time(NULL));
	statusBar->SetStatusText(quips[rand() % quips.GetCount()]);
#else
	statusBar->SetStatusText(_("Ready."));
#endif

    return true;
}


/*
 * winMain destructor
 */

winMain::~winMain()
{
////@begin winMain destruction
////@end winMain destruction
}


/*
 * Member initialisation
 */
void winMain::Init()
{
////@begin winMain member initialisation
	trackList = NULL;
	histogramPanel = NULL;
	histogramSizer = NULL;
	scatterPanel = NULL;
	scatterSizer = NULL;
	speedPanel = NULL;
	speedSizer = NULL;
	statusBar = NULL;
////@end winMain member initialisation
}


/*
 * Control creation for winMain
 */

void winMain::CreateControls()
{    
////@begin winMain content construction
	winMain* itemFrame1 = this;

	wxMenuBar* menuBar = new wxMenuBar;
	wxMenu* itemMenu17 = new wxMenu;
	wxMenu* itemMenu18 = new wxMenu;
	itemMenu18->Append(ID_FILEOPEN_CATWEASEL_IMG, _("Catweasel &IMG"), wxEmptyString, wxITEM_NORMAL);
	itemMenu18->Append(ID_FILEOPEN_DISCFERRET_IMAGE, _("&DiscFerret Image (.DFI)"), wxEmptyString, wxITEM_NORMAL);
	itemMenu17->Append(wxID_ANY, _("&Open"), itemMenu18);
	itemMenu17->Append(wxID_EXIT, _("E&xit"), wxEmptyString, wxITEM_NORMAL);
	menuBar->Append(itemMenu17, _("&File"));
	wxMenu* itemMenu22 = new wxMenu;
	itemMenu22->Append(wxID_ABOUT, _("&About"), wxEmptyString, wxITEM_NORMAL);
	menuBar->Append(itemMenu22, _("&Help"));
	itemFrame1->SetMenuBar(menuBar);

	wxSplitterWindow* itemSplitterWindow2 = new wxSplitterWindow( itemFrame1, wxID_ANY, wxDefaultPosition, wxSize(100, 100), wxSP_3DBORDER|wxSP_3DSASH|wxSP_LIVE_UPDATE );
	itemSplitterWindow2->SetMinimumPaneSize(0);

	wxArrayString trackListStrings;
	trackList = new wxListBox( itemSplitterWindow2, ID_TRACKLIST, wxDefaultPosition, wxDefaultSize, trackListStrings, wxLB_SINGLE );

	wxPanel* itemPanel4 = new wxPanel( itemSplitterWindow2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxVERTICAL);
	itemPanel4->SetSizer(itemBoxSizer5);

	wxStaticBox* itemStaticBoxSizer6Static = new wxStaticBox(itemPanel4, wxID_ANY, _("Histogram"));
	wxStaticBoxSizer* itemStaticBoxSizer6 = new wxStaticBoxSizer(itemStaticBoxSizer6Static, wxHORIZONTAL);
	itemBoxSizer5->Add(itemStaticBoxSizer6, 1, wxGROW|wxALL, 5);
	histogramPanel = new wxPanel( itemPanel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
	itemStaticBoxSizer6->Add(histogramPanel, 1, wxGROW|wxALL, 0);
	histogramSizer = new wxBoxSizer(wxHORIZONTAL);
	histogramPanel->SetSizer(histogramSizer);

	wxStaticBox* itemStaticBoxSizer9Static = new wxStaticBox(itemPanel4, wxID_ANY, _("Scatter"));
	wxStaticBoxSizer* itemStaticBoxSizer9 = new wxStaticBoxSizer(itemStaticBoxSizer9Static, wxHORIZONTAL);
	itemBoxSizer5->Add(itemStaticBoxSizer9, 1, wxGROW|wxALL, 5);
	scatterPanel = new wxPanel( itemPanel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
	itemStaticBoxSizer9->Add(scatterPanel, 1, wxGROW|wxALL, 0);
	scatterSizer = new wxBoxSizer(wxHORIZONTAL);
	scatterPanel->SetSizer(scatterSizer);

	wxStaticBox* itemStaticBoxSizer12Static = new wxStaticBox(itemPanel4, wxID_ANY, _("Speed graph"));
	wxStaticBoxSizer* itemStaticBoxSizer12 = new wxStaticBoxSizer(itemStaticBoxSizer12Static, wxHORIZONTAL);
	itemBoxSizer5->Add(itemStaticBoxSizer12, 1, wxGROW|wxALL, 5);
	speedPanel = new wxPanel( itemPanel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
	itemStaticBoxSizer12->Add(speedPanel, 1, wxGROW|wxALL, 0);
	speedSizer = new wxBoxSizer(wxHORIZONTAL);
	speedPanel->SetSizer(speedSizer);

	itemSplitterWindow2->SplitVertically(trackList, itemPanel4, 300);

	statusBar = new wxStatusBar( itemFrame1, ID_STATUSBAR, wxST_SIZEGRIP|wxNO_BORDER );
	statusBar->SetFieldsCount(1);
	itemFrame1->SetStatusBar(statusBar);

////@end winMain content construction
}


/*
 * Should we show tooltips?
 */

bool winMain::ShowToolTips()
{
	return true;
}

/*
 * Get bitmap resources
 */

wxBitmap winMain::GetBitmapResource( const wxString& name )
{
	// Bitmap retrieval
////@begin winMain bitmap retrieval
	wxUnusedVar(name);
	return wxNullBitmap;
////@end winMain bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon winMain::GetIconResource( const wxString& name )
{
	// Icon retrieval
////@begin winMain icon retrieval
	wxUnusedVar(name);
	if (name == _T("discferret-notext32.png"))
	{
		wxIcon icon(_T("discferret-notext32.png"), wxBITMAP_TYPE_PNG);
		return icon;
	}
	return wxNullIcon;
////@end winMain icon retrieval
}


/*
 * wxEVT_COMMAND_MENU_SELECTED event handler for wxID_EXIT
 */

void winMain::OnEXITClick( wxCommandEvent& event )
{
////@begin wxEVT_COMMAND_MENU_SELECTED event handler for wxID_EXIT in winMain.
	// Before editing this code, remove the block markers.
	Destroy();
////@end wxEVT_COMMAND_MENU_SELECTED event handler for wxID_EXIT in winMain. 
}


/*
 * wxEVT_COMMAND_MENU_SELECTED event handler for wxID_ABOUT
 */

void winMain::OnHelpAbout( wxCommandEvent& event )
{
	wxAboutDialogInfo info;
	info.SetName(_("Merlin"));
	info.SetVersion(_(VER_FULLSTR));
	info.SetDescription(_("Analysis tool for magnetic transition images."));
	info.SetCopyright(wxT("(C) 2011 Philip Pemberton. All rights reserved."));
	info.SetLicense(wxT("Internal beta release, do not distribute!"));
	info.SetWebSite(wxT("http://www.discferret.com/"));

	info.AddDeveloper(wxT("Philip Pemberton"));

	info.AddArtist(wxT("DiscFerret logo:\n   Michelle Van Zandt, http://graphix.ginpu.us/"));

	wxAboutBox(info);
}


/**
 * Update the track list box from the track data vector.
 */
void winMain::UpdateTrackList(void)
{
	// Clear the list
	trackList->Clear();

	// Copy track ID strings from the trackdata vector
	for (vector<CTrack>::const_iterator i = trackData.begin(); i != trackData.end(); i++) {
		wxString st;
		if ((*i).sector() > 0)
			st = wxString::Format(wxT("%ld:%ld.%ld [%zu samples]"), (*i).cylinder(), (*i).head(), (*i).sector(), (*i).data.size());
		else
			st = wxString::Format(wxT("%ld:%ld [%zu samples]"), (*i).cylinder(), (*i).head(), (*i).data.size());

		trackList->Append(st);
	}

	if (trackList->IsEmpty())
		// Select nothing if the list is empty
		trackList->SetSelection(wxNOT_FOUND);
	else
		// Otherwise select the first item
		trackList->SetSelection(0);

	// Update the pretty pictures (the graphs)
	UpdateGraphs();
}

/**
 * Update the graph data from the track data vector.
 */
void winMain::UpdateGraphs(void)
{
	// Bail out if there isn't a track selected
	if (trackList->GetSelection() == wxNOT_FOUND)
		return;

	CTrack t = trackData[trackList->GetSelection()];

	double *scatterData, *histData;
	unsigned long maxval = 0;
	unsigned long scatterlen = 0;

	// Make sure there's actually some track data here...
	if (t.data.size() == 0) {
		// Hmm. Nope. Clear the histogram and scatter data.
		maxval = scatterlen = 1;
		scatterData = new double[2];
		histData = new double[2];
		scatterData[0] = scatterData[1] = 0;
		histData[0] = histData[1] = 0;
	} else {
		// First pass: find the maximum value of the data in the trackarray
		// Also produces the data for the scatter plot
		scatterData = new double[t.data.size() * 2];
		size_t x=0;
		for (CTrack::data_citer i = t.data.begin(); i != t.data.end(); i++, x++)
		{
			if ((*i) > maxval) maxval = *i;
			scatterData[x*2] = x+1;
			scatterData[x*2+1] = (((double)(*i)+1.0) * 1.0e6l) / t.freq();
		}

		// Save length of scatter chart data
		scatterlen = x;

		// Make sure we allocate enough data bins -- if maxval == 0, then we still
		// need a bin for all the zero values.
		// TODO: Allow maxval to be locked at a specific value
		maxval++;

		// Second pass: calculate the histogram
		histData = new double[maxval*2];
		for (unsigned long i=0; i<maxval; i++) {
			histData[i*2] = (((double)i+1.0) * 1.0e6l) / t.freq();
			histData[i*2+1] = 0;
		}
		for (CTrack::data_citer i = t.data.begin(); i != t.data.end(); i++)
			histData[(*i)*2 + 1]++;
	}

	// Find peaks
	// This is a C implementation of Eli Billauer's PEAKDET algorithm
	// Modified to me logarithmically sensing and auto-adjusting by Phil Pemberton
	vector<int> peakpos;
	double mx = -INFINITY, mn = INFINITY;
	int mxpos, mnpos;
	bool lookformax = true;
	double delta = 0;

	// first scan -- find highest peak
	delta = 0;
	for (size_t i=0; i<maxval; i++) {
		if (histData[i*2+1] > delta)
			delta = histData[i*2+1];
	}
	// delta = 33% of log1p(peak)
	delta = log1p(delta) * 0.33;

	for (size_t i=0; i<maxval; i++) {
		double cur = log1p(histData[i*2+1]);
		if (cur > mx) {
			mx = cur;
			mxpos = i;
		}

		if (cur < mn) {
			mn = cur;
			mnpos = i;
		}

		if (lookformax) {
			if (cur < (mx - delta)) {
				peakpos.push_back(mxpos);
				mn = cur; mnpos = i;
				lookformax = false;
			}
		} else {
			if (cur > (mn + delta)) {
				// mintab.push_back(mnpos);
				mx = cur; mxpos = i;
				lookformax = true;
			}
		}
	}

	double *mult;
	double *speedplotData;
	if (peakpos.size() > 0) {
		// Calculate the speedplot
		// start by calculating multiplier and threshold values
		mult = new double[peakpos.size()];
		size_t x=0;
		for (vector<int>::const_iterator i = peakpos.begin(); i != peakpos.end(); i++,x++) {
			mult[x] = (((double)(*i)+1.0) / ((double)(peakpos[0])+1.0));
		}

		speedplotData = new double[t.data.size()*2];
		size_t spdpos=0;
		for (CTrack::data_citer i = t.data.begin(); i != t.data.end(); i++,spdpos++) {
			// find closest matching multiplier value
			double minError = INFINITY;
			size_t mePos = 0;
			for (size_t x=0; x<peakpos.size(); x++) {
				// error = (val - thr) / thr
				double err = (((double)(*i)+1.0) - ((double)peakpos[x]+1.0)) / ((double)peakpos[x]+1.0);
				if (fabs(err) < fabs(minError)) {
					minError = err;
					mePos = x;
				}
			}
			speedplotData[spdpos*2] = spdpos;
			speedplotData[spdpos*2+1] = 0.0 - ((((double)(*i)+1.0) / ((double)peakpos[mePos]+1.0) * 100.0) - 100.0);
		}
		delete mult;
	}

	// Delete any existing charts in the sizers
	if (histogramSizer->GetChildren().GetCount() > 0)
		histogramSizer->GetItem((size_t)0)->GetWindow()->Destroy();

	if (scatterSizer->GetChildren().GetCount() > 0)
		scatterSizer->GetItem((size_t)0)->GetWindow()->Destroy();

	if (speedSizer->GetChildren().GetCount() > 0)
		speedSizer->GetItem((size_t)0)->GetWindow()->Destroy();


	// create histogram plot
	// TODO: add tooltip to display current X/Y position
	XYPlot *Hplot = new XYPlot();
	// create dataset
	XYSimpleDataset *Hdataset = new XYSimpleDataset();
	// add markers to dataset
	for (vector<int>::const_iterator i = peakpos.begin(); i != peakpos.end(); i++) {
		// TODO: list of peaks on the main screen?
//		cout << "peak: t=" << (*i)+1 << " (" << (((double)(*i)+1.0) * 1.0e6l) / t.freq() << ")" << 
//			", ref mul = " << (((double)(*i)+1.0) / ((double)(peakpos[0])+1.0)) <<
//			endl;
		LineMarker *mkr = new LineMarker(*wxRED_PEN);
		mkr->SetVerticalLine((((double)(*i)+1.0) * 1.0e6l) / t.freq());
		Hdataset->AddMarker(mkr);
	}
	// add series to dataset and set up the renderer
	Hdataset->AddSerie(histData, maxval);
	Hdataset->SetRenderer(new XYLineRenderer());
	// create number axes on left and bottom
//#define LOGARITHMIC_HISTOGRAM
#ifdef LOGARITHMIC_HISTOGRAM
	LogarithmicNumberAxis *HleftAxis = new LogarithmicNumberAxis(AXIS_LEFT);
#else
	NumberAxis *HleftAxis = new NumberAxis(AXIS_LEFT);
#endif
	NumberAxis *HbottomAxis = new NumberAxis(AXIS_BOTTOM);
	HbottomAxis->SetLabelCount(maxval);
	HbottomAxis->SetTickFormat(wxT("%0.2f"));
	HbottomAxis->SetVerticalLabelText(true);
	HbottomAxis->SetTitle(_("Time (\u00b5s)"));
#ifdef LOGARITHMIC_HISTOGRAM
	HleftAxis->SetTitle(_("Counts [log]"));
	HleftAxis->EnableLongLabelExponent(true);
#else
	HleftAxis->SetTitle(_("Counts"));
#endif
	HleftAxis->SetLabelCount(11);
	HleftAxis->SetTickFormat(wxT("%0.0f"));
	// put it all together
	Hplot->AddDataset(Hdataset);
	Hplot->AddAxis(HleftAxis);
	Hplot->AddAxis(HbottomAxis);
	// link data with axis
	Hplot->LinkDataVerticalAxis(0,0);
	Hplot->LinkDataHorizontalAxis(0,0);
	// create the histogram chart and link it to a chart panel
	Chart *Hchart = new Chart(Hplot);
	// using wxDefaultPosition and wxDefaultSize makes Bad Things Happen!
	wxChartPanel *HchartPanel = new wxChartPanel(histogramPanel, wxID_ANY, Hchart, wxPoint(0, 0), wxSize(1, 1));
//	HchartPanel->SetAntialias(true);
	histogramSizer->Clear();
	histogramSizer->Add(HchartPanel, 1, wxGROW | wxALL, 5);
	histogramSizer->Layout();

	// create scatter plot
	XYPlot *Splot = new XYPlot();
	// create dataset
	XYSimpleDataset *Sdataset = new XYSimpleDataset();
	Sdataset->AddSerie(scatterData, scatterlen);
	XYLineRenderer *Srenderer = new XYLineRenderer(true, false);
	// TODO: maybe come up with a single-pixel marker for scatter plots
	Srenderer->SetSerieSymbol(0, new CrossSymbol(4));
	Sdataset->SetRenderer(Srenderer);
	// create number axes on left and bottom
	NumberAxis *SleftAxis = new NumberAxis(AXIS_LEFT);
	NumberAxis *SbottomAxis = new NumberAxis(AXIS_BOTTOM);
	SbottomAxis->SetLabelCount(20);
	SbottomAxis->SetTickFormat(wxT("%0.0f"));
	SbottomAxis->SetTitle(_("Sample offset"));
	SleftAxis->SetTitle(_("Time (\u00b5s)"));
	SleftAxis->SetLabelCount(11);
	// put it all together
	Splot->AddDataset(Sdataset);
	Splot->AddAxis(SleftAxis);
	Splot->AddAxis(SbottomAxis);
	// link data with axis
	Splot->LinkDataVerticalAxis(0,0);
	Splot->LinkDataHorizontalAxis(0,0);
	// create the histogram chart and link it to a chart panel
	Chart *Schart = new Chart(Splot);
	// using wxDefaultPosition and wxDefaultSize makes Bad Things Happen!
	wxChartPanel *SchartPanel = new wxChartPanel(scatterPanel, wxID_ANY, Schart, wxPoint(0, 0), wxSize(1, 1));
//	SchartPanel->SetAntialias(true);
	scatterSizer->Clear();
	scatterSizer->Add(SchartPanel, 1, wxGROW | wxALL, 5);
	scatterSizer->Layout();

	if (peakpos.size() > 1) {
		// create speedplot
		// TODO: add tooltip to display current X/Y position
		XYPlot *SPplot = new XYPlot();
		// create dataset
		XYSimpleDataset *SPdataset = new XYSimpleDataset();
		// add series to dataset and set up the renderer
		SPdataset->AddSerie(speedplotData, t.data.size());
		SPdataset->SetRenderer(new XYLineRenderer());
		// create number axes on left and bottom
		NumberAxis *SPleftAxis = new NumberAxis(AXIS_LEFT);
		NumberAxis *SPbottomAxis = new NumberAxis(AXIS_BOTTOM);
		SPbottomAxis->SetLabelCount(20);
		SPbottomAxis->SetTickFormat(wxT("%0.0f"));
		SPleftAxis->SetTitle(_("Deviation (%)"));
		SPbottomAxis->SetTitle(_("Sample offset"));
		SPleftAxis->SetLabelCount(11);
		SPleftAxis->SetFixedBounds(-100.0, 100.0);
		// put it all together
		SPplot->AddDataset(SPdataset);
		SPplot->AddAxis(SPleftAxis);
		SPplot->AddAxis(SPbottomAxis);
		// link data with axis
		SPplot->LinkDataVerticalAxis(0,0);
		SPplot->LinkDataHorizontalAxis(0,0);
		// create the speed chart and link it to a chart panel
		Chart *SPchart = new Chart(SPplot);
		// using wxDefaultPosition and wxDefaultSize makes Bad Things Happen!
		wxChartPanel *SPchartPanel = new wxChartPanel(speedPanel, wxID_ANY, SPchart, wxPoint(0, 0), wxSize(1, 1));
	//	SPchartPanel->SetAntialias(true);
		speedSizer->Clear();
		speedSizer->Add(SPchartPanel, 1, wxGROW | wxALL, 5);
		speedSizer->Layout();

		delete[] speedplotData;
	}

	delete[] histData;
	delete[] scatterData;
}


/**
 * Load a Catweasel image file (.IMG), format defined by Chuck Guzis.
 *
 * Handles the wxEVT_COMMAND_MENU_SELECTED for ID_FILEOPEN_CATWEASEL_IMG.
 */
void winMain::OnFileOpenCatweaselIMGClick( wxCommandEvent& event )
{
	ifstream file;
	bool success = true;

	wxFileDialog* OpenDialog = new wxFileDialog(
		this, _("Choose a file to open"), wxEmptyString, wxEmptyString, 
		_("Catweasel IMG files (*.img)|*.img|All files (*.*)|*.*"),
		wxFD_OPEN, wxDefaultPosition);

	if (OpenDialog->ShowModal() != wxID_OK) {
		// User didn't click OK, bail out.
		OpenDialog->Destroy();
		return;
	}

	// If we reach this point, the user selected a file. Load it.
	trackData.clear();
	try {
		// Data buffer
		uint8_t buf[4];
		// File length
		streampos filelen;

		// Open the file
		file.exceptions(ifstream::failbit | ifstream::badbit);
		file.open(OpenDialog->GetPath().char_str(), ios::in | ios::binary);

		// Get the file length
		file.seekg (0, ios::end);
		filelen = file.tellg();
		file.seekg (0, ios::beg);

		// Read each track in turn
		while (file.tellg() < filelen) {
			uint8_t cyl, head;
			uint32_t plen;

			// Read Cyl/head address
			file.read((char *)&cyl, 1);
			file.read((char *)&head, 1);

			// Read payload length
			file.read((char *)&buf, 4);
			plen = ((uint32_t)buf[0]) +
				(((uint32_t)buf[1]) << 8) +
				(((uint32_t)buf[2]) << 16) +
				(((uint32_t)buf[3]) << 24);

			// Make sure the payload address is sane
			if (plen > (filelen - file.tellg()))
				throw exception();

			// read data into a buffer
			uint8_t *tbuf = new uint8_t[plen];
			file.read((char *)tbuf, plen);

			// create a new track from the data we have
			// Note that Catweasel data consists of raw timing values. The MSbit is the
			// INDEX flag; the remainder are used to store the timing value.
			CTrack tk(cyl, head, -1);
			// IMG files don't specify the acquisition rate. Assume 28.322MHz (the max for a Catweasel Mk.III/Mk.IV)
			tk.freq(28.322e6l);
			for (streampos i=0; i<plen; i+=1)
				tk.data.push_back(tbuf[i] & 0x7f);

			// Store track data
			trackData.push_back(tk);

			// Deallocate memory buffer
			delete[] tbuf;
		}

		// File read complete; close the file
		file.close();
	} catch (ifstream::failure &e) {
		// File read error. Let the user know what happened.
		wxString st = _("An error occurred while reading the file '");
		st << OpenDialog->GetFilename();
		st << wxT("': ");

		if ((file.rdstate() & ifstream::eofbit)) st << _("Unexpected end of file.");
		else if ((file.rdstate() & ifstream::badbit)) st << _("Unknown file read error (disc error?).");
		else st << _("Unknown error.");		// FIXME? can this happen?

		wxMessageBox(
				st,
				_("File read error"),
				wxICON_ERROR | wxOK,
				this);

		success = false;
	} catch (std::exception &e) {
		wxString st = _("An error occurred while reading the file '");
		st << OpenDialog->GetFilename();
		st << wxT("': ");
		st << _("Payload length extends past EOF");
		wxMessageBox(
				st,
				_("File read error"),
				wxICON_ERROR | wxOK,
				this);

		success = false;
	}

	if (!success) {
		// Something rotten in Denmark. Clear the trackdata buffer and remove the
		// filename from the title bar.
		trackData.clear();
		SetTitle(wxString(wxT("Merlin")));
	} else {
		// Set the window title to reflect the file open
		SetTitle(wxString(wxT("Merlin - ")) << OpenDialog->GetFilename());
	}

	// Update the track list box and select the first track
	UpdateTrackList();

	// Clean up after ourselves
	OpenDialog->Destroy();
}


/// A generic exception which returns a wxString -- we can extend this later.
class MyException {
	public:
		virtual const wxString what() throw() =0;
};

/// A generic exception with a fixed error message.
#define XCPT(name, errorstr) \
	class name : public MyException {											\
		public:																	\
			virtual const wxString what() throw() { return wxT(errorstr); }		\
	}

/// Bad Magic Number exception.
XCPT(EBadMagic, "Bad magic number");
/// Bad Payload Length exception.
XCPT(EBadLength, "Payload length extends past EOF");

/*
 * wxEVT_COMMAND_MENU_SELECTED event handler for ID_FILEOPEN_DISCFERRET_IMAGE
 */

/**
 * Load a DiscFerret image file (.DFI), created by FerretCAPTURE.
 *
 * Handles the wxEVT_COMMAND_MENU_SELECTED for ID_FILEOPEN_CATWEASEL_IMG.
 */
void winMain::OnFileOpenDiscFerretImageClick( wxCommandEvent& event )
{
	ifstream file;
	bool success = true;

	wxFileDialog* OpenDialog = new wxFileDialog(
		this, _("Choose a file to open"), wxEmptyString, wxEmptyString, 
		_("DiscFerret DFI files (*.dfi)|*.dfi|All files (*.*)|*.*"),
		wxFD_OPEN, wxDefaultPosition);

	if (OpenDialog->ShowModal() != wxID_OK) {
		// User didn't click OK, bail out.
		OpenDialog->Destroy();
		return;
	}

	// If we reach this point, the user selected a file. Load it.
	trackData.clear();
	try {
		// Storage buffer
		uint8_t buf[16];
		// File length
		streampos filelen;
		// Carry byte format
		unsigned char carryform = 0x00;

		// Open the file
		file.exceptions(ifstream::failbit | ifstream::badbit);
		file.open(OpenDialog->GetPath().char_str(), ios::in | ios::binary);

		// Get the file length
		file.seekg (0, ios::end);
		filelen = file.tellg();
		file.seekg (0, ios::beg);

		// Read the magic word
		// Can be either DFER (old carry logic) or DFE2 (new carry logic)
		file.read((char *)buf, 4);
		if ((buf[0] != 'D') ||
				(buf[1] != 'F') ||
				(buf[2] != 'E')) {
			// Magic word not correct. Bail out.
			throw EBadMagic();
		}

		if (buf[3] == 'R') {
			// DFER: Old style image with bad carry logic. Urrgh!
			carryform = 0x00;

			// Should tell the user...
			wxMessageBox(
					_("This is an old-format DiscFerret image, generated by old microcode. The data stream may contain invalid data and should not be trusted."),
					_("Old file format"),
					wxICON_WARNING | wxOK,
					this);
		} else if (buf[3] == '2') {
			// DFE2: New style image with better carry logic and 8bit stream format.
			carryform = 0x7F;
		} else {
			// Something else.
			throw EBadMagic();
		}

		while (file.tellg() < filelen) {
			// Now read the tracks
			uint16_t cyl, head, sec;
			uint32_t plen;

			// Read header block
			file.read((char *)buf, 10);
			cyl  = ((uint16_t)buf[0] << 8) + (uint16_t)buf[1];
			head = ((uint16_t)buf[2] << 8) + (uint16_t)buf[3];
			sec  = ((uint16_t)buf[4] << 8) + (uint16_t)buf[5];
			plen = ((uint32_t)buf[6] << 24) +
				((uint32_t)buf[7] << 16) +
				((uint32_t)buf[8] << 8) +
				(uint16_t)buf[9];
			// Make sure the payload address is sane
			if (plen > (filelen - file.tellg()))
				throw exception();

			// TODO: update status bar
//			cout << "TRAK " << cyl << " " << head << " " << sec << " = " << plen << endl;

			// read data into a buffer
			uint8_t *tbuf = new uint8_t[plen];
			file.read((char *)tbuf, plen);

			// create a new track from the data we have
			CTrack tk(cyl, head, sec);
			// IMG files don't specify the acquisition rate. Assume 28.322MHz (the max for a Catweasel Mk.III/Mk.IV)
			tk.freq(100e6l);

			// DiscFerret data dumps contain the raw contents of the acquisition RAM.
			// Briefly:
			//   The Most Significant bit (0x80) means "index pulse active during this timeslot"
			//   A 0x00 means the counter overflowed. Increment carry by 127.
			//   Anything else is a timing value. T_val = carry + data_byte, then set the carry to zero.
			uint32_t carry = 0;
			for (streampos i=0; i<plen; i+=1) {
				uint8_t d = tbuf[i] & 0x7f;
				if (d == carryform) {
					carry += 127;
				} else {
					tk.data.push_back(carry + (uint32_t)d);
					carry = 0;
				}
			}
			if (carry != 0) tk.data.push_back(carry);

			// Store track data
			trackData.push_back(tk);

			// Deallocate memory buffer
			delete[] tbuf;
		}

		// File read complete; close the file
		file.close();
	} catch (ifstream::failure &e) {
		// File read error. Let the user know what happened.
		wxString st = _("An error occurred while reading the file '");
		st << OpenDialog->GetFilename();
		st << wxT("': ");

		if ((file.rdstate() & ifstream::eofbit)) st << _("Unexpected end of file.");
		else if ((file.rdstate() & ifstream::badbit)) st << _("Unknown file read error (disc error?).");
		else st << _("Unknown error.");		// FIXME? can this happen?

		wxMessageBox(
				st,
				_("File read error"),
				wxICON_ERROR | wxOK,
				this);

		success = false;
	} catch (MyException &e) {
		wxString st = _("An error occurred while reading the file '");
		st << OpenDialog->GetFilename();
		st << wxT("': ");
		st << e.what();
		wxMessageBox(
				st,
				_("File read error"),
				wxICON_ERROR | wxOK,
				this);

		success = false;
	} catch (std::exception &e) {
		wxString st = _("An error occurred while reading the file '");
		st << OpenDialog->GetFilename();
		st << wxT("': ");
		wxString exwhat(e.what(), wxConvUTF8);
		st << exwhat;
		wxMessageBox(
				st,
				_("File read error"),
				wxICON_ERROR | wxOK,
				this);

		success = false;
	}

	if (!success) {
		// Something rotten in Denmark. Clear the trackdata buffer and remove the
		// filename from the title bar.
		trackData.clear();
		SetTitle(wxString(wxT("Merlin")));
	} else {
		// Set the window title to reflect the file open
		SetTitle(wxString(wxT("Merlin - ")) << OpenDialog->GetFilename());
	}

	// Update the track list box and select the first track
	UpdateTrackList();

	// Clean up after ourselves
	OpenDialog->Destroy();
}


/*
 * wxEVT_COMMAND_LISTBOX_SELECTED event handler for ID_TRACKLIST
 */

void winMain::OnTrackSelected( wxCommandEvent& event )
{
	UpdateGraphs();
}

