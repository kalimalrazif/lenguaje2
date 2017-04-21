//---------------------------------------------------------------------------
//
// Name:        ProyectoUnoApp.h
// Author:      Nomar
// Created:     02/04/2017 06:59:27 PM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROYECTOUNOFRMApp_h__
#define __PROYECTOUNOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class ProyectoUnoFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
