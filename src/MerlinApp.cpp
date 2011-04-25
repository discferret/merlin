/////////////////////////////////////////////////////////////////////////////
// Name:        MerlinApp.cpp
// Purpose:     
// Author:      Philip Pemberton
// Modified by: 
// Created:     Mon 25 Apr 2011 03:22:31 BST
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

#include "../inc/MerlinApp.h"

////@begin XPM images
////@end XPM images


/*
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( MerlinApp )
////@end implement app


/*
 * MerlinApp type definition
 */

IMPLEMENT_CLASS( MerlinApp, wxApp )


/*
 * MerlinApp event table definition
 */

BEGIN_EVENT_TABLE( MerlinApp, wxApp )

////@begin MerlinApp event table entries
////@end MerlinApp event table entries

END_EVENT_TABLE()


/*
 * Constructor for MerlinApp
 */

MerlinApp::MerlinApp()
{
    Init();
}


/*
 * Member initialisation
 */

void MerlinApp::Init()
{
////@begin MerlinApp member initialisation
////@end MerlinApp member initialisation
}

/*
 * Initialisation for MerlinApp
 */

bool MerlinApp::OnInit()
{    
////@begin MerlinApp initialisation
	// Remove the comment markers above and below this block
	// to make permanent changes to the code.

#if wxUSE_XPM
	wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
	wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
	wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
	wxImage::AddHandler(new wxGIFHandler);
#endif
	winMain* mainWindow = new winMain( NULL );
	mainWindow->Show(true);
////@end MerlinApp initialisation

    return true;
}


/*
 * Cleanup for MerlinApp
 */

int MerlinApp::OnExit()
{    
////@begin MerlinApp cleanup
	return wxApp::OnExit();
////@end MerlinApp cleanup
}

