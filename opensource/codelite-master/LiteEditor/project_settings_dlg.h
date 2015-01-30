//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : project_settings_dlg.h
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
#ifndef __project_settings_dlg__
#define __project_settings_dlg__

/**
@file
Subclass of ProjectSettingsBaseDlg, which is generated by wxFormBuilder.
@todo Add your event handlers directly to this file.
*/

#include "project_settings_base_dlg.h"
#include "project_settings.h"
#include "compiler.h"


class PSGeneralPage;
class ProjectSettingsDlg;
class wxPGProperty;
class WorkspaceTab;
/////////////////////////////////////////////////////////////
// base class for the project settings pages
/////////////////////////////////////////////////////////////
class IProjectSettingsPage
{
public:
    IProjectSettingsPage() {}
    virtual ~IProjectSettingsPage() {}

    virtual void Save(BuildConfigPtr buildConf, ProjectSettingsPtr projSettingsPtr) = 0;
    virtual void Load(BuildConfigPtr buildConf) = 0;
    virtual void Clear() = 0;

    virtual bool PopupAddOptionDlg(wxTextCtrl *ctrl);
    virtual bool PopupAddOptionDlg(wxString &value);
    virtual bool SelectChoiceWithGlobalSettings(wxChoice* c, const wxString& text);
    virtual void SelectChoiceWithGlobalSettings(wxPGProperty* p, const wxString& text);
    virtual bool PopupAddOptionCheckDlg(wxTextCtrl *ctrl, const wxString& title, const Compiler::CmpCmdLineOptions& options);
    virtual bool PopupAddOptionCheckDlg(wxString &v, const wxString& title, const Compiler::CmpCmdLineOptions& options);

};

/**
 * Implementing GlobalSettingsBasePanel
 */
class GlobalSettingsPanel : public GlobalSettingsBasePanel, public IProjectSettingsPage
{
    wxString            m_projectName;
    ProjectSettingsDlg *m_dlg;
    PSGeneralPage *     m_gp;

public:
    GlobalSettingsPanel(wxWindow* parent, const wxString &projectName, ProjectSettingsDlg *dlg, PSGeneralPage *gp);

    virtual void Clear();
    virtual void Load(BuildConfigPtr buildConf);
    virtual void Save(BuildConfigPtr buildConf, ProjectSettingsPtr projSettingsPtr);

protected:
    virtual void OnCustomEditorClicked(wxCommandEvent& event);
    virtual void OnValueChanged(wxPropertyGridEvent& event);
};

/**
 * Implementing ProjectSettingsBaseDlg
 */
class ProjectSettingsDlg : public ProjectSettingsBaseDlg
{
    wxString  m_projectName;
    wxString  m_configName;
    bool      m_isDirty;
    bool      m_isCustomBuild;
    bool      m_isProjectEnabled;
    WorkspaceTab* m_workspaceTab;

protected:
    virtual void OnPageChanged(wxTreebookEvent& event);
    void SaveValues();
    void ClearValues();
    void LoadValues(const wxString &configName);
    void BuildTree();
    void DoClearDialog();
    void DoGetAllBuildConfigs();

public:
    virtual void OnButtonCancel(wxCommandEvent& event);
    void SetIsProjectEnabled(bool isProjectEnabled) {
        this->m_isProjectEnabled = isProjectEnabled;
    }
    bool IsProjectEnabled() const {
        return m_isProjectEnabled;
    }
    bool IsCustomBuildEnabled() const {
        return m_isCustomBuild;
    }
    void SetCustomBuildEnabled(bool b) {
        if(b != m_isCustomBuild) {
            SetIsDirty(true);
        }
        m_isCustomBuild = b;
    }
    void SetIsDirty(bool isDirty) {
        this->m_isDirty = isDirty;
    }
    bool GetIsDirty() const {
        return m_isDirty;
    }

    /**
     * @brief show an info bar at the top of the dialog to indicate that this project is disabled
     */
    void ShowHideDisabledMessage();

    /**
     * @brief show an info bar at the top of dialog to indicate that the options are disabled
     */
    void ShowCustomProjectMessage(bool show);

public:
    /** Constructor */
    ProjectSettingsDlg(wxWindow* parent, WorkspaceTab* workspaceTab, const wxString& configName, const wxString& projectName, const wxString& title);
    virtual ~ProjectSettingsDlg();

    const wxString& GetConfigName() const {
        return m_configName;
    }
    const wxString& GetProjectName() const {
        return m_projectName;
    }

    DECLARE_EVENT_TABLE()

    virtual void OnButtonApply(wxCommandEvent &event);
    virtual void OnButtonOK(wxCommandEvent &event);
    virtual void OnButtonHelp(wxCommandEvent &e);
    virtual void OnButtonApplyUI(wxUpdateUIEvent& event);
    virtual void OnConfigurationChanged(wxCommandEvent& event);
    virtual void OnProjectSelected(wxCommandEvent &e);
    virtual void OnWorkspaceClosed(wxCommandEvent &e);

};

#endif // __project_settings_dlg__
