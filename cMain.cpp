#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(10001, OnButtonClicked)

wxEND_EVENT_TABLE()

//POINT messes with the position
//SIZE messes w this size
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	txt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));

	btn = new wxButton(this, 1, "1", wxPoint(10, 140), wxSize(50, 50));
	btn = new wxButton(this, 2, "2", wxPoint(60, 140), wxSize(50, 50));
	btn = new wxButton(this, 3, "3", wxPoint(110, 140), wxSize(50, 50));
	btn = new wxButton(this, 4, "4", wxPoint(10, 200), wxSize(50, 50));
	btn = new wxButton(this, 5, "5", wxPoint(60, 200), wxSize(50, 50));
	btn = new wxButton(this, 6, "6", wxPoint(110, 200), wxSize(50, 50));
	btn = new wxButton(this, 7, "7", wxPoint(10, 260), wxSize(50, 50));
	btn = new wxButton(this, 8, "8", wxPoint(60, 260), wxSize(50, 50));
	btn = new wxButton(this, 9, "9", wxPoint(110, 260), wxSize(50, 50));
	btn = new wxButton(this, 10, "+", wxPoint(160, 140), wxSize(50, 50));
	btn = new wxButton(this, 11, "0", wxPoint(60, 320), wxSize(50, 50));
	btn = new wxButton(this, 12, "-", wxPoint(160, 200), wxSize(50, 50));
	btn = new wxButton(this, 13, "=", wxPoint(160, 320), wxSize(50, 50));
	btn = new wxButton(this, 14, "C", wxPoint(10, 320), wxSize(50, 50));
	btn = new wxButton(this, 15, "MOD", wxPoint(160, 380), wxSize(50, 50));
	btn = new wxButton(this, 16, "/", wxPoint(160, 260), wxSize(50, 50));
	btn = new wxButton(this, 17, "BIN", wxPoint(60, 380), wxSize(50, 50));
	btn = new wxButton(this, 18, "HEX", wxPoint(110, 380), wxSize(50, 50));
	btn = new wxButton(this, 19, "DEC", wxPoint(10, 380), wxSize(50, 50));
	btn = new wxButton(this, 20, "*", wxPoint(110, 320), wxSize(50, 50));
}

cMain::~cMain()
{
}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{

}