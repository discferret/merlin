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

#include "../inc/winMain.h"

////@begin XPM images
////@end XPM images


/*
 * winMain type definition
 */

IMPLEMENT_CLASS( winMain, wxFrame )


/*
 * winMain event table definition
 */

BEGIN_EVENT_TABLE( winMain, wxFrame )

////@begin winMain event table entries
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
	quips.Add(_T("Magic Quip System powered by dumb luck and brute force!"));
	quips.Add(_T("Use the Force, Luke!"));														// Star Wars
	quips.Add(_T("Use the Source, Luke!"));													// because after all, this app is OSS/FS...
	quips.Add(_T("Runaway train, never going back... wrong way on a one-way track..."));		// Soul Asylum / Runaway Train
	quips.Add(_T("Perfectionism is the enemy of 'just good enough'."));						// Mark Jackson, Echostar CTO (hi, Mark!)
	quips.Add(_T("I have altered the deal. Pray I do not alter it further."));					// More Star Wars
	quips.Add(_T("Dead or alive, you're coming with me."));									// Robocop
	quips.Add(_T("Baldrick, I have a cunning plan."));											// Blackadder
	quips.Add(_T("DiscFerret: it's not just a cute name."));
	quips.Add(_T("Coming soon: in-status-bar advertising!"));									// God I hope not.
	quips.Add(_T("There are no stupid answers, Cartman, only stupid people."));				// South Park.
	quips.Add(_T("You were only supposed to blow the bloody doors off!"));						// The Italian Job
	quips.Add(_T("When in trouble, when in doubt, run in circles, scream and shout."));		// Freefall #47: http://freefall.purrsia.com/ff100/fv00047.htm
	quips.Add(_T("All technology, no matter how primitive, is magic to those who don't understand it."));	// Freefall #255: http://freefall.purrsia.com/ff300/fv00255.htm
	quips.Add(_T("I do not read organic expressions well and yours still worry me."));			// Freefall #2021: http://freefall.purrsia.com/ff2100/fv02021.htm
	// I should probably stop quoting Freefall before Mark Stanley sics a lawyer on me.
	quips.Add(_T("YOW! Are we having fun yet?"));												// Zippy the Pinhead
	quips.Add(_T("Java is an affront to software engineering."));								// Seriously. I spent TWO DAYS trying to get this app working in Java.
																								// After switching to wxWidgets I had a working prototype in less than a day.
	quips.Add(_T("What have the Romans ever done for us?"));									// Monty Python's Life of Brian
	quips.Add(_T("Do not fold, bend, spindle or mutilate."));									// IBM punched cards (allegedly)
	quips.Add(_T("Smoke me a kipper, I'll be back for breakfast."));							// 'Ace' Rimmer (Red Dwarf)
	quips.Add(_T("It is a miracle that curiosity survives formal education."));				// Albert Einstein
	quips.Add(_T("Beware of computer programmers that carry screwdrivers."));
	quips.Add(_T("And thus the Lord spake: 'Verily, ye shalt bewareth of the Programmer that carryeth a Soldering Iron.'"));
	quips.Add(_T("You can be my Yoko Ono, you can follow me wherever I go..."));				// Barenaked Ladies -- Be My Yoko Ono
	quips.Add(_T("It's all been done before (whoo-hoo-hoo!). It's all been done... before!"));	// Barenaked Ladies -- It's All Been Done
	quips.Add(_T("Your mother was a hamster and your father smelt of elderberries."));			// Monty Python and the Holy Grail
	quips.Add(_T("Made it, Ma! Top of the world!"));											// James Cagney in White Heat
	quips.Add(_T("I'm going to make him an offer he can't refuse."));							// The Godfather
	quips.Add(_T("Toto, I've got a feeling we're not in Kansas anymore."));					// The Wizard of Oz
	quips.Add(_T("What we've got here is a failure to communicate."));							// Cool Hand Luke
	quips.Add(_T("Rosebud."));																	// Citizen Kane
	quips.Add(_T("I'm as mad as hell, and I'm not going to take this anymore!"));				// Network
	quips.Add(_T("Gentlemen. You can't fight in here. This is the War Room!"));				// Dr. Strangelove
	quips.Add(_T("Gratuitous acts of senseless violence are my forte!"));						// Sam and Max Hit The Road
	quips.Add(_T("I don't think this is a natural occurrence, Max. In fact, I think we're witnessing a celestial convergence of some sort.")); // Sam & Max
	quips.Add(_T("I'm sure this thing is somehow useful, but I'll be damned if I know how."));	// Sam and Max Hit The Road
	quips.Add(_T("I'm thinking of a number between one and ten, and... I don't know why."));	// Sam and Max Hit The Road
	quips.Add(_T("Looks to me like a margionally vulnerable hostage situation!"));				// Sam and Max Hit The Road

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
	imgHistogram = NULL;
	imgScatter = NULL;
	imgSpeedplot = NULL;
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
	wxMenu* itemMenu14 = new wxMenu;
	wxMenu* itemMenu15 = new wxMenu;
	itemMenu15->Append(ID_FILEOPEN_CATWEASEL_IMG, _("Catweasel IMG"), wxEmptyString, wxITEM_NORMAL);
	itemMenu14->Append(ID_MENU, _("Open"), itemMenu15);
	itemMenu14->Append(wxID_EXIT, _("E&xit"), wxEmptyString, wxITEM_NORMAL);
	menuBar->Append(itemMenu14, _("&File"));
	wxMenu* itemMenu18 = new wxMenu;
	itemMenu18->Append(wxID_ABOUT, _("&About"), wxEmptyString, wxITEM_NORMAL);
	menuBar->Append(itemMenu18, _("Help"));
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
	imgHistogram = new wxStaticBitmap( itemPanel4, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	itemStaticBoxSizer6->Add(imgHistogram, 1, wxGROW|wxALL, 5);

	wxStaticBox* itemStaticBoxSizer8Static = new wxStaticBox(itemPanel4, wxID_ANY, _("Scatter"));
	wxStaticBoxSizer* itemStaticBoxSizer8 = new wxStaticBoxSizer(itemStaticBoxSizer8Static, wxHORIZONTAL);
	itemBoxSizer5->Add(itemStaticBoxSizer8, 1, wxGROW|wxALL, 5);
	imgScatter = new wxStaticBitmap( itemPanel4, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	itemStaticBoxSizer8->Add(imgScatter, 1, wxGROW|wxALL, 5);

	wxStaticBox* itemStaticBoxSizer10Static = new wxStaticBox(itemPanel4, wxID_ANY, _("Speed graph"));
	wxStaticBoxSizer* itemStaticBoxSizer10 = new wxStaticBoxSizer(itemStaticBoxSizer10Static, wxHORIZONTAL);
	itemBoxSizer5->Add(itemStaticBoxSizer10, 1, wxGROW|wxALL, 5);
	imgSpeedplot = new wxStaticBitmap( itemPanel4, wxID_STATIC, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	itemStaticBoxSizer10->Add(imgSpeedplot, 1, wxGROW|wxALL, 5);

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
	info.SetName(_("MagDAS II Plus"));
	info.SetVersion(_("0.0.1 alpha 1"));
	info.SetDescription(_("Analysis tool for magnetic transition images."));
	info.SetCopyright(_T("(C) 2011 Philip Pemberton t/a Red Fox Engineering. All rights reserved."));
	info.SetLicense(_T("Internal beta release, do not distribute!"));
	info.SetWebSite(_T("http://www.discferret.com/"));

	info.AddDeveloper(_T("Philip Pemberton"));

	info.AddArtist(_T("DiscFerret logo by Michelle Van Zandt, http://graphix.ginpu.us/"));

	wxAboutBox(info);
}


/*
 * wxEVT_COMMAND_MENU_SELECTED event handler for ID_FILEOPEN_CATWEASEL_IMG
 */

void winMain::OnFileOpenCatweaselIMGClick( wxCommandEvent& event )
{
	wxFileDialog* OpenDialog = new wxFileDialog(
		this, _("Choose a file to open"), wxEmptyString, wxEmptyString, 
		_("Catweasel IMG files (*.img)|*.img"),
		wxFD_OPEN, wxDefaultPosition);
 
	// Creates a "open file" dialog with 4 file types
	if (OpenDialog->ShowModal() == wxID_OK) // if the user click "Open" instead of "Cancel"
	{
		wxString CurrentDocPath = OpenDialog->GetPath();
		// Sets our current document to the file the user selected
//		MainEditBox->LoadFile(CurrentDocPath); //Opens that file

		// Set the Title to reflect the file open
		SetTitle(wxString(_T("Merlin - ")) << OpenDialog->GetFilename());
	}
 
	// Clean up after ourselves
	OpenDialog->Destroy();
}
