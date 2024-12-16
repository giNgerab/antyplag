/***************************************************************
 * Name:      antyplagMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2024-12-16
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef ANTYPLAGMAIN_H
#define ANTYPLAGMAIN_H

//(*Headers(antyplagDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class antyplagDialog: public wxDialog
{
    public:

        antyplagDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~antyplagDialog();

    private:

        //(*Handlers(antyplagDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(antyplagDialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE1;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(antyplagDialog)
        wxBoxSizer* BoxSizer1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button1;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxStaticText* StaticText1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ANTYPLAGMAIN_H
