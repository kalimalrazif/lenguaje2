// Class automatically generated by Dev-C++ New Class wizard

#ifndef MIPANEL_H
#define MIPANEL_H

#include <wx/panel.h> // inheriting class's header file

/*
 * No description
 */
class MiPanel : public wxPanel
{
    private:
	public:
		// class constructor
		MiPanel(wxWindow *parent, wxWindowID id=wxID_ANY, const wxPoint &pos=wxDefaultPosition, const wxSize &size=wxDefaultSize);
        void paintEvent(wxPaintEvent & evt);
        void paintNow();
 
        void render(wxDC& dc);
        
        DECLARE_EVENT_TABLE()
};

#endif // MIPANEL_H
