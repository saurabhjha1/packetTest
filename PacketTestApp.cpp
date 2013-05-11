/***************************************************************
 * Name:      PacketTestApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Saurabh Jha (saurabh.jha.2010@gmail.com)
 * Created:   2012-11-10
 * Copyright: Saurabh Jha (http://saurabhjha.in)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "PacketTestApp.h"

//(*AppHeaders
#include "PacketTestMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(PacketTestApp);

bool PacketTestApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	PacketTestFrame* Frame = new PacketTestFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
