/***************************************************************
 * Name:      HolaApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Prakash (pranphy@gmail.com)
 * Created:   2015-12-01
 * Copyright: Prakash (pranphy.com)
 * License:
 **************************************************************/

#include "HolaApp.h"
#include "NewFrame.h"

//(*AppHeaders
#include <wx/xrc/xmlres.h>
#include <wx/image.h>
//*)

IMPLEMENT_APP(HolaApp);

bool HolaApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    wxXmlResource::Get()->InitAllHandlers();
    wxsOK = wxsOK && wxXmlResource::Get()->Load(_T("res/xrc/NewFrame.xrc"));
    if ( wxsOK )
    {
        NewFrame* Frame = new NewFrame(0);
        Frame->Show();
        SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
