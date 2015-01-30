//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: editor_options_guides.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef EDITOR_OPTIONS_GUIDES_BASE_CLASSES_H
#define EDITOR_OPTIONS_GUIDES_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/clrpicker.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/advprops.h>

class EditorOptionsGeneralGuidesPanelBase : public wxPanel
{
protected:
    wxCheckBox* m_displayLineNumbers;
    wxCheckBox* m_showIndentationGuideLines;
    wxCheckBox* m_checkBoxMatchBraces;
    wxCheckBox* m_checkBoxDisableSemicolonShift;
    wxCheckBox* m_checkBoxHideChangeMarkerMargin;
    wxStaticText* m_staticText2;
    wxChoice* m_whitespaceStyle;
    wxStaticText* m_staticText4;
    wxChoice* m_choiceEOL;
    wxCheckBox* m_highlightCaretLine;
    wxStaticText* m_staticText1;
    wxColourPickerCtrl* m_caretLineColourPicker;
    wxCheckBox* m_checkBoxMarkdebuggerLine;
    wxStaticText* m_staticText41;
    wxColourPickerCtrl* m_colourPickerDbgLine;

protected:
    virtual void OnHighlightCaretLine(wxCommandEvent& event) { event.Skip(); }
    virtual void OnhighlightCaretLineUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnDebuggerLineUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetDisplayLineNumbers() { return m_displayLineNumbers; }
    wxCheckBox* GetShowIndentationGuideLines() { return m_showIndentationGuideLines; }
    wxCheckBox* GetCheckBoxMatchBraces() { return m_checkBoxMatchBraces; }
    wxCheckBox* GetCheckBoxDisableSemicolonShift() { return m_checkBoxDisableSemicolonShift; }
    wxCheckBox* GetCheckBoxHideChangeMarkerMargin() { return m_checkBoxHideChangeMarkerMargin; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxChoice* GetWhitespaceStyle() { return m_whitespaceStyle; }
    wxStaticText* GetStaticText4() { return m_staticText4; }
    wxChoice* GetChoiceEOL() { return m_choiceEOL; }
    wxCheckBox* GetHighlightCaretLine() { return m_highlightCaretLine; }
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxColourPickerCtrl* GetCaretLineColourPicker() { return m_caretLineColourPicker; }
    wxCheckBox* GetCheckBoxMarkdebuggerLine() { return m_checkBoxMarkdebuggerLine; }
    wxStaticText* GetStaticText41() { return m_staticText41; }
    wxColourPickerCtrl* GetColourPickerDbgLine() { return m_colourPickerDbgLine; }
    EditorOptionsGeneralGuidesPanelBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~EditorOptionsGeneralGuidesPanelBase();
};


class EditorOptionsGeneralEditBase : public wxPanel
{
protected:
    wxPropertyGridManager* m_pgMgrEdit;
    wxPGProperty* m_pgProp8;
    wxPGProperty* m_pgPropSmartCurly;
    wxPGProperty* m_pgPropSmartParentheses;
    wxPGProperty* m_pgPropSmartQuotes;
    wxPGProperty* m_pgProp16;
    wxPGProperty* m_pgPropWrapQuotes;
    wxPGProperty* m_pgPropWrapBrackets;

protected:
    virtual void OnValueChanged(wxPropertyGridEvent& event) { event.Skip(); }

public:
    wxPropertyGridManager* GetPgMgrEdit() { return m_pgMgrEdit; }
    EditorOptionsGeneralEditBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~EditorOptionsGeneralEditBase();
};

#endif
