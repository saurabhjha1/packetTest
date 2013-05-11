/***************************************************************
 * Name:      PacketTestMain.h
 * Purpose:   Defines Application Frame
 * Author:    Saurabh Jha (saurabh.jha.2010@gmail.com)
 * Created:   2012-11-10
 * Copyright: Saurabh Jha (http://saurabhjha.in)
 * License:
 **************************************************************/

#ifndef PACKETTESTMAIN_H
#define PACKETTESTMAIN_H

//(*Headers(PacketTestFrame)
#include <wx/combobox.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class PacketTestFrame: public wxFrame
{
    public:

        PacketTestFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~PacketTestFrame();

    private:

        //(*Handlers(PacketTestFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnPanel1Paint(wxPaintEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(PacketTestFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL2;
        static const long ID_COMBOBOX1;
        static const long ID_STATICTEXT4;
        static const long ID_CHECKBOX1;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT6;
        static const long ID_TEXTCTRL4;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT7;
        static const long ID_TEXTCTRL5;
        static const long ID_STATICTEXT8;
        static const long ID_TEXTCTRL6;
        static const long ID_STATICTEXT9;
        static const long ID_TEXTCTRL7;
        static const long ID_CHECKBOX2;
        static const long ID_BUTTON2;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(PacketTestFrame)
        wxPanel* Panel1;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextSpoof;
        wxCheckBox* CheckSyn;
        wxButton* Button1;
        wxButton* Button2;
        wxStaticText* StaticText1;
        wxTextCtrl* TextMax;
        wxStaticText* StaticText3;
        wxTextCtrl* TextPort;
        wxTextCtrl* TextDataSize;
        wxStaticText* StaticText8;
        wxStaticText* StaticText7;
        wxTextCtrl* TextDataFile;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText2;
        wxTextCtrl* TextDst;
        wxStaticText* StaticText6;
        wxCheckBox* CheckFlood;
        wxStaticText* StaticText9;
        wxComboBox* ComboProtocol;
        wxTextCtrl* TextDts;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PACKETTESTMAIN_H
