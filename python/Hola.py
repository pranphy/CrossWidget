#!/usr/bin/python
import wx
from wx import xrc


class MyApp(wx.App):

    def OnInit(self):
        self.res = xrc.XmlResource('../res/xrc/NewFrame.xrc')
        self.init_frame()
        return True

    def init_frame(self):
        self.Frame = self.res.LoadFrame(None, 'NewFrame')
        self.ButtonOne = xrc.XRCCTRL(self.Frame, 'ID_FirstButton')
        self.ButtonTwo = xrc.XRCCTRL(self.Frame, 'ID_SecondButton')
        
        #Bind Functions Below
        self.Frame.Bind(wx.EVT_BUTTON,self.OnButtonOneClick,self.ButtonOne)
        
        self.Frame.Show()
     
    def OnButtonOneClick(self,evt):
		openFileDialog = wx.FileDialog(self.Frame, "Open XYZ file", "", "","XYZ files (*.xyz)|*.xyz", wx.FD_OPEN | wx.FD_FILE_MUST_EXIST)

		if openFileDialog.ShowModal() == wx.ID_CANCEL:
			return     # the user changed idea...

        # proceed loading the file chosen by the user
        # this can be done with e.g. wxPython input streams:
		input_stream = wx.FileInputStream(openFileDialog.GetPath())
		if not input_stream.IsOk():
			wx.LogError("Cannot open file '%s'."%openFileDialog.GetPath())
			return
			

if __name__ == '__main__':
    app = MyApp(False)
    app.MainLoop()
