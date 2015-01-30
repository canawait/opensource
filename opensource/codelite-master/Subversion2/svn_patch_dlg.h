//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2014 The CodeLite Team
// file name            : svn_patch_dlg.h
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

#ifndef __svn_patch_dlg__
#define __svn_patch_dlg__

/**
@file
Subclass of PatchDlgBase, which is generated by wxFormBuilder.
*/

#include "subversion2_ui.h"

//// end generated include

/** Implementing PatchDlgBase */
class PatchDlg : public PatchDlgBase
{
public:
    /** Constructor */
    PatchDlg( wxWindow* parent );
    //// end generated class members

    virtual ~PatchDlg();
    
    wxFilePickerCtrl* GetFilePicker() const {
        return m_filePicker;
    }
    
    wxRadioBox* GetRadioBoxPolicy() const {
        return m_radioBoxEOLPolicy;
    }
};

#endif // __svn_patch_dlg__
