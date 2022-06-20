#include "cMain.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()



//POINT messes with the position
//SIZE messes w this size
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
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
	Mult_btn = BF.Creation(this, 12, "*", 160, 260);

	//row 4
	Neg_btn = BF.Creation(this, 14, "+/-", 10, 320);
	Zero_btn = BF.Creation(this, 0, "0", 60, 320);
	Div_btn = BF.Creation(this, 16, "/", 110, 320);
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
		if (tst->GetLabel() == '=')
		{

		}
		else
		{
			equation += tst->GetLabel();
		}


		//tmp = tst->GetLabel();
		//std::string tttemp = (txt->GetLabelText()).ToStdString();
		//std::string test5 = "";
		//test5 = txt->GetLabel().ToStdString();

		if (tst->GetLabel() == '=')
		{
			std::string print_ans = " ";
			for (int i = 0; i < equation.size(); i++)
			{
				if (equation[i] == '+')
				{
					
					double first = equation[0, i];
					double second = equation[i + 1 , equation.size()];
					first += second;

					print_ans += std::to_string(first);
					txt->AppendText(print_ans);
				}
			}
		}

		/*if (tst->GetLabel() == '=')
		{
			std::string equation_tmp1 = " ";/
			double first = 0;
			double second = 0;
			double ans = 0;
			for (int i = 0; i < equation.size(); i++)
			{
				if (equation[i] != '+')
				{
					equation_tmp1 += equation[i];
					equation.erase(equation.begin());
				}
				first = equation_tmp1[i];

			}
		}*/

	}

	//have a processor
	//if teh button is a sign add to a prcessor operation
	//if equeal call calculate
	//if binary call processor bin if hex call hex if decimal call decimal
}