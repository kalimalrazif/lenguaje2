///-----------------------------------------------------------------
///
/// @file      ProyectoDosFrm.cpp
/// @author    Nomar
/// Created:   04/04/2017 02:55:32 PM
/// @section   DESCRIPTION
///            ProyectoDosFrm class implementation
///
///------------------------------------------------------------------

#include "ProyectoDosFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// ProyectoDosFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(ProyectoDosFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(ProyectoDosFrm::OnClose)
	EVT_MENU(ID_MNU_SALIR_1007, ProyectoDosFrm::Mnusalir1007Click)
	EVT_BUTTON(ID_WXBUTTON1,ProyectoDosFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

ProyectoDosFrm::ProyectoDosFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

ProyectoDosFrm::~ProyectoDosFrm()
{
}

void ProyectoDosFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("WxButton1"), wxPoint(216, 208), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton1"));

	WxCheckBox1 = new wxCheckBox(this, ID_WXCHECKBOX1, _("WxCheckBox1"), wxPoint(91, 346), wxSize(97, 17), 0, wxDefaultValidator, _("WxCheckBox1"));

	WxSlider1 = new wxSlider(this, ID_WXSLIDER1, 0, 0, 10, wxPoint(390, 196), wxSize(150, 45), wxSL_HORIZONTAL | wxSL_SELRANGE , wxDefaultValidator, _("WxSlider1"));
	WxSlider1->SetRange(0,10);
	WxSlider1->SetValue(0);

	WxStatusBar1 = new wxStatusBar(this, ID_WXSTATUSBAR1);

	WxToggleButton1 = new wxToggleButton(this, ID_WXTOGGLEBUTTON1, _("WxToggleButton1"), wxPoint(402, 43), wxSize(75, 25), 0, wxDefaultValidator, _("WxToggleButton1"));

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_ARCHIVO_1006_Mnu_Obj = new wxMenu();
	ID_MNU_ARCHIVO_1006_Mnu_Obj->Append(ID_MNU_SALIR_1007, _("Salir"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_ARCHIVO_1006_Mnu_Obj, _("Archivo"));
	SetMenuBar(WxMenuBar1);

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("WxStaticText1"), wxPoint(387, 245), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(26, wxSWISS, wxNORMAL, wxNORMAL, false));

	SetStatusBar(WxStatusBar1);
	SetTitle(_("ProyectoDos"));
	SetIcon(wxNullIcon);
	SetSize(8,8,783,492);
	Center();
	
	////GUI Items Creation End
}

void ProyectoDosFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Mnusalir1007Click
 */
void ProyectoDosFrm::Mnusalir1007Click(wxCommandEvent& event)
{
	Close(true);
}

/*
 * WxButton1Click
 */
void ProyectoDosFrm::WxButton1Click(wxCommandEvent& event)
{
	this->WxStaticText1->SetLabel("Hola Mundo");
	int algo = 0;
}
