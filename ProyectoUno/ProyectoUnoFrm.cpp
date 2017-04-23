///-----------------------------------------------------------------
///
/// @file      ProyectoUnoFrm.cpp
/// @author    Nomar
/// Created:   02/04/2017 06:59:28 PM
/// @section   DESCRIPTION
///            ProyectoUnoFrm class implementation
///
///------------------------------------------------------------------

#include "ProyectoUnoFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
#include "Images/ProyectoUnoFrm_WxToolButton1_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// ProyectoUnoFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(ProyectoUnoFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(ProyectoUnoFrm::OnClose)
	EVT_TIMER(ID_WXTIMER1,ProyectoUnoFrm::WxTimer1Timer)
	EVT_MENU(ID_MNU_SALIR_1002, ProyectoUnoFrm::Mnusalir1002Click)
END_EVENT_TABLE()
////Event Table End

ProyectoUnoFrm::ProyectoUnoFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

ProyectoUnoFrm::~ProyectoUnoFrm()
{
}

void ProyectoUnoFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_ARCHIVO_1001_Mnu_Obj = new wxMenu();
	ID_MNU_ARCHIVO_1001_Mnu_Obj->Append(ID_MNU_SALIR_1002, _("&Salir"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_ARCHIVO_1001_Mnu_Obj, _("A&rchivo"));
	SetMenuBar(WxMenuBar1);

	WxTimer1 = new wxTimer();
	WxTimer1->SetOwner(this, ID_WXTIMER1);

	WxToolBar1 = new wxToolBar(this, ID_WXTOOLBAR1, wxPoint(0, 0), wxSize(624, 29));

	wxBitmap WxToolButton1_BITMAP (ProyectoUnoFrm_WxToolButton1_XPM);
	wxBitmap WxToolButton1_DISABLE_BITMAP (wxNullBitmap);
	WxToolBar1->AddTool(ID_WXTOOLBUTTON1, _("bla"), WxToolButton1_BITMAP, WxToolButton1_DISABLE_BITMAP, wxITEM_NORMAL, _(""), _(""));

	WxToolBar1->SetToolBitmapSize(wxSize(20,20));
	WxToolBar1->Realize();
	SetToolBar(WxToolBar1);
	SetTitle(_("ProyectoUno"));
	SetIcon(wxNullIcon);
	SetSize(8,8,640,480);
	Center();
	
	////GUI Items Creation End
	panelito = new MiPanel(this, ID_MIPANEL_3000,wxPoint(48, 97), wxSize(185, 41));
	panelito->SetBackgroundColour(wxColour(_("MAROON")));
}

void ProyectoUnoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Mnusalir1002Click
 */
void ProyectoUnoFrm::Mnusalir1002Click(wxCommandEvent& event)
{
	Close(true);
}

/*
 * IniciarButtonClick
 */
void ProyectoUnoFrm::IniciarButtonClick(wxCommandEvent& event)
{
	int se_prendio_esta_mierda = 1;
    // insert your code here
}

/*
 * WxTimer1Timer
 */
void ProyectoUnoFrm::WxTimer1Timer(wxTimerEvent& event)
{
	// insert your code here
}
