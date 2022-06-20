#include "ButtonFactory.h"

ButtonFactory::ButtonFactory()
{

}

ButtonFactory::~ButtonFactory()
{

}

wxButton* ButtonFactory::Creation(cMain* temp, int id, std::string label, int x, int y)
{
	wxButton* tmp_btn = new wxButton(temp, id, label, wxPoint(x, y), wxSize(50, 50));
	return tmp_btn;
}

wxButton* ButtonFactory::Clear(cMain* temp)
{
	wxButton* tmp_btn = new wxButton(temp, 20, "Clear", wxPoint(10, 440), wxSize(200, 50));
	return tmp_btn;
}
