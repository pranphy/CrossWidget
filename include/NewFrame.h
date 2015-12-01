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
		wxMenuItem* MenuItem1;
		wxMenu* Menu1;
		wxStatusBar* StatusBar1;
		wxButton* FirstButton;
		wxButton* SecondButton;
		wxMenuBar* MenuBar1;
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
    