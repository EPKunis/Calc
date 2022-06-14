#include "cMain.h"
#include "ButtonFactory.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()

//POINT messes with the position
//SIZE messes w this size
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	//txt window
	txt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));

	ButtonFactory BF = ButtonFactory();

	//row 1
	Ones_btn = BF.Creation(this, 1, "1", 10, 140); //frame, id, label, x, y
	Two_btn = BF.Creation(this, 2, "2", 60, 140);
	Three_btn = BF.Creation(this, 3, "3", 110, 140);
	Plus_btn = BF.Creation(this, 11, "+", 160, 140);

	//row 2
	Four_btn = BF.Creation(this, 4, "4", 10, 200);
	Five_btn = BF.Creation(this, 5, "5", 60, 200);
	Six_btn = BF.Creation(this, 6, "6", 110, 200);
	Minus_btn = BF.Creation(this, 12, "-", 160, 200);

	//row 3
	Seven_btn = BF.Creation(this, 7, "7", 10, 260);
	Eight_btn = BF.Creation(this, 8, "8", 60, 260);
	Nine_btn = BF.Creation(this, 9, "9", 110, 260);
	Mult_btn = BF.Creation(this, 12, "*", 160, 260);

	//row 4
	Neg_btn = BF.Creation(this, 14, "+/-", 10, 320);
	Zero_btn = BF.Creation(this,0, "0", 60, 320);
	Div_btn = BF.Creation(this, 16, "/", 110, 320);
	Equal_btn = BF.Creation(this, 17,"=", 160, 320);

	//row5
	Mod_btn = BF.Creation(this, 18, "Mod", 10, 380);
	Bin_btn = BF.Creation(this, 19, "Bin", 60, 380);
	Hex_btn = BF.Creation(this, 20, "Hex", 110, 380);
	Dec_btn = BF.Creation(this, 21, "Dec", 160, 380);

	//clear bar
	Clear_btn = BF.Clear(this);

}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{

	std::string tmp = "";

	wxButton* tst = dynamic_cast<wxButton*>(evt.GetEventObject());

	if (tst == Clear_btn)
	{
		txt->Clear();
	}

	else
	{
		tmp += tst->GetLabel();
		txt->AppendText(tmp);
	}

}