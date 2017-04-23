///-----------------------------------------------------------------
///
/// @file      ProyectoUnoFrm.h
/// @author    Nomar
/// Created:   02/04/2017 06:59:28 PM
/// @section   DESCRIPTION
///            ProyectoUnoFrm class declaration
///
///------------------------------------------------------------------

#ifndef __PROYECTOUNOFRM_H__
#define __PROYECTOUNOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/toolbar.h>
#include <wx/timer.h>
#include <wx/menu.h>
////Header Include End
#include "mipanel.h"
////Dialog Style Start
#undef ProyectoUnoFrm_STYLE
#define ProyectoUnoFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class ProyectoUnoFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		void ProyectoUnoFrmPaint(wxPaintEvent& event);
		ProyectoUnoFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("ProyectoUno"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = ProyectoUnoFrm_STYLE);
		virtual ~ProyectoUnoFrm();
		void Mnusalir1002Click(wxCommandEvent& event);
		void IniciarButtonClick(wxCommandEvent& event);
		void WxTimer1Timer(wxTimerEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxToolBar *WxToolBar1;
		wxTimer *WxTimer1;
		wxMenuBar *WxMenuBar1;
		////GUI Control Declaration End
		MiPanel *panelito;
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXTOOLBUTTON1 = 1008,
			ID_WXTOOLBAR1 = 1007,
			ID_WXTIMER1 = 1006,
			ID_MNU_ARCHIVO_1001 = 1001,
			ID_MNU_SALIR_1002 = 1002,
			
			////GUI Enum Control ID End
			ID_MIPANEL_3000 = 3000,
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
