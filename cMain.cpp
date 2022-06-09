#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(10001, OnButtonClicked)

wxEND_EVENT_TABLE()

//POINT messes with the position
//SIZE messes w this size
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	//txt window
	txt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));

	//row 1
	Ones_btn = new wxButton(this, 1, "1", wxPoint(10, 140), wxSize(50, 50));
	Two_btn = new wxButton(this, 2, "2", wxPoint(60, 140), wxSize(50, 50));
	Three_btn = new wxButton(this, 3, "3", wxPoint(110, 140), wxSize(50, 50));
	Plus_btn = new wxButton(this, 10, "+", wxPoint(160, 140), wxSize(50, 50));

	//row2
	Four_btn = new wxButton(this, 4, "4", wxPoint(10, 200), wxSize(50, 50));
	Five_btn = new wxButton(this, 5, "5", wxPoint(60, 200), wxSize(50, 50));
	Size_btn = new wxButton(this, 6, "6", wxPoint(110, 200), wxSize(50, 50));
	Minus_btn = new wxButton(this, 11, "-", wxPoint(160, 200), wxSize(50, 50));

	//row3
	Seven_btn = new wxButton(this, 7, "7", wxPoint(10, 260), wxSize(50, 50));
	Eight_btn = new wxButton(this, 8, "8", wxPoint(60, 260), wxSize(50, 50));
	Nine_btn = new wxButton(this, 9, "9", wxPoint(110, 260), wxSize(50, 50));
	Div_btn = new wxButton(this, 12, "/", wxPoint(160, 260), wxSize(50, 50));

	//row4
	Zero_btn = new wxButton(this, 0, "0", wxPoint(60, 320), wxSize(50, 50));
	Equal_btn = new wxButton(this, 14, "=", wxPoint(160, 320), wxSize(50, 50));
	Clear_btn = new wxButton(this, 15, "C", wxPoint(10, 320), wxSize(50, 50));
	Mult_btn = new wxButton(this, 13, "*", wxPoint(110, 320), wxSize(50, 50));

	//row5
	Mod_btn = new wxButton(this, 16, "MOD", wxPoint(160, 380), wxSize(50, 50));
	Bin_btn = new wxButton(this, 17, "BIN", wxPoint(60, 380), wxSize(50, 50));
	Hex_btn = new wxButton(this, 18, "HEX", wxPoint(110, 380), wxSize(50, 50));
	Dec_btn = new wxButton(this, 19, "DEC", wxPoint(10, 380), wxSize(50, 50));

	//number binds
	Zero_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Ones_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Two_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Three_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Four_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Five_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Size_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Seven_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Eight_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Nine_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);

	//other function Binds
	Plus_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Minus_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Div_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Mult_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Equal_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Clear_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);

	//Modes
	Mod_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Hex_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Bin_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	Dec_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	int id = (evt.GetId());
	std::string tmp = "";

	//numbers
	if (id < 10)
	{
		tmp += std::to_string(id);
		txt->AppendText(tmp);
	}

	//for the math part of it all
	if (id >= 10 && id < 15)
	{
		if (id == 10)
		{
			char sign = '+';
			tmp.push_back(sign);
			txt->AppendText(tmp);
		}

		if (id == 11)
		{
			char sign = '-';
			tmp.push_back(sign);
			txt->AppendText(tmp);
		}

		if (id == 12)
		{
			char sign = '/';
			tmp.push_back(sign);
			txt->AppendText(tmp);
		}

		if (id == 13)
		{
			char sign = '*';
			tmp.push_back(sign);
			txt->AppendText(tmp);
		}

		if (id == 14)
		{
			char sign = '=';
			tmp.push_back(sign);
			txt->AppendText(tmp);
		}

		//testign ways to get the sign without all the if statements above
		/*std::string test = "";

		test = evt.GetString();
		tmp += test;
		txt->AppendText(tmp);*/
	}

	if (id == 15)
	{
		//Clear the window
		txt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));
	}

	//for the mods
	else
	{

	}

	//FOR SIGNS DO PUSH BACK AND NOT APPEND
}