/////////////////////////////////////////////////////////////////////////////
// Name:        winMain.cpp
// Purpose:     
// Author:      Philip Pemberton
// Modified by: 
// Created:     Mon 25 Apr 2011 03:23:29 BST
// RCS-ID:      
// Copyright:   (C) 2011 Philip Pemberton
// Licence:     
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
#include "wx/chart.h"
#include "wx/chartpanel.h"

#include <iostream>
#include <fstream>
#include <exception>
#include <cstdint>

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
	quips.Add(wxT("Use the Force, Luke!"));														// Star Wars
	quips.Add(wxT("Use the Source, Luke!"));													// because after all, this app is OSS/FS...
	quips.Add(wxT("Runaway train, never going back... wrong way on a one-way track..."));		// Soul Asylum / Runaway Train
	quips.Add(wxT("Perfectionism is the enemy of 'just good enough'."));						// Mark Jackson, Echostar CTO (hi, Mark!)
	quips.Add(wxT("I have altered the deal. Pray I do not alter it further."));					// More Star Wars
	quips.Add(wxT("Dead or alive, you're coming with me."));									// Robocop
	quips.Add(wxT("Baldrick, I have a cunning plan."));											// Blackadder
	quips.Add(wxT("DiscFerret: it's not just a cute name."));
	quips.Add(wxT("Coming soon: in-status-bar advertising!"));									// God I hope not.
	quips.Add(wxT("There are no stupid answers, Cartman, only stupid people."));				// South Park.
	quips.Add(wxT("You were only supposed to blow the bloody doors off!"));						// The Italian Job
	quips.Add(wxT("When in trouble, when in doubt, run in circles, scream and shout."));		// Freefall #47: http://freefall.purrsia.com/ff100/fv00047.htm
	quips.Add(wxT("All technology, no matter how primitive, is magic to those who don't understand it."));	// Freefall #255: http://freefall.purrsia.com/ff300/fv00255.htm
	quips.Add(wxT("I do not read organic expressions well and yours still worry me."));			// Freefall #2021: http://freefall.purrsia.com/ff2100/fv02021.htm
	// I should probably stop quoting Freefall before Mark Stanley sics a lawyer on me.
	quips.Add(wxT("YOW! Are we having fun yet?"));												// Zippy the Pinhead
	quips.Add(wxT("Java is an affront to software engineering."));								// Seriously. I spent TWO DAYS trying to get this app working in Java.
																								// After switching to wxWidgets I had a working prototype in less than a day.
	quips.Add(wxT("What have the Romans ever done for us?"));									// Monty Python's Life of Brian
	quips.Add(wxT("Do not fold, bend, spindle or mutilate."));									// IBM punched cards (allegedly)
	quips.Add(wxT("Smoke me a kipper, I'll be back for breakfast."));							// 'Ace' Rimmer (Red Dwarf)
	quips.Add(wxT("It is a miracle that curiosity survives formal education."));				// Albert Einstein
	quips.Add(wxT("Beware of computer programmers that carry screwdrivers."));
	quips.Add(wxT("And thus the Lord spake: 'Verily, ye shalt bewareth of the Programmer that carryeth a Soldering Iron.'"));
	quips.Add(wxT("You can be my Yoko Ono, you can follow me wherever I go..."));				// Barenaked Ladies -- Be My Yoko Ono
	quips.Add(wxT("It's all been done before (whoo-hoo-hoo!). It's all been done... before!"));	// Barenaked Ladies -- It's All Been Done
	quips.Add(wxT("Your mother was a hamster and your father smelt of elderberries."));			// Monty Python and the Holy Grail
	quips.Add(wxT("Made it, Ma! Top of the world!"));											// James Cagney in White Heat
	quips.Add(wxT("I'm going to make him an offer he can't refuse."));							// The Godfather
	quips.Add(wxT("Toto, I've got a feeling we're not in Kansas anymore."));					// The Wizard of Oz
	quips.Add(wxT("What we've got here is a failure to communicate."));							// Cool Hand Luke
	quips.Add(wxT("Rosebud."));																	// Citizen Kane
	quips.Add(wxT("I'm as mad as hell, and I'm not going to take this anymore!"));				// Network
	quips.Add(wxT("Gentlemen. You can't fight in here. This is the War Room!"));				// Dr. Strangelove
	quips.Add(wxT("Gratuitous acts of senseless violence are my forte!"));						// Sam and Max Hit The Road
	quips.Add(wxT("I don't think this is a natural occurrence, Max. In fact, I think we're witnessing a celestial convergence of some sort.")); // Sam & Max
	quips.Add(wxT("I'm sure this thing is somehow useful, but I'll be damned if I know how."));	// Sam and Max Hit The Road
	quips.Add(wxT("I'm thinking of a number between one and ten, and... I don't know why."));	// Sam and Max Hit The Road
	quips.Add(wxT("Looks to me like a marginally vulnerable hostage situation!"));				// Sam and Max Hit The Road

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
	wxp2 = NULL;
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
	wxMenu* itemMenu15 = new wxMenu;
	wxMenu* itemMenu16 = new wxMenu;
	itemMenu16->Append(ID_FILEOPEN_CATWEASEL_IMG, _("Catweasel &IMG"), wxEmptyString, wxITEM_NORMAL);
	itemMenu15->Append(ID_MENU, _("&Open"), itemMenu16);
	itemMenu15->Append(wxID_EXIT, _("E&xit"), wxEmptyString, wxITEM_NORMAL);
	menuBar->Append(itemMenu15, _("&File"));
	wxMenu* itemMenu19 = new wxMenu;
	itemMenu19->Append(wxID_ABOUT, _("&About"), wxEmptyString, wxITEM_NORMAL);
	menuBar->Append(itemMenu19, _("Help"));
	itemFrame1->SetMenuBar(menuBar);

	wxSplitterWindow* itemSplitterWindow2 = new wxSplitterWindow( itemFrame1, ID_SPLITTERWINDOW, wxDefaultPosition, wxSize(100, 100), wxSP_3DBORDER|wxSP_3DSASH|wxSP_LIVE_UPDATE );
	itemSplitterWindow2->SetMinimumPaneSize(0);

	wxArrayString trackListStrings;
	trackList = new wxListBox( itemSplitterWindow2, ID_TRACKLIST, wxDefaultPosition, wxDefaultSize, trackListStrings, wxLB_SINGLE );

	wxPanel* itemPanel4 = new wxPanel( itemSplitterWindow2, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxBoxSizer* itemBoxSizer5 = new wxBoxSizer(wxVERTICAL);
	itemPanel4->SetSizer(itemBoxSizer5);

	wxStaticBox* itemStaticBoxSizer6Static = new wxStaticBox(itemPanel4, wxID_ANY, _("Histogram"));
	wxStaticBoxSizer* itemStaticBoxSizer6 = new wxStaticBoxSizer(itemStaticBoxSizer6Static, wxHORIZONTAL);
	itemBoxSizer5->Add(itemStaticBoxSizer6, 1, wxGROW|wxALL, 5);
	histogramPanel = new wxPanel( itemPanel4, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
	itemStaticBoxSizer6->Add(histogramPanel, 1, wxGROW|wxALL, 0);
	histogramSizer = new wxBoxSizer(wxHORIZONTAL);
	histogramPanel->SetSizer(histogramSizer);

	wxStaticBox* itemStaticBoxSizer9Static = new wxStaticBox(itemPanel4, wxID_ANY, _("Scatter"));
	wxStaticBoxSizer* itemStaticBoxSizer9 = new wxStaticBoxSizer(itemStaticBoxSizer9Static, wxHORIZONTAL);
	itemBoxSizer5->Add(itemStaticBoxSizer9, 1, wxGROW|wxALL, 5);
	wxp2 = new wxPanel( itemPanel4, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	itemStaticBoxSizer9->Add(wxp2, 1, wxGROW|wxALL, 5);

	wxStaticBox* itemStaticBoxSizer11Static = new wxStaticBox(itemPanel4, wxID_ANY, _("Speed graph"));
	wxStaticBoxSizer* itemStaticBoxSizer11 = new wxStaticBoxSizer(itemStaticBoxSizer11Static, wxHORIZONTAL);
	itemBoxSizer5->Add(itemStaticBoxSizer11, 1, wxGROW|wxALL, 5);
	wxPanel* itemPanel12 = new wxPanel( itemPanel4, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	itemStaticBoxSizer11->Add(itemPanel12, 1, wxGROW|wxALL, 5);

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
	info.SetCopyright(wxT("(C) 2011 Philip Pemberton t/a Red Fox Engineering. All rights reserved."));
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
			st = wxString::Format(wxT("%d:%d.%d [%d samples]"), (*i).cylinder(), (*i).head(), (*i).sector(), (*i).data.size());
		else
			st = wxString::Format(wxT("%d:%d [%d samples]"), (*i).cylinder(), (*i).head(), (*i).data.size());

		trackList->Append(st);
	}

	if (trackList->IsEmpty())
		// Select nothing if the list is empty
		trackList->SetSelection(wxNOT_FOUND);
	else
		// Otherwise select the first item
		trackList->SetSelection(0);
}


/*
 * wxEVT_COMMAND_MENU_SELECTED event handler for ID_FILEOPEN_CATWEASEL_IMG
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
			for (streampos i=0; i<plen; i+=1)
				tk.data.push_back(tbuf[plen] & 0x7f);

			// Store track data
			trackData.push_back(tk);

			// Deallocate memory buffer
			delete tbuf;
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


/*
 * wxEVT_COMMAND_LISTBOX_SELECTED event handler for ID_TRACKLIST
 */

void winMain::OnTrackSelected( wxCommandEvent& event )
{
	double data[][2] = {
		{ 10, 20, },
		{ 13, 16, },
		{ 7, 30, },
		{ 15, 34, },
		{ 25, 4, }
	};

	// create plot
	XYPlot *plot = new XYPlot();
	// create dataset
	XYSimpleDataset *dataset = new XYSimpleDataset();
	// add a new series with our data
	dataset->AddSerie((double *)data, WXSIZEOF(data));
	// set renderer (line renderer)
	dataset->SetRenderer(new XYLineRenderer());
	// create number axes on left and bottom
	NumberAxis *leftAxis = new NumberAxis(AXIS_LEFT);
	NumberAxis *bottomAxis = new NumberAxis(AXIS_BOTTOM);
	leftAxis->SetTitle(wxT("X Axis"));
	bottomAxis->SetTitle(wxT("Y Axis"));
	// put it all together
	plot->AddDataset(dataset);
	plot->AddAxis(leftAxis);
	plot->AddAxis(bottomAxis);
	// link data with axis
	plot->LinkDataVerticalAxis(0,0);
	plot->LinkDataHorizontalAxis(0,0);
	// create a chart named "simple xy demo"
	Chart *chart = new Chart(plot, wxT("Simple XY demo"));

	// using wxDefaultPosition and wxDefaultSize makes Bad Things Happen!
	wxChartPanel *chartPanel = new wxChartPanel(histogramPanel, wxID_ANY, chart, wxPoint(0, 0), wxSize(1, 1));

	histogramSizer->Clear();
	histogramSizer->Add(chartPanel, 1, wxGROW | wxALL, 5);
	histogramSizer->Layout();
}

