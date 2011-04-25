/////////////////////////////////////////////////////////////////////////////
// Name:        winMain.h
// Purpose:     
// Author:      Philip Pemberton
// Modified by: 
// Created:     Mon 25 Apr 2011 03:23:29 BST
// RCS-ID:      
// Copyright:   (C) 2011 Philip Pemberton
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _WINMAIN_H_
#define _WINMAIN_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/frame.h"
#include "wx/splitter.h"
#include "wx/statusbr.h"
////@end includes

#include <vector>

#include "CTrack.h"

/*!
 * Forward declarations
 */

////@begin forward declarations
class wxStatusBar;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_WINMAIN 10000
#define ID_SPLITTERWINDOW 10002
#define ID_TRACKLIST 10001
#define ID_PANEL 10007
#define ID_STATUSBAR 10003
#define ID_MENU 10005
#define ID_FILEOPEN_CATWEASEL_IMG 10006
#define SYMBOL_WINMAIN_STYLE wxDEFAULT_FRAME_STYLE|wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxMINIMIZE_BOX|wxMAXIMIZE_BOX|wxCLOSE_BOX|wxFULL_REPAINT_ON_RESIZE
#define SYMBOL_WINMAIN_TITLE _("Merlin")
#define SYMBOL_WINMAIN_IDNAME ID_WINMAIN
#define SYMBOL_WINMAIN_SIZE wxSize(800, 570)
#define SYMBOL_WINMAIN_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * winMain class declaration
 */

class winMain: public wxFrame
{
	DECLARE_CLASS( winMain )
	DECLARE_EVENT_TABLE()

public:
	/// Constructors
	winMain();
	winMain( wxWindow* parent, wxWindowID id = SYMBOL_WINMAIN_IDNAME, const wxString& caption = SYMBOL_WINMAIN_TITLE, const wxPoint& pos = SYMBOL_WINMAIN_POSITION, const wxSize& size = SYMBOL_WINMAIN_SIZE, long style = SYMBOL_WINMAIN_STYLE );

	bool Create( wxWindow* parent, wxWindowID id = SYMBOL_WINMAIN_IDNAME, const wxString& caption = SYMBOL_WINMAIN_TITLE, const wxPoint& pos = SYMBOL_WINMAIN_POSITION, const wxSize& size = SYMBOL_WINMAIN_SIZE, long style = SYMBOL_WINMAIN_STYLE );

	/// Destructor
	~winMain();

	/// Initialises member variables
	void Init();

	/// Creates the controls and sizers
	void CreateControls();

////@begin winMain event handler declarations

	/// wxEVT_COMMAND_MENU_SELECTED event handler for ID_FILEOPEN_CATWEASEL_IMG
	void OnFileOpenCatweaselIMGClick( wxCommandEvent& event );

	/// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_EXIT
	void OnEXITClick( wxCommandEvent& event );

	/// wxEVT_COMMAND_MENU_SELECTED event handler for wxID_ABOUT
	void OnHelpAbout( wxCommandEvent& event );

////@end winMain event handler declarations

////@begin winMain member function declarations

	/// Retrieves bitmap resources
	wxBitmap GetBitmapResource( const wxString& name );

	/// Retrieves icon resources
	wxIcon GetIconResource( const wxString& name );
////@end winMain member function declarations

	/// Should we show tooltips?
	static bool ShowToolTips();

////@begin winMain member variables
	wxListBox* trackList;
	wxStaticBitmap* imgHistogram;
	wxStaticBitmap* imgScatter;
	wxStaticBitmap* imgSpeedplot;
	wxStatusBar* statusBar;
////@end winMain member variables

	/// Track data store
	std::vector<CTrack> trackData;
};

#endif
    // _WINMAIN_H_
