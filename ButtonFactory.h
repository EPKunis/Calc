#pragma once

#include "wx/wx.h"
#include "cMain.h"

class ButtonFactory
{
private:
	cMain* Calc_frame = nullptr;
public:

	ButtonFactory(cMain* _tempView);
	~ButtonFactory();

	wxButton* ZeroButton();
	wxButton* OneButton();
	wxButton* TwoButton();
	wxButton* ThreeButton();
	wxButton* FourButton();
	wxButton* FiveButton();
	wxButton* SixButton();
	wxButton* SevenButton();
	wxButton* EightButton();
	wxButton* NineButton();
	wxButton* BinButton();
	wxButton* HexButton();
	wxButton* DecButton();
	wxButton* AddButton();
	wxButton* MinButton();
	wxButton* MultButton();
	wxButton* DivButton();
	wxButton* ModButton();
	wxButton* NegButton();
	wxButton* ClearButton();
	wxButton* EqualButton();

};

