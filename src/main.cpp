#include "wx-3.1/wx/wxprec.h"
#include "wx-3.1/wx/wx.h"

#include "calculator.h"

class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

bool MyApp::OnInit(){
    MyFrame4 *frame = new MyFrame4(NULL, wxID_ANY, "Hello world");
    frame->Show(true);
    return true;
}

wxIMPLEMENT_APP(MyApp);
