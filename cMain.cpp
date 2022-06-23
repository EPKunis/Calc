#include "cMain.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include "IBaseCommand.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()


//POINT messes with the position
//SIZE messes w this size
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(235, 545))
{
	//txt window
	txt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(200, 100));

	//button factory obj
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
	Mult_btn = BF.Creation(this, 13, "*", 160, 260);

	//row 4
	Neg_btn = BF.Creation(this, 16, "+/-", 10, 320);
	Zero_btn = BF.Creation(this, 0, "0", 60, 320);
	Div_btn = BF.Creation(this, 14, "/", 110, 320);
	Equal_btn = BF.Creation(this, 17, "=", 160, 320);

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
	CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();

	wxButton* temp_button = dynamic_cast<wxButton*>(evt.GetEventObject());

	int id = evt.GetId();

	//change to switch statment
	if (id < 11) {
		Equation += temp_button->GetLabel();
		txt->AppendText(temp_button->GetLabel());
	}
	switch (id)
	{

		//add
	case 11:
		Numbers = wxAtoi(Equation);

		txt->AppendText("+");
		_processor->SetBaseNumber(wxAtoi(Equation));
		Equation = "";
		operation = '+';
		break;

		//sub
	case 12:

		txt->AppendText("-");
		_processor->SetBaseNumber(wxAtoi(Equation));
		Equation = "";
		operation = '-';
		break;

		//mult
	case 13:
		txt->AppendText("*");
		_processor->SetBaseNumber(wxAtoi(Equation));
		Equation = "";
		operation = '*';
		break;

		//div
	case 14:
		txt->AppendText("/");
		_processor->SetBaseNumber(wxAtoi(Equation));
		Equation = "";
		operation = '/';
		break;

		//clear
	case 15:
		txt->Clear();
			_processor->SetBaseNumber(0);
			Equation = "";

		//neg
	case 16:
		

		//equals
	case 17:
		if (operation == '+') {
			_processor->Add(wxAtoi(Equation));
		}

		else if (operation == '-') {
			_processor->Subtract(wxAtoi(Equation));
		}

		else if (operation == '*') {
			_processor->Multiply(wxAtoi(Equation));
		}

		else if (operation == '/') {
			_processor->Divide(wxAtoi(Equation));
		}

		else if (operation == '%') {
			_processor->Modulus(wxAtoi(Equation));
		}
		operation = ' ';
		txt->Clear();
		txt->AppendText(_processor->GetDecimal());
		break;

		//mod
	case 18:
		_processor->SetBaseNumber(wxAtoi(Equation));
		Equation = "";
		operation = 'mod';
		break;

		//bin
	case 19:
		_processor->SetBaseNumber(wxAtoi(Equation));
		Equation = _processor->GetBinary();
		txt->Clear();
		txt->AppendText(Equation);
		break;

		//hex
	case 20:
		_processor->SetBaseNumber(wxAtoi(Equation));
		Equation = _processor->GetHexadecimal();
		txt->Clear();
		txt->AppendText(Equation);
		break;

		//decimal
	case 21:
		_processor->SetBaseNumber(wxAtoi(Equation));
		Equation = _processor->GetDecimal();
		txt->Clear();
		txt->AppendText(Equation);
		break;
	}
}