/*
    Name:       main.cpp
    Purpose:    Implements simple wxWidgets application with GUI
                created using wxCrafter.
    Author:    
    Created:   
    Copyright: 
    License:    wxWidgets license (www.wxwidgets.org)

    Notes:      Note that all GUI creation code is contained in
                the file gui.xrc which is generated by wxCrafter.
*/

#include <wx/app.h>
#include <wx/frame.h>
#include <wx/event.h>
#include <wx/xrc/xmlres.h>
#include <wx/image.h>

#include "main.h"

// initialize the application
IMPLEMENT_APP(MainApp);

////////////////////////////////////////////////////////////////////////////////
// application class implementation 
////////////////////////////////////////////////////////////////////////////////

bool MainApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    wxInitAllImageHandlers();

    wxXmlResource::Get()->InitAllHandlers();

    if (!wxXmlResource::Get()->Load(wxT("../gui.xrc")))
        return false;

    SetTopWindow(new MainFrame(NULL));
    GetTopWindow()->Show();

    // true == enter the main loop
    return true;
}

////////////////////////////////////////////////////////////////////////////////
// main application frame implementation 
////////////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame(wxWindow* parent)
{
    wxXmlResource::Get()->LoadFrame(this, parent, wxT("MainFrame"));

    Connect(wxEVT_CLOSE_WINDOW,
                wxCloseEventHandler(MainFrame::OnCloseFrame));

    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(MainFrame::OnExitClick));
}

MainFrame::~MainFrame()
{
    Disconnect(wxEVT_CLOSE_WINDOW,
                wxCloseEventHandler(MainFrame::OnCloseFrame));

    Disconnect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
                wxCommandEventHandler(MainFrame::OnExitClick));
}

void MainFrame::OnCloseFrame(wxCloseEvent& event)
{
    Destroy();
}

void MainFrame::OnExitClick(wxCommandEvent& event)
{
    Destroy();
}
