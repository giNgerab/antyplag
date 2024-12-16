/***************************************************************
 * Name:      antyplagApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2024-12-16
 * Copyright:  ()
 * License:
 **************************************************************/

#include "antyplagApp.h"

//(*AppHeaders
#include "antyplagMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(antyplagApp);

bool antyplagApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	antyplagDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
