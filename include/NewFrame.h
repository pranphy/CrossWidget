#ifndef NEWFRAME_H
#define NEWFRAME_H

//(*Headers(NewFrame)
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class NewFrame: public wxFrame
{
	public:

		NewFrame(wxWindow* parent);
		virtual ~NewFrame();

		//(*Declarations(NewFrame)
		wxMenuItem* MenuItem2;
		wxMenuItem* MenuItem1;
		wxMenu* Menu1;
		wxStatusBar* StatusBar1;
		wxButton* FirstButton;
		wxButton* Button1;
		wxButton* SecondButton;
		wxMenuItem* MenuItem3;
		wxMenuBar* MenuBar1;
		wxMenu* Menu2;
		//*)

	protected:

		//(*Identifiers(NewFrame)
		//*)

	private:

		//(*Handlers(NewFrame)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
