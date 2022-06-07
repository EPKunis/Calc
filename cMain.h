#pragma once
#include "wx/wx.h"
class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:

	wxButton* btn = nullptr;
	wxTextCtrl* txt = nullptr;

	int* nField = nullptr;
	bool FirstClick = true;


	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

