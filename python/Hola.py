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
        #self.FileOpenMenu = xrc.XRCCTRL(self.Frame,'ID_FileOpen')
        
        #Bind Functions Below
        self.Frame.Bind(wx.EVT_BUTTON,self.OnButtonOneClick,self.ButtonOne)
        
        self.Frame.Show()
     
    def OnButtonOneClick(self,evt):
		wx.MessageBox('Welcome to the good Night')
		

if __name__ == '__main__':
    app = MyApp(False)
    app.MainLoop()
