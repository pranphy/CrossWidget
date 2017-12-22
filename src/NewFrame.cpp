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
	Button1 = (wxButton*)FindWindow(XRCID("ID_BUTTON1"));
	MenuItem1 = GetMenuBar() ? (wxMenuItem*)GetMenuBar()->FindItem(XRCID("ID_FileOpen")) : NULL;
	MenuItem2 = GetMenuBar() ? (wxMenuItem*)GetMenuBar()->FindItem(XRCID("ID_FileSave")) : NULL;
	MenuItem3 = GetMenuBar() ? (wxMenuItem*)GetMenuBar()->FindItem(XRCID("ID_FileClose")) : NULL;
	StatusBar1 = (wxStatusBar*)FindWindow(XRCID("ID_StatusBar"));
	//*)
}

NewFrame::~NewFrame()
{
	//(*Destroy(NewFrame)
	//*)
}
