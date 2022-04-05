/***************************************************************
 * Name:      Frame_BaseApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-01-20
 * Copyright:  ()
 * License:
 **************************************************************/

#include "Frame_BaseApp.h"

//(*AppHeaders
#include "MainFrame.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Frame_BaseApp);

bool Frame_BaseApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if (wxsOK)
    {
        MainFrame *Frame = new MainFrame(0);
        Frame->Show();
        SetTopWindow(Frame);
    }
    //*)
    return wxsOK;
}
