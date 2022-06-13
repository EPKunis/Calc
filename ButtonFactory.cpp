#include "ButtonFactory.h"

ButtonFactory::ButtonFactory(cMain* _tempView)
{
    Calc_frame = _tempView;
}

ButtonFactory::~ButtonFactory()
{

}

wxButton* ButtonFactory:: Zero()
{
    wxButton* temp = new wxButton(Calc_frame, 0, "0", wxPoint(60, 320), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::One()
{
    wxButton* temp = new wxButton(Calc_frame, 1, "1", wxPoint(10, 140), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Two()
{
    wxButton* temp = new wxButton(Calc_frame, 2, "2", wxPoint(60, 140), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Three()
{
    wxButton* temp = new wxButton(Calc_frame, 3, "3", wxPoint(110, 140), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Four()
{
    wxButton* temp = new wxButton(Calc_frame, 4, "4", wxPoint(10, 200), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Five()
{
    wxButton* temp = new wxButton(Calc_frame, 5, "5", wxPoint(60, 200), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Six()
{
    wxButton* temp = new wxButton(Calc_frame, 6, "6", wxPoint(110, 200), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Seven()
{
    wxButton* temp = new wxButton(Calc_frame, 7, "7", wxPoint(10, 260), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Eight()
{
    wxButton* temp = new wxButton(Calc_frame, 8, "8", wxPoint(60, 260), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Nine()
{
    wxButton* temp = new wxButton(Calc_frame, 9, "9", wxPoint(110, 260), wxSize(50, 50));
    return temp;
}
wxButton* ButtonFactory::Equal()
{
    wxButton* temp = new wxButton(Calc_frame, 14, "=", wxPoint(160, 320), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Binary()
{
    wxButton* temp = new wxButton(Calc_frame, 17, "BIN", wxPoint(60, 380), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Hex()
{
    wxButton* temp = new wxButton(Calc_frame, 18, "HEX", wxPoint(110, 380), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Decimal()
{
    wxButton* temp = new wxButton(Calc_frame, 19, "DEC", wxPoint(10, 380), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Add()
{
    wxButton* temp = new wxButton(Calc_frame, 10, "+", wxPoint(160, 140), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Minus()
{
    wxButton* temp = new wxButton(Calc_frame, 11, "-", wxPoint(160, 200), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Multiply()
{
    wxButton* temp = new wxButton(Calc_frame, 13, "*", wxPoint(110, 320), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Divide()
{
    wxButton* temp = new wxButton(Calc_frame, 12, "/", wxPoint(160, 260), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Mod()
{
    wxButton* temp = new wxButton(Calc_frame, 16, "MOD", wxPoint(160, 380), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Negative()
{
    wxButton* temp = new wxButton(Calc_frame, 19, "+/-", wxPoint(10, 320), wxSize(50, 50));
    return temp;
}

wxButton* ButtonFactory::Clear()
{
    wxButton* temp = new wxButton(Calc_frame, 15, "Clear", wxPoint(10, 440), wxSize(200, 50));
    return temp;
}
