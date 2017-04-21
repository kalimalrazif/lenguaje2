//---------------------------------------------------------------------------
//
// Name:        ProyectoUnoApp.cpp
// Author:      Nomar
// Created:     02/04/2017 06:59:27 PM
// Description: 
//
//---------------------------------------------------------------------------

#include "ProyectoUnoApp.h"
#include "ProyectoUnoFrm.h"

IMPLEMENT_APP(ProyectoUnoFrmApp)

bool ProyectoUnoFrmApp::OnInit()
{
    ProyectoUnoFrm* frame = new ProyectoUnoFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int ProyectoUnoFrmApp::OnExit()
{
	return 0;
}
