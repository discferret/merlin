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
#include "wx/imaglist.h"
////@end includes

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
    Centre();
////@end winMain creation
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

    wxSplitterWindow* itemSplitterWindow2 = new wxSplitterWindow( itemFrame1, ID_SPLITTERWINDOW, wxDefaultPosition, wxSize(100, 100), wxSP_3DBORDER|wxSP_3DSASH|wxSP_LIVE_UPDATE|wxBORDER_THEME );
    itemSplitterWindow2->SetMinimumPaneSize(0);

    wxArrayString trackListStrings;
    trackList = new wxListBox( itemSplitterWindow2, ID_TRACKLIST, wxDefaultPosition, wxDefaultSize, trackListStrings, wxLB_SINGLE );

    wxNotebook* itemNotebook4 = new wxNotebook( itemSplitterWindow2, ID_NOTEBOOK, wxDefaultPosition, wxDefaultSize, wxBK_DEFAULT );

    itemSplitterWindow2->SplitVertically(trackList, itemNotebook4, 300);

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
    return wxNullIcon;
////@end winMain icon retrieval
}
