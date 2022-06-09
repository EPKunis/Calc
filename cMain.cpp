#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(10001, OnButtonClicked)

wxEND_EVENT_TABLE()

//POINT messes with the position
//SIZE messes w this size
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	txt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));

	Ones_btn = new wxButton(this, 10001, "1", wxPoint(10, 140), wxSize(50, 50));
	Two_btn = new wxButton(this, 10002, "2", wxPoint(60, 140), wxSize(50, 50));
	Three_btn = new wxButton(this, 10003, "3", wxPoint(110, 140), wxSize(50, 50));
	Plus_btn = new wxButton(this, 10010, "+", wxPoint(160, 140), wxSize(50, 50));

	Four_btn = new wxButton(this, 10004, "4", wxPoint(10, 200), wxSize(50, 50));
	Five_btn = new wxButton(this, 10005, "5", wxPoint(60, 200), wxSize(50, 50));
	Size_btn = new wxButton(this, 10006, "6", wxPoint(110, 200), wxSize(50, 50));
	Minus_btn = new wxButton(this, 10012, "-", wxPoint(160, 200), wxSize(50, 50));

	Seven_btn = new wxButton(this, 10007, "7", wxPoint(10, 260), wxSize(50, 50));
	Eight_btn = new wxButton(this, 10008, "8", wxPoint(60, 260), wxSize(50, 50));
	Nine_btn = new wxButton(this, 10009, "9", wxPoint(110, 260), wxSize(50, 50));
	Div_btn = new wxButton(this, 10016, "/", wxPoint(160, 260), wxSize(50, 50));

	Zero_btn = new wxButton(this, 10000, "0", wxPoint(60, 320), wxSize(50, 50));
	Equal_btn = new wxButton(this, 10013, "=", wxPoint(160, 320), wxSize(50, 50));
	Clear_btn = new wxButton(this, 10014, "C", wxPoint(10, 320), wxSize(50, 50));
	Mult_btn = new wxButton(this, 10020, "*", wxPoint(110, 320), wxSize(50, 50));

	Mod_btn = new wxButton(this, 10015, "MOD", wxPoint(160, 380), wxSize(50, 50));
	Bin_btn = new wxButton(this, 10017, "BIN", wxPoint(60, 380), wxSize(50, 50));
	Hex_btn = new wxButton(this, 10018, "HEX", wxPoint(110, 380), wxSize(50, 50));
	Dec_btn = new wxButton(this, 10019, "DEC", wxPoint(10, 380), wxSize(50, 50));



	Ones_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Clear_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Zero_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);

	/*Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);*/
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	int id = (evt.GetId() - 10000);
	std::string tmp = "";
	if (id == 0)
	{
		tmp += std::to_string(id);
		txt->AppendText(tmp);
	}

	if (id == 1)
	{

		tmp += std::to_string(id);
		txt->AppendText(tmp);
	}

	if (id == 2)
	{
		tmp += std::to_string(id);
		txt->AppendText(tmp);
	}

	if (id == 16)
	{
		tmp.clear();
		txt->Clear();
		txt->AppendText(tmp);
	}

	//FOR SIGNS DO PUSH BACK AND NOT APPEND
}