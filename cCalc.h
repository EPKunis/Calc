#pragma once
#include "wx/wx.h"
#include "cMain.h"

class cCalc : public wxApp
{
public:
	cCalc();
	~cCalc();


private:
	cMain* frame = nullptr;

public:
	virtual bool OnInit();
};

