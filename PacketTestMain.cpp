/***************************************************************
 * Name:      PacketTestMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Saurabh Jha (saurabh.jha.2010@gmail.com)
 * Created:   2012-11-10
 * Copyright: Saurabh Jha (http://saurabhjha.in)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "PacketTestMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(PacketTestFrame)
#include <wx/string.h>
#include <wx/intl.h>
#include <wx/font.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <vector>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(PacketTestFrame)
const long PacketTestFrame::ID_STATICTEXT1 = wxNewId();
const long PacketTestFrame::ID_STATICTEXT2 = wxNewId();
const long PacketTestFrame::ID_TEXTCTRL1 = wxNewId();
const long PacketTestFrame::ID_STATICTEXT3 = wxNewId();
const long PacketTestFrame::ID_TEXTCTRL2 = wxNewId();
const long PacketTestFrame::ID_COMBOBOX1 = wxNewId();
const long PacketTestFrame::ID_STATICTEXT4 = wxNewId();
const long PacketTestFrame::ID_CHECKBOX1 = wxNewId();
const long PacketTestFrame::ID_STATICTEXT5 = wxNewId();
const long PacketTestFrame::ID_TEXTCTRL3 = wxNewId();
const long PacketTestFrame::ID_STATICTEXT6 = wxNewId();
const long PacketTestFrame::ID_TEXTCTRL4 = wxNewId();
const long PacketTestFrame::ID_BUTTON1 = wxNewId();
const long PacketTestFrame::ID_STATICTEXT7 = wxNewId();
const long PacketTestFrame::ID_TEXTCTRL5 = wxNewId();
const long PacketTestFrame::ID_STATICTEXT8 = wxNewId();
const long PacketTestFrame::ID_TEXTCTRL6 = wxNewId();
const long PacketTestFrame::ID_STATICTEXT9 = wxNewId();
const long PacketTestFrame::ID_TEXTCTRL7 = wxNewId();
const long PacketTestFrame::ID_CHECKBOX2 = wxNewId();
const long PacketTestFrame::ID_BUTTON2 = wxNewId();
const long PacketTestFrame::ID_PANEL1 = wxNewId();
const long PacketTestFrame::idMenuQuit = wxNewId();
const long PacketTestFrame::idMenuAbout = wxNewId();
const long PacketTestFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PacketTestFrame,wxFrame)
    //(*EventTable(PacketTestFrame)
    //*)
END_EVENT_TABLE()

PacketTestFrame::PacketTestFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(PacketTestFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, _("PacketTest"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFULL_REPAINT_ON_RESIZE, _T("wxID_ANY"));
    SetClientSize(wxSize(400,600));
    SetMinSize(wxSize(400,600));
    SetMaxSize(wxSize(400,600));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("/media/DATA/Documents/Web management/imgE.jpg"))));
    	SetIcon(FrameIcon);
    }
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(80,264), wxSize(400,600), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetMinSize(wxSize(-1,-1));
    Panel1->SetMaxSize(wxSize(800,600));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Packet Test"), wxPoint(152,24), wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Destination Address"), wxPoint(24,72), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    TextDst = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(216,72), wxSize(160,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Spoof Address"), wxPoint(24,128), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    TextSpoof = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(216,128), wxSize(160,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    ComboProtocol = new wxComboBox(Panel1, ID_COMBOBOX1, wxEmptyString, wxPoint(216,176), wxSize(166,32), 0, 0, 0, wxDefaultValidator, _T("ID_COMBOBOX1"));
    ComboProtocol->Append(_("TCP"));
    ComboProtocol->Append(_("ICMP"));
    ComboProtocol->Append(_("UDP"));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Protocol"), wxPoint(24,184), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    CheckSyn = new wxCheckBox(Panel1, ID_CHECKBOX1, _("Synchronous"), wxPoint(24,232), wxSize(144,26), 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckSyn->SetValue(false);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Size"), wxPoint(24,280), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    TextDataSize = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(216,272), wxSize(160,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Data File"), wxPoint(24,336), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    TextDataFile = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(216,336), wxSize(160,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Start"), wxPoint(64,480), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Max Packets"), wxPoint(24,376), wxSize(88,22), 0, _T("ID_STATICTEXT7"));
    TextMax = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(216,384), wxSize(144,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    StaticText8 = new wxStaticText(Panel1, ID_STATICTEXT8, _("Port"), wxPoint(224,232), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    TextPort = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(272,232), wxSize(104,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    StaticText9 = new wxStaticText(Panel1, ID_STATICTEXT9, _("DTS"), wxPoint(24,432), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    TextDts = new wxTextCtrl(Panel1, ID_TEXTCTRL7, wxEmptyString, wxPoint(80,432), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    CheckFlood = new wxCheckBox(Panel1, ID_CHECKBOX2, _("Flood Mode"), wxPoint(224,432), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
    CheckFlood->SetValue(false);
    CheckFlood->SetToolTip(_("Overrides DTS and Max"));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Stop"), wxPoint(216,480), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&PacketTestFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&PacketTestFrame::OnButton2Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&PacketTestFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&PacketTestFrame::OnAbout);
    //*)
}

PacketTestFrame::~PacketTestFrame()
{
    //(*Destroy(PacketTestFrame)
    //*)
}

void PacketTestFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void PacketTestFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    msg.Clear();
    msg=_T("\nThis software can send packets of user specified data and size to a destination using specified addresses and protocol.\nSaurabh Jha \nRavi Kumar Singh\nBUNGO COMPANY");
    wxMessageBox(msg, _("About Packet Test..."));
}

pthread_t pid;
void PacketTestFrame::OnButton1Click(wxCommandEvent& event)
{
    std::vector<std::string> alist;
    std::string argstring="";
    std::string dest,spoof,protocol,sync,packetsize,max;
    dest=this->TextDst->GetValue().char_str();
    argstring=dest;
    std::string temp;
    spoof="";
    temp=(this->TextSpoof->GetValue().char_str());
    int flag1,flag2;
    char aTemp[500];
    char nTemp[100];
    strcpy(aTemp,temp.c_str());
    std::string stemp;

    if(temp!="")
    {
        flag1=0;

        for(int i =0; i<temp.length();i++)
       {

           int k;
           if(aTemp[i]==';')
           {
               flag2=i;
               std::cout<<"\n atemp pos"<<aTemp[i];

               k=0;
               for(int j=flag1;j<flag2;j++,k++)
               nTemp[k]=aTemp[j];
               nTemp[k]='\0';
                stemp=nTemp;

                flag1=flag2+1;
                alist.push_back(stemp);

           }



       }

    }
    temp=this->ComboProtocol->GetValue().char_str();
    if(temp!="")
    {
        std::cout<<temp;
        if(temp=="tcp");
        else if(temp=="UDP") argstring+=" --udp";
        else if(temp=="ICMP") argstring+=" --icmp";
    }
    temp=(this->TextPort->GetValue().char_str());
    if(temp!="")
    argstring+=" -p " + temp;
    else argstring+=" -p 80 ";
    sync="";

    if(CheckSyn->GetValue())
    argstring+=" -S";
    packetsize="";
    temp=(this->TextDataSize->GetValue().char_str());
    if(temp!="")
    {
        packetsize=temp;

    }
    else
    packetsize="10"; //default 10
    argstring+=" -d " + packetsize;


    temp=(this->TextDataFile->GetValue().char_str());
    if(temp!="")
    argstring+=" -E "+temp;

    temp=(this->TextMax->GetValue().char_str());
    if(temp!="")
    {
        max=temp;
        argstring+=" -c "+max;

    }

    if(CheckFlood->GetValue())
    {
        argstring+= " --flood";
    }


    for(int i=0;i<alist.size();i++)
    {
        srand ( time(NULL) );

       if (((pid=fork())==0)){ //child
       // execlp("./test.sh","",dest.c_str(),spoof.c_str(),sync.c_str(),packetsize.c_str(),(char*)0);
            temp=(this->TextDts->GetValue().char_str());
            if(temp!="")
            {
                std::string secs="";
                if(temp=="rand")
                    {

                        char p[20];;
                        sprintf(p,"%d",rand()%1000);

                        secs=p;
                        std::cout<<"\nsecs"<<secs;

                        argstring+=" -i u" + secs;
                    }
                else
                argstring+=" -i "+temp;
            }
        argstring+=" -a "+alist[i];
        std::cout<<"\n forked child:"<<pid;
        execlp("./test1.sh","",argstring.c_str(),(char*)0);

        exit(1);
    }}
    if(alist.size()==0)
    {
         if (((pid=fork())==0)){ //child
            temp=(this->TextDts->GetValue().char_str());
            if(temp!="")
            {
                std::string secs;
                if(temp=="rand")
                    {

                        secs=rand()%1000+'\0';
                        std::cout<<"\nsecs"<<secs;

                        argstring+=" -i u" + secs ;
                    }
                else
                argstring+=" -i "+temp;
            }
             execlp("./test1.sh","",argstring.c_str(),(char*)0);
             exit(0);

    }


}
}
void PacketTestFrame::OnButton2Click(wxCommandEvent& event)
{
     if (fork()==0){
        execlp("./stop.sh",(char*)0);


        exit(1);
     }
}

