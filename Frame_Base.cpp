///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Frame_Base.h"

///////////////////////////////////////////////////////////////////////////

Frame::Frame(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	this->Centre(wxBOTH);

	// Connect Events
	this->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(Frame::MainFrameOnLeftDown));
	this->Connect(wxEVT_SHOW, wxShowEventHandler(Frame::MainFrameOnShow));
}

Frame::~Frame()
{
	// Disconnect Events
	this->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(Frame::MainFrameOnLeftDown));
	this->Disconnect(wxEVT_SHOW, wxShowEventHandler(Frame::MainFrameOnShow));
}
