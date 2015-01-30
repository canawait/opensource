//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : save_perspective_as_dlg.h
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

#ifndef __save_perspective_as_dlg__
#define __save_perspective_as_dlg__

/**
@file
Subclass of SavePerspectiveDlgBase, which is generated by wxFormBuilder.
*/

#include "manageperspectivesbasedlg.h"

//// end generated include

/** Implementing SavePerspectiveDlgBase */
class SavePerspectiveDlg : public SavePerspectiveDlgBase
{
public:
	/** Constructor */
	SavePerspectiveDlg( wxWindow* parent );
	//// end generated class members
	
	wxString GetPerspectiveName() const;
};

#endif // __save_perspective_as_dlg__
