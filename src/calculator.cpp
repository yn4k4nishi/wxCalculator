///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "calculator.h"

///////////////////////////////////////////////////////////////////////////

MyFrame4::MyFrame4( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("display") ), wxVERTICAL );

	sbSizer6->SetMinSize( wxSize( 300,-1 ) );
	m_textCtrl2 = new wxTextCtrl( sbSizer6->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer6->Add( m_textCtrl2, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	fgSizer3->Add( sbSizer6, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("label") ), wxHORIZONTAL );

	m_button43 = new wxButton( sbSizer8->GetStaticBox(), wxID_ANY, wxT("C"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer8->Add( m_button43, 0, wxALL, 5 );

	m_button44 = new wxButton( sbSizer8->GetStaticBox(), wxID_ANY, wxT("AC"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer8->Add( m_button44, 0, wxALL, 5 );


	fgSizer3->Add( sbSizer8, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("label") ), wxVERTICAL );

	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 4, 4, 0, 0 );

	NUM7 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("7"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM7, 0, wxALL|wxEXPAND, 5 );

	NUM8 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("8"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM8, 0, wxALL|wxEXPAND, 5 );

	NUM9 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("9"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM9, 0, wxALL|wxEXPAND, 5 );

	Div = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( Div, 0, wxALL|wxEXPAND, 5 );

	NUM4 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("4"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM4, 0, wxALL|wxEXPAND, 5 );

	NUM5 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM5, 0, wxALL|wxEXPAND, 5 );

	NUM6 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("6"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM6, 0, wxALL|wxEXPAND, 5 );

	Mult = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("x"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( Mult, 0, wxALL|wxEXPAND, 5 );

	NUM1 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM1, 0, wxALL|wxEXPAND, 5 );

	NUM2 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("2"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM2, 0, wxALL|wxEXPAND, 5 );

	NUM3 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("3"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM3, 0, wxALL|wxEXPAND, 5 );

	Sub = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("-"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( Sub, 0, wxALL|wxEXPAND, 5 );

	NUM0 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( NUM0, 0, wxALL|wxEXPAND, 5 );

	Dot = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("."), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( Dot, 0, wxALL|wxEXPAND, 5 );

	Equal = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("="), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer3->Add( Equal, 0, wxALL|wxEXPAND, 5 );

	Add = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, wxT("+"), wxDefaultPosition, wxSize( -1,60 ), 0 );
	gSizer3->Add( Add, 0, wxALL|wxEXPAND, 5 );


	sbSizer9->Add( gSizer3, 1, wxEXPAND, 5 );


	fgSizer3->Add( sbSizer9, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( fgSizer3 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	NUM7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_7 ), NULL, this );
	NUM8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_8 ), NULL, this );
	NUM9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_9 ), NULL, this );
	NUM4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_4 ), NULL, this );
	NUM5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_5 ), NULL, this );
	NUM6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_6 ), NULL, this );
	NUM1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_1 ), NULL, this );
	NUM2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_2 ), NULL, this );
	NUM3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_3 ), NULL, this );
	NUM0->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_0 ), NULL, this );
}

MyFrame4::~MyFrame4()
{
	// Disconnect Events
	NUM7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_7 ), NULL, this );
	NUM8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_8 ), NULL, this );
	NUM9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_9 ), NULL, this );
	NUM4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_4 ), NULL, this );
	NUM5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_5 ), NULL, this );
	NUM6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_6 ), NULL, this );
	NUM1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_1 ), NULL, this );
	NUM2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_2 ), NULL, this );
	NUM3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_3 ), NULL, this );
	NUM0->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame4::push_0 ), NULL, this );

}
