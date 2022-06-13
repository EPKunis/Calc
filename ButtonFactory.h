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

	wxButton* Zero();
	wxButton* One();
	wxButton* Two();
	wxButton* Three();
	wxButton* Four();
	wxButton* Five();
	wxButton* Six();
	wxButton* Seven();
	wxButton* Eight();
	wxButton* Nine();
	wxButton* Binary();
	wxButton* Hex();
	wxButton* Decimal();
	wxButton* Add();
	wxButton* Minus();
	wxButton* Multiply();
	wxButton* Divide();
	wxButton* Mod();
	wxButton* Negative();
	wxButton* Clear();
	wxButton* Equal();

};

