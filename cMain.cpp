#include "cMain.h"
#include "ButtonFactory.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(wxID_ANY,OnButtonClicked)

wxEND_EVENT_TABLE()

//POINT messes with the position
//SIZE messes w this size
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	//txt window
	txt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));

	ButtonFactory BF = ButtonFactory(this);

	Ones_btn = BF.One();
	Two_btn = BF.Two();
	Three_btn = BF.Three();
	Four_btn = BF.Four();
	Five_btn = BF.Five();
	Six_btn = BF.Six();
	Seven_btn = BF.Seven();
	Eight_btn = BF.Eight();
	Nine_btn = BF.Nine();
	Zero_btn = BF.Zero();
	Plus_btn = BF.Add();
	Minus_btn = BF.Minus();
	Mult_btn = BF.Multiply();
	Div_btn = BF.Divide();
	Clear_btn = BF.Clear();
	Mod_btn = BF.Mod();
	Bin_btn = BF.Binary();
	Hex_btn = BF.Hex();
	Dec_btn = BF.Decimal();
	Equal_btn = BF.Equal();
	Neg_btn = BF.Negative();

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