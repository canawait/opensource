#ifndef __new_php_workspace_dlg__
#define __new_php_workspace_dlg__

/**
@file
Subclass of NewPHPWorkspaceBaseDlg, which is generated by wxFormBuilder.
*/

#include "php_ui.h"

//// end generated include

/** Implementing NewPHPWorkspaceBaseDlg */
class NewPHPWorkspaceDlg : public NewPHPWorkspaceBaseDlg
{
public:
    /** Constructor */
    NewPHPWorkspaceDlg( wxWindow* parent );
    virtual ~NewPHPWorkspaceDlg();
    //// end generated class members
    wxString GetWorkspacePath() const;

protected:
    virtual void OnBrowse(wxCommandEvent& event);
    virtual void OnCheckMakeSeparateDir(wxCommandEvent& event);
    virtual void OnOKUI(wxUpdateUIEvent& event);
    virtual void OnOK(wxCommandEvent& event);
    virtual void OnNameUpdated(wxCommandEvent& event);
};

#endif // __new_php_workspace_dlg__
