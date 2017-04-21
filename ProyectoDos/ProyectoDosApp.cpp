//---------------------------------------------------------------------------
//
// Name:        ProyectoDosApp.cpp
// Author:      Nomar
// Created:     04/04/2017 02:55:31 PM
// Description: 
//
//---------------------------------------------------------------------------

#include "ProyectoDosApp.h"
#include "ProyectoDosFrm.h"

IMPLEMENT_APP(ProyectoDosFrmApp)

bool ProyectoDosFrmApp::OnInit()
{
    ProyectoDosFrm* frame = new ProyectoDosFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int ProyectoDosFrmApp::OnExit()
{
	return 0;
}
