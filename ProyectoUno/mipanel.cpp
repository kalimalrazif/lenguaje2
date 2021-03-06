// Class automatically generated by Dev-C++ New Class wizard

#include "mipanel.h" // class's header file
#include "wx/wx.h"
#include "wx/string.h"
// class constructor
MiPanel::MiPanel(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size) : wxPanel(parent, id, pos, size)
{
	// insert your code here
}

void MiPanel::paintEvent(wxPaintEvent & evt)
{
    wxPaintDC dc(this);
    render(dc);
}

void MiPanel::paintNow()
{
    wxClientDC dc(this);
    render(dc);
}

void MiPanel::render(wxDC&  dc)
{
    int h = 0, w = 0;
    this->GetSize(&w,&h);
    wxString alto;
    wxString ancho;
    
    alto << h;
    ancho << w;
    
    // draw some text
    dc.DrawText(ancho + wxT("x") + alto, 0, 0); 
    
    int x = 0;
    
    for (x = 0; x < w; x+=20) {
        dc.SetPen( wxPen( wxColor(0,0,0), 1 ) ); // black line, 3 pixels thick
        dc.DrawLine( x, 0, x, h ); // draw line across the rectangle
    }
    
    /*// draw a rectangle
    dc.SetBrush(*wxBLUE_BRUSH); // blue filling
    dc.SetPen( wxPen( wxColor(255,175,175), 10 ) ); // 10-pixels-thick pink outline
    dc.DrawRectangle( 300, 100, 400, 200 );*/
 
    int y = 0;
    for (y = 0; y < w; y+=20) {
        dc.SetPen( wxPen( wxColor(0,0,0), 1 ) ); // black line, 3 pixels thick
        dc.DrawLine( 0, y, w, y ); // draw line across the rectangle
    }   
 
    // Look at the wxDC docs to learn how to draw other stuff
}

BEGIN_EVENT_TABLE(MiPanel, wxPanel)
// some useful events
/*
 EVT_MOTION(BasicDrawPane::mouseMoved)
 EVT_LEFT_DOWN(BasicDrawPane::mouseDown)
 EVT_LEFT_UP(BasicDrawPane::mouseReleased)
 EVT_RIGHT_DOWN(BasicDrawPane::rightClick)
 EVT_LEAVE_WINDOW(BasicDrawPane::mouseLeftWindow)
 EVT_KEY_DOWN(BasicDrawPane::keyPressed)
 EVT_KEY_UP(BasicDrawPane::keyReleased)
 EVT_MOUSEWHEEL(BasicDrawPane::mouseWheelMoved)
 */
 
// catch paint events
EVT_PAINT(MiPanel::paintEvent)
 
END_EVENT_TABLE()
