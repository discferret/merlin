/////////////////////////////////////////////////////////////////////////////
// Name:        MerlinApp.h
// Purpose:     
// Author:      Philip Pemberton
// Modified by: 
// Created:     Mon 25 Apr 2011 03:22:31 BST
// RCS-ID:      
// Copyright:   (C) 2011 Philip Pemberton
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _MERLINAPP_H_
#define _MERLINAPP_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
#include "winMain.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
////@end control identifiers

/*!
 * MerlinApp class declaration
 */

class MerlinApp: public wxApp
{    
    DECLARE_CLASS( MerlinApp )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    MerlinApp();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin MerlinApp event handler declarations

////@end MerlinApp event handler declarations

////@begin MerlinApp member function declarations

////@end MerlinApp member function declarations

////@begin MerlinApp member variables
////@end MerlinApp member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(MerlinApp)
////@end declare app

#endif
    // _MERLINAPP_H_
