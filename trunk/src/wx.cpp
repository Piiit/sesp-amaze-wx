/*
 * wx.cpp
 *
 *  Created on: 24.03.2013
 *      Author: Julian
 */

#include <wx/wx.h>

class WxApp : public wxApp {

public:
	virtual bool OnInit();
};

class WxFrame : public wxFrame {

public:
	WxFrame(const wxString& title, const wxPoint& position, const wxSize& size);
	void onQuit(wxCommandEvent& event);
	void onAbout(wxCommandEvent& event);
	DECLARE_EVENT_TABLE()
};

enum {
	ID_QUIT = 1,
	ID_ABOUT
};

BEGIN_EVENT_TABLE(WxFrame, wxFrame)
EVT_MENU(ID_QUIT, WxFrame::onQuit)
EVT_MENU(ID_ABOUT, WxFrame::onAbout)
END_EVENT_TABLE()

IMPLEMENT_APP(WxApp)

bool WxApp::OnInit() {
	WxFrame *frame = new WxFrame(wxT("Hello World"), wxPoint(50, 50),
			wxSize(450, 340));
	frame->Show(true);
	SetTopWindow(frame);
	return true;
}

WxFrame::WxFrame(const wxString& title, const wxPoint& position,
		const wxSize& size) : wxFrame((wxFrame *)0, wxID_ANY, title, position,
				size) {
	wxMenu *menu = new wxMenu();
	menu->Append(ID_ABOUT, wxT("&About..."));
	menu->AppendSeparator();
	menu->Append(ID_QUIT, wxT("E&xit"));

	wxMenuBar *menuBar = new wxMenuBar();
	menuBar->Append(menu, wxT("&File"));

	SetMenuBar(menuBar);

	CreateStatusBar();
	SetStatusText(wxT("Welcome to wxWidgets!"));
}

void WxFrame::onQuit(wxCommandEvent& WXUNUSED(event)) {
	Close(true);
}

void WxFrame::onAbout(wxCommandEvent& WXUNUSED(event)) {
	wxMessageBox(wxT("This is a wxWidget Hello World sample program."),
			wxT("About Hello World"), wxOK | wxICON_INFORMATION, this);
}
