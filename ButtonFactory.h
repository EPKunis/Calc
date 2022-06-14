#pragma once

#include "wx/wx.h"
#include "cMain.h"

class ButtonFactory
{
public:

	ButtonFactory();
	~ButtonFactory();

	wxButton* Creation(cMain* temp, int id, std::string label, int x, int y);
	wxButton* Clear(cMain* temp);

};

