#pragma once
#include "wx/wx.h"
class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	wxTextCtrl* txt = nullptr;

	wxButton* Ones_btn = nullptr;
	wxButton* Two_btn = nullptr;
	wxButton* Three_btn = nullptr;
	wxButton* Four_btn = nullptr;
	wxButton* Five_btn = nullptr;
	wxButton* Size_btn = nullptr;
	wxButton* Seven_btn = nullptr;
	wxButton* Eight_btn = nullptr;
	wxButton* Nine_btn = nullptr;
	wxButton* Zero_btn = nullptr;
	wxButton* Plus_btn = nullptr;
	wxButton* Minus_btn = nullptr;
	wxButton* Mult_btn = nullptr;
	wxButton* Div_btn = nullptr;
	wxButton* Equal_btn = nullptr;
	wxButton* Clear_btn = nullptr;
	wxButton* Mod_btn = nullptr;
	wxButton* Bin_btn = nullptr;
	wxButton* Hex_btn = nullptr;
	wxButton* Dec_btn = nullptr;


	
	void OnButtonClicked(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};

