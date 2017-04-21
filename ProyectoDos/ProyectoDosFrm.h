///-----------------------------------------------------------------
///
/// @file      ProyectoDosFrm.h
/// @author    Nomar
/// Created:   04/04/2017 02:55:32 PM
/// @section   DESCRIPTION
///            ProyectoDosFrm class declaration
///
///------------------------------------------------------------------

#ifndef __PROYECTODOSFRM_H__
#define __PROYECTODOSFRM_H__

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
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/tglbtn.h>
#include <wx/statusbr.h>
#include <wx/slider.h>
#include <wx/checkbox.h>
#include <wx/button.h>
////Header Include End

////Dialog Style Start
#undef ProyectoDosFrm_STYLE
#define ProyectoDosFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class ProyectoDosFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		ProyectoDosFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("ProyectoDos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = ProyectoDosFrm_STYLE);
		virtual ~ProyectoDosFrm();
		void Mnusalir1007Click(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxStaticText *WxStaticText1;
		wxMenuBar *WxMenuBar1;
		wxToggleButton *WxToggleButton1;
		wxStatusBar *WxStatusBar1;
		wxSlider *WxSlider1;
		wxCheckBox *WxCheckBox1;
		wxButton *WxButton1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATICTEXT1 = 1008,
			ID_MNU_ARCHIVO_1006 = 1006,
			ID_MNU_SALIR_1007 = 1007,
			
			ID_WXTOGGLEBUTTON1 = 1005,
			ID_WXSTATUSBAR1 = 1004,
			ID_WXSLIDER1 = 1003,
			ID_WXCHECKBOX1 = 1002,
			ID_WXBUTTON1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
