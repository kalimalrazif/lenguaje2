//---------------------------------------------------------------------------
//
// Name:        ProyectoDosApp.h
// Author:      Nomar
// Created:     04/04/2017 02:55:31 PM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROYECTODOSFRMApp_h__
#define __PROYECTODOSFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class ProyectoDosFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
