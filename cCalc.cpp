#include "cCalc.h"
wxIMPLEMENT_APP(cCalc);

cCalc::cCalc()
{
}

cCalc::~cCalc()
{
}

bool cCalc::OnInit() {
	frame = new cMain;
	frame->Show();

	return true;
}