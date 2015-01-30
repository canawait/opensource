//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2014 The CodeLite Team
// file name            : progress_dialog.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __progress_dialog__
#define __progress_dialog__

/**
@file
Subclass of clProgressDlgBase, which is generated by wxFormBuilder.
*/

#include "clprogressdlgbase.h"
#include "codelite_exports.h"

//// end generated include
#if defined(__WXGTK__) || defined(__WXMAC__)

#include <wx/progdlg.h>

class clProgressDlg : public  wxProgressDialog
{
public:
	clProgressDlg( wxWindow* parent, const wxString &title, const wxString& msg, int maxValue ); 
	virtual ~clProgressDlg();
	bool Update(int value, const wxString &msg);
	bool Pulse(const wxString &msg);
};

#else

/** Implementing clProgressDlgBase */
class WXDLLIMPEXP_CL clProgressDlg : public clProgressDlgBase
{
public:
	/** Constructor */
	clProgressDlg( wxWindow* parent, const wxString &title, const wxString& msg, int maxValue );
	virtual ~clProgressDlg();
	
	//// end generated class members
	bool Update(int value, const wxString &msg);
	bool Pulse(const wxString &msg);
};
#endif
#endif // __progress_dialog__
