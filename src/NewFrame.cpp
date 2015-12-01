#include "NewFrame.h"

//(*InternalHeaders(NewFrame)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(NewFrame)
//*)

BEGIN_EVENT_TABLE(NewFrame,wxFrame)
	//(*EventTable(NewFrame)
	//*)
END_EVENT_TABLE()

NewFrame::NewFrame(wxWindow* parent)
{
	//(*Initialize(NewFrame)
	wxXmlResource::Get()->LoadObject(this,parent,_T("NewFrame"),_T("wxFrame"));
	FirstButton = (wxButton*)FindWindow(XRCID("ID_FirstButton"));
	SecondButton = (wxButton*)FindWindow(XRCID("ID_SecondButton"));
	MenuItem1 = GetMenuBar() ? (wxMenuItem*)GetMenuBar()->FindItem(XRCID("ID_FileOpen")) : NULL;
	StatusBar1 = (wxStatusBar*)FindWindow(XRCID("ID_StatusBar"));
	//*)
}

NewFrame::~NewFrame()
{
	//(*Destroy(NewFrame)
	//*)
}
