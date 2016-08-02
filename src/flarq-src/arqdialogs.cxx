// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "arqdialogs.h"
#include <config.h>
#include <string>
#include "flarq.h"

static void cb_flarq(Fl_Double_Window*, void*) {
  arqCLOSE();
}

Fl_Menu_Bar *mnu=(Fl_Menu_Bar *)0;

static void cb_mnuExit(Fl_Menu_*, void*) {
  arqCLOSE();
}

static void cb_mnuSendEmail(Fl_Menu_*, void*) {
  sendEmailFile();
}

static void cb_mnuSendText(Fl_Menu_*, void*) {
  sendAsciiFile();
}

static void cb_mnuSendImage(Fl_Menu_*, void*) {
  sendImageFile();
}

static void cb_mnuSendBinary(Fl_Menu_*, void*) {
  sendBinaryFile();
}

static void cb_mnuCompose(Fl_Menu_*, void*) {
  ComposeMail();
}

static void cb_mnuConfig(Fl_Menu_*, void*) {
  cbMenuConfig();
}

static void cb_mnuHowTo(Fl_Menu_*, void*) {
  help_cb();
}

static void cb_mnuAbout(Fl_Menu_*, void*) {
  cbMenuAbout();
}

Fl_Menu_Item menu_mnu[] = {
 {"&File", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"E&xit", 0,  (Fl_Callback*)cb_mnuExit, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Send", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"Email", 0,  (Fl_Callback*)cb_mnuSendEmail, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"Text File", 0,  (Fl_Callback*)cb_mnuSendText, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"Image File", 0,  (Fl_Callback*)cb_mnuSendImage, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"Binary File", 0,  (Fl_Callback*)cb_mnuSendBinary, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"Compose", 0,  (Fl_Callback*)cb_mnuCompose, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Config", 0,  (Fl_Callback*)cb_mnuConfig, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&Help", 0,  0, 0, 64, FL_NORMAL_LABEL, 0, 14, 0},
 {"How To", 0,  (Fl_Callback*)cb_mnuHowTo, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"&About", 0,  (Fl_Callback*)cb_mnuAbout, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Button *btnCONNECT=(Fl_Button *)0;

static void cb_btnCONNECT(Fl_Button*, void*) {
  arqCONNECT();
}

Fl_Input2 *txtURCALL=(Fl_Input2 *)0;

Fl_Light_Button *btnBEACON=(Fl_Light_Button *)0;

static void cb_btnBEACON(Fl_Light_Button*, void*) {
  arqBEACON();
}

Fl_Input2 *txtBeaconing=(Fl_Input2 *)0;

Fl_Box *indCONNECT=(Fl_Box *)0;

Fl_Input2 *txtState=(Fl_Input2 *)0;

Fl_Text_Display *txtARQ=(Fl_Text_Display *)0;

Fl_Input2 *txtStatus=(Fl_Input2 *)0;

Fl_Input2 *txtStatus2=(Fl_Input2 *)0;

Fl_Progress *prgStatus=(Fl_Progress *)0;

Fl_Button *btnClearText=(Fl_Button *)0;

static void cb_btnClearText(Fl_Button*, void*) {
  cbClearText();
}

Fl_Text_Display *txtRX=(Fl_Text_Display *)0;

Fl_Input2 *txtTX=(Fl_Input2 *)0;

static void cb_txtTX(Fl_Input2*, void*) {
  cbSendTalk();
}

Fl_Button *btnSendTalk=(Fl_Button *)0;

static void cb_btnSendTalk(Fl_Button*, void*) {
  cbClearTalk();
}

Fl_Double_Window* arq_dialog() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(515, 415, "flarq");
    w = o;
    o->color(FL_LIGHT1);
    o->callback((Fl_Callback*)cb_flarq);
    { mnu = new Fl_Menu_Bar(0, 0, 516, 22);
      mnu->menu(menu_mnu);
    } // Fl_Menu_Bar* mnu
    { Fl_Group* o = new Fl_Group(0, 25, 515, 60);
      { Fl_Group* o = new Fl_Group(0, 25, 515, 31);
        o->box(FL_ENGRAVED_FRAME);
        { btnCONNECT = new Fl_Button(5, 28, 90, 24, "Connnect");
          btnCONNECT->tooltip("Connect to other station");
          btnCONNECT->color(FL_LIGHT1);
          btnCONNECT->callback((Fl_Callback*)cb_btnCONNECT);
        } // Fl_Button* btnCONNECT
        { txtURCALL = new Fl_Input2(97, 28, 70, 24);
          txtURCALL->tooltip("Connect-to callsign");
          txtURCALL->box(FL_DOWN_BOX);
          txtURCALL->color(FL_BACKGROUND2_COLOR);
          txtURCALL->selection_color(FL_SELECTION_COLOR);
          txtURCALL->labeltype(FL_NORMAL_LABEL);
          txtURCALL->labelfont(0);
          txtURCALL->labelsize(14);
          txtURCALL->labelcolor(FL_FOREGROUND_COLOR);
          txtURCALL->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
          txtURCALL->when(FL_WHEN_RELEASE);
        } // Fl_Input2* txtURCALL
        { btnBEACON = new Fl_Light_Button(168, 28, 79, 24, "Beacon");
          btnBEACON->tooltip("Beacon ON / OFF");
          btnBEACON->selection_color((Fl_Color)2);
          btnBEACON->callback((Fl_Callback*)cb_btnBEACON);
        } // Fl_Light_Button* btnBEACON
        { Fl_Input2* o = txtBeaconing = new Fl_Input2(249, 28, 261, 24, "output:");
          txtBeaconing->box(FL_FLAT_BOX);
          txtBeaconing->color(FL_LIGHT1);
          txtBeaconing->selection_color(FL_SELECTION_COLOR);
          txtBeaconing->labeltype(FL_NORMAL_LABEL);
          txtBeaconing->labelfont(0);
          txtBeaconing->labelsize(14);
          txtBeaconing->labelcolor(FL_FOREGROUND_COLOR);
          txtBeaconing->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
          txtBeaconing->when(FL_WHEN_RELEASE);
          Fl_Group::current()->resizable(txtBeaconing);
          o->type(FL_NORMAL_OUTPUT);
        } // Fl_Input2* txtBeaconing
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(0, 54, 515, 31);
        o->box(FL_ENGRAVED_FRAME);
        { indCONNECT = new Fl_Box(5, 60, 18, 18);
          indCONNECT->tooltip("ARQ state");
          indCONNECT->box(FL_DIAMOND_DOWN_BOX);
          indCONNECT->color(FL_LIGHT1);
          indCONNECT->labelfont(13);
          indCONNECT->align(Fl_Align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE));
        } // Fl_Box* indCONNECT
        { Fl_Input2* o = txtState = new Fl_Input2(27, 57, 483, 24, "Disconnecting");
          txtState->box(FL_FLAT_BOX);
          txtState->color(FL_LIGHT1);
          txtState->selection_color(FL_SELECTION_COLOR);
          txtState->labeltype(FL_NORMAL_LABEL);
          txtState->labelfont(0);
          txtState->labelsize(14);
          txtState->labelcolor(FL_FOREGROUND_COLOR);
          txtState->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
          txtState->when(FL_WHEN_RELEASE);
          Fl_Group::current()->resizable(txtState);
          o->type(FL_NORMAL_OUTPUT);
        } // Fl_Input2* txtState
        o->end();
      } // Fl_Group* o
      o->end();
    } // Fl_Group* o
    { txtARQ = new Fl_Text_Display(0, 87, 515, 117);
      txtARQ->box(FL_DOWN_BOX);
      txtARQ->textfont(4);
      Fl_Group::current()->resizable(txtARQ);
    } // Fl_Text_Display* txtARQ
    { Fl_Group* o = new Fl_Group(0, 206, 516, 26);
      o->box(FL_DOWN_BOX);
      { Fl_Input2* o = txtStatus = new Fl_Input2(5, 208, 220, 22);
        txtStatus->tooltip("Status messages");
        txtStatus->box(FL_DOWN_BOX);
        txtStatus->color(FL_BACKGROUND2_COLOR);
        txtStatus->selection_color(FL_SELECTION_COLOR);
        txtStatus->labeltype(FL_NORMAL_LABEL);
        txtStatus->labelfont(0);
        txtStatus->labelsize(14);
        txtStatus->labelcolor(FL_FOREGROUND_COLOR);
        txtStatus->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
        txtStatus->when(FL_WHEN_RELEASE);
        Fl_Group::current()->resizable(txtStatus);
        o->type(FL_NORMAL_OUTPUT);
      } // Fl_Input2* txtStatus
      { Fl_Input2* o = txtStatus2 = new Fl_Input2(225, 208, 170, 22);
        txtStatus2->box(FL_DOWN_BOX);
        txtStatus2->color(FL_BACKGROUND2_COLOR);
        txtStatus2->selection_color(FL_SELECTION_COLOR);
        txtStatus2->labeltype(FL_NORMAL_LABEL);
        txtStatus2->labelfont(0);
        txtStatus2->labelsize(14);
        txtStatus2->labelcolor(FL_FOREGROUND_COLOR);
        txtStatus2->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
        txtStatus2->when(FL_WHEN_RELEASE);
        o->type(FL_NORMAL_OUTPUT);
      } // Fl_Input2* txtStatus2
      { Fl_Progress* o = prgStatus = new Fl_Progress(395, 210, 70, 18);
        prgStatus->tooltip("Tx/Rx ARQ file transfer progress");
        prgStatus->selection_color((Fl_Color)70);
        prgStatus->labelfont(1);
        o->minimum(0.0);
        o->maximum(1.0);
      } // Fl_Progress* prgStatus
      { btnClearText = new Fl_Button(468, 210, 45, 20, "Clear");
        btnClearText->callback((Fl_Callback*)cb_btnClearText);
      } // Fl_Button* btnClearText
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(0, 235, 515, 180, "Plain Talk");
      o->box(FL_ENGRAVED_FRAME);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { txtRX = new Fl_Text_Display(5, 255, 505, 130);
        txtRX->box(FL_DOWN_BOX);
        txtRX->textfont(4);
        Fl_Group::current()->resizable(txtRX);
      } // Fl_Text_Display* txtRX
      { Fl_Group* o = new Fl_Group(0, 387, 515, 28);
        o->box(FL_ENGRAVED_FRAME);
        { txtTX = new Fl_Input2(5, 390, 450, 22, "input:");
          txtTX->tooltip("Plain talk text - ENTER to send");
          txtTX->box(FL_DOWN_BOX);
          txtTX->color(FL_BACKGROUND2_COLOR);
          txtTX->selection_color(FL_SELECTION_COLOR);
          txtTX->labeltype(FL_NORMAL_LABEL);
          txtTX->labelfont(0);
          txtTX->labelsize(14);
          txtTX->labelcolor(FL_FOREGROUND_COLOR);
          txtTX->callback((Fl_Callback*)cb_txtTX);
          txtTX->align(Fl_Align(FL_ALIGN_CENTER));
          txtTX->when(FL_WHEN_ENTER_KEY);
          Fl_Group::current()->resizable(txtTX);
          txtTX->value("");
          txtTX->maximum_size(80);
        } // Fl_Input2* txtTX
        { btnSendTalk = new Fl_Button(460, 390, 49, 22, "Clear");
          btnSendTalk->callback((Fl_Callback*)cb_btnSendTalk);
        } // Fl_Button* btnSendTalk
        o->end();
      } // Fl_Group* o
      o->end();
    } // Fl_Group* o
    o->end();
  } // Fl_Double_Window* o
  return w;
}

Fl_Input2 *txtMyCall=(Fl_Input2 *)0;

static void cb_txtMyCall(Fl_Input2* o, void*) {
  changeMyCall(o->value());
}

Fl_Input2 *txtBEACONTXT=(Fl_Input2 *)0;

static void cb_txtBEACONTXT(Fl_Input2* o, void*) {
  changeBeaconText(o->value());
}

Fl_Spinner2 *spnRetries=(Fl_Spinner2 *)0;

static void cb_spnRetries(Fl_Spinner2* o, void*) {
  iretries = (int)o->value();
cbSetConfig();
}

Fl_Spinner2 *spnWaitTime=(Fl_Spinner2 *)0;

static void cb_spnWaitTime(Fl_Spinner2* o, void*) {
  iwaittime = (int)(1000 * o->value());
cbSetConfig();
}

Fl_Spinner2 *spnTimeout=(Fl_Spinner2 *)0;

static void cb_spnTimeout(Fl_Spinner2* o, void*) {
  itimeout = (int)(o->value() * 1000.0);
cbSetConfig();
}

Fl_Spinner2 *spnTxDelay=(Fl_Spinner2 *)0;

static void cb_spnTxDelay(Fl_Spinner2* o, void*) {
  txdelay = (int)o->value();
cbSetConfig();
}

Fl_Spinner2 *spnBcnInterval=(Fl_Spinner2 *)0;

static void cb_spnBcnInterval(Fl_Spinner2* o, void*) {
  bcnInterval = (int)o->value();
cbSetConfig();
}

Fl_Button *btnOK=(Fl_Button *)0;

static void cb_btnOK(Fl_Button*, void*) {
  closeConfig();
}

Fl_ComboBox *choiceBlockSize=(Fl_ComboBox *)0;

static void cb_choiceBlockSize(Fl_ComboBox* o, void*) {
  exponent = (int)o->index() + 4;
cbSetConfig();
}

Fl_Double_Window* arq_configure() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(480, 162, "Configure flarq");
    w = o;
    { Fl_Input2* o = txtMyCall = new Fl_Input2(98, 13, 150, 24, "My Call:");
      txtMyCall->box(FL_DOWN_BOX);
      txtMyCall->color(FL_BACKGROUND2_COLOR);
      txtMyCall->selection_color(FL_SELECTION_COLOR);
      txtMyCall->labeltype(FL_NORMAL_LABEL);
      txtMyCall->labelfont(0);
      txtMyCall->labelsize(14);
      txtMyCall->labelcolor(FL_FOREGROUND_COLOR);
      txtMyCall->callback((Fl_Callback*)cb_txtMyCall);
      txtMyCall->align(Fl_Align(FL_ALIGN_LEFT));
      txtMyCall->when(FL_WHEN_RELEASE);
      o->value(MyCall.c_str());
    } // Fl_Input2* txtMyCall
    { Fl_Input2* o = txtBEACONTXT = new Fl_Input2(98, 42, 370, 24, "Beacon Text");
      txtBEACONTXT->tooltip("Text for the beacon 64 chars max");
      txtBEACONTXT->box(FL_DOWN_BOX);
      txtBEACONTXT->color(FL_BACKGROUND2_COLOR);
      txtBEACONTXT->selection_color(FL_SELECTION_COLOR);
      txtBEACONTXT->labeltype(FL_NORMAL_LABEL);
      txtBEACONTXT->labelfont(0);
      txtBEACONTXT->labelsize(14);
      txtBEACONTXT->labelcolor(FL_FOREGROUND_COLOR);
      txtBEACONTXT->callback((Fl_Callback*)cb_txtBEACONTXT);
      txtBEACONTXT->align(Fl_Align(FL_ALIGN_LEFT));
      txtBEACONTXT->when(FL_WHEN_RELEASE);
      Fl_Group::current()->resizable(txtBEACONTXT);
      o->value(beacontext.c_str());
    } // Fl_Input2* txtBEACONTXT
    { Fl_Spinner2* o = spnRetries = new Fl_Spinner2(146, 71, 45, 22, "Retries:");
      spnRetries->tooltip("# retries before connection declared down");
      spnRetries->box(FL_NO_BOX);
      spnRetries->color(FL_BACKGROUND_COLOR);
      spnRetries->selection_color(FL_BACKGROUND_COLOR);
      spnRetries->labeltype(FL_NORMAL_LABEL);
      spnRetries->labelfont(0);
      spnRetries->labelsize(14);
      spnRetries->labelcolor(FL_FOREGROUND_COLOR);
      spnRetries->callback((Fl_Callback*)cb_spnRetries);
      spnRetries->align(Fl_Align(FL_ALIGN_LEFT));
      spnRetries->when(FL_WHEN_RELEASE);
      o->minimum(2);
      o->maximum(20);
      o->step(1);
      o->value(iretries);
    } // Fl_Spinner2* spnRetries
    { Fl_Spinner2* o = spnWaitTime = new Fl_Spinner2(121, 98, 70, 22, "Wait time (sec):");
      spnWaitTime->tooltip("Time between retries");
      spnWaitTime->box(FL_NO_BOX);
      spnWaitTime->color(FL_BACKGROUND_COLOR);
      spnWaitTime->selection_color(FL_BACKGROUND_COLOR);
      spnWaitTime->labeltype(FL_NORMAL_LABEL);
      spnWaitTime->labelfont(0);
      spnWaitTime->labelsize(14);
      spnWaitTime->labelcolor(FL_FOREGROUND_COLOR);
      spnWaitTime->callback((Fl_Callback*)cb_spnWaitTime);
      spnWaitTime->align(Fl_Align(FL_ALIGN_LEFT));
      spnWaitTime->when(FL_WHEN_RELEASE);
      o->minimum(10);
      o->maximum(30);
      o->step(5);
      o->value(iwaittime/1000);
    } // Fl_Spinner2* spnWaitTime
    { Fl_Spinner2* o = spnTimeout = new Fl_Spinner2(121, 126, 70, 22, "Timeout (sec):");
      spnTimeout->tooltip("Time out for dead connection");
      spnTimeout->box(FL_NO_BOX);
      spnTimeout->color(FL_BACKGROUND_COLOR);
      spnTimeout->selection_color(FL_BACKGROUND_COLOR);
      spnTimeout->labeltype(FL_NORMAL_LABEL);
      spnTimeout->labelfont(0);
      spnTimeout->labelsize(14);
      spnTimeout->labelcolor(FL_FOREGROUND_COLOR);
      spnTimeout->callback((Fl_Callback*)cb_spnTimeout);
      spnTimeout->align(Fl_Align(FL_ALIGN_LEFT));
      spnTimeout->when(FL_WHEN_RELEASE);
      o->minimum(30);
      o->maximum(300);
      o->step(15);
      o->value(itimeout / 1000);
    } // Fl_Spinner2* spnTimeout
    { Fl_Spinner2* o = spnTxDelay = new Fl_Spinner2(317, 98, 70, 22, "Tx delay (msec):");
      spnTxDelay->tooltip("delay from Rx to Tx");
      spnTxDelay->box(FL_NO_BOX);
      spnTxDelay->color(FL_BACKGROUND_COLOR);
      spnTxDelay->selection_color(FL_BACKGROUND_COLOR);
      spnTxDelay->labeltype(FL_NORMAL_LABEL);
      spnTxDelay->labelfont(0);
      spnTxDelay->labelsize(14);
      spnTxDelay->labelcolor(FL_FOREGROUND_COLOR);
      spnTxDelay->callback((Fl_Callback*)cb_spnTxDelay);
      spnTxDelay->align(Fl_Align(FL_ALIGN_LEFT));
      spnTxDelay->when(FL_WHEN_RELEASE);
      o->minimum(200);
      o->maximum(2000);
      o->step(100);
      o->value(txdelay);
    } // Fl_Spinner2* spnTxDelay
    { Fl_Spinner2* o = spnBcnInterval = new Fl_Spinner2(398, 71, 70, 22, "Beacon interval (sec)");
      spnBcnInterval->tooltip("Time between beacon transmissions");
      spnBcnInterval->box(FL_NO_BOX);
      spnBcnInterval->color(FL_BACKGROUND_COLOR);
      spnBcnInterval->selection_color(FL_BACKGROUND_COLOR);
      spnBcnInterval->labeltype(FL_NORMAL_LABEL);
      spnBcnInterval->labelfont(0);
      spnBcnInterval->labelsize(14);
      spnBcnInterval->labelcolor(FL_FOREGROUND_COLOR);
      spnBcnInterval->value(120);
      spnBcnInterval->callback((Fl_Callback*)cb_spnBcnInterval);
      spnBcnInterval->align(Fl_Align(FL_ALIGN_LEFT));
      spnBcnInterval->when(FL_WHEN_RELEASE);
      o->minimum(60); o->maximum(3600);
      o->step(30);
      o->value(bcnInterval);
    } // Fl_Spinner2* spnBcnInterval
    { btnOK = new Fl_Button(406, 126, 62, 24, "Ok");
      btnOK->callback((Fl_Callback*)cb_btnOK);
    } // Fl_Button* btnOK
    { choiceBlockSize = new Fl_ComboBox(314, 126, 72, 24, "Block Size:");
      choiceBlockSize->box(FL_DOWN_BOX);
      choiceBlockSize->color(FL_BACKGROUND2_COLOR);
      choiceBlockSize->selection_color(FL_BACKGROUND_COLOR);
      choiceBlockSize->labeltype(FL_NORMAL_LABEL);
      choiceBlockSize->labelfont(0);
      choiceBlockSize->labelsize(14);
      choiceBlockSize->labelcolor(FL_FOREGROUND_COLOR);
      choiceBlockSize->callback((Fl_Callback*)cb_choiceBlockSize);
      choiceBlockSize->align(Fl_Align(FL_ALIGN_LEFT));
      choiceBlockSize->when(FL_WHEN_RELEASE);
      choiceBlockSize->end();
    } // Fl_ComboBox* choiceBlockSize
    o->end();
  } // Fl_Double_Window* o
  return w;
}

Table *tblOutgoing=(Table *)0;

Fl_Button *send_Cancel=(Fl_Button *)0;

static void cb_send_Cancel(Fl_Button*, void*) {
  sendCancel();
}

Fl_Return_Button *send_OK=(Fl_Return_Button *)0;

static void cb_send_OK(Fl_Return_Button*, void*) {
  sendOK();
}

Fl_Double_Window* arq_SendSelect() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(500, 170, "Select Email");
    w = o;
    { tblOutgoing = new Table(0, 3, 500, 140);
      tblOutgoing->box(FL_DOWN_BOX);
      tblOutgoing->color(FL_BACKGROUND2_COLOR);
      tblOutgoing->selection_color((Fl_Color)246);
      tblOutgoing->labeltype(FL_NORMAL_LABEL);
      tblOutgoing->labelfont(0);
      tblOutgoing->labelsize(14);
      tblOutgoing->labelcolor(FL_FOREGROUND_COLOR);
      tblOutgoing->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
      tblOutgoing->when(FL_WHEN_RELEASE);
    } // Table* tblOutgoing
    { send_Cancel = new Fl_Button(335, 145, 70, 20, "Cancel");
      send_Cancel->callback((Fl_Callback*)cb_send_Cancel);
    } // Fl_Button* send_Cancel
    { send_OK = new Fl_Return_Button(420, 145, 72, 20, "OK");
      send_OK->callback((Fl_Callback*)cb_send_OK);
    } // Fl_Return_Button* send_OK
    o->set_modal();
    o->end();
    o->resizable(o);
  } // Fl_Double_Window* o
  return w;
}

Fl_Input2 *inpMailTo=(Fl_Input2 *)0;

Fl_Input2 *inpMailSubj=(Fl_Input2 *)0;

Fl_Text_Editor *txtMailText=(Fl_Text_Editor *)0;

Fl_Button *btnOpenComposedMail=(Fl_Button *)0;

static void cb_btnOpenComposedMail(Fl_Button*, void*) {
  cb_OpenComposeMail();
}

Fl_Button *btnClearComposer=(Fl_Button *)0;

static void cb_btnClearComposer(Fl_Button*, void*) {
  cb_ClearComposer();
}

Fl_Button *btnUseTemplate=(Fl_Button *)0;

static void cb_btnUseTemplate(Fl_Button*, void*) {
  cb_UseTemplate();
}

Fl_Button *btnCancelComposedMail=(Fl_Button *)0;

static void cb_btnCancelComposedMail(Fl_Button*, void*) {
  cb_CancelComposeMail();
}

Fl_Button *btnSaveComposedMail=(Fl_Button *)0;

static void cb_btnSaveComposedMail(Fl_Button*, void*) {
  cb_SaveComposeMail();
}

Fl_Double_Window* arq_composer() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(515, 275, "Flarq Mail Composer");
    w = o;
    { inpMailTo = new Fl_Input2(48, 4, 460, 24, "To:");
      inpMailTo->box(FL_DOWN_BOX);
      inpMailTo->color(FL_BACKGROUND2_COLOR);
      inpMailTo->selection_color(FL_SELECTION_COLOR);
      inpMailTo->labeltype(FL_NORMAL_LABEL);
      inpMailTo->labelfont(0);
      inpMailTo->labelsize(14);
      inpMailTo->labelcolor(FL_FOREGROUND_COLOR);
      inpMailTo->align(Fl_Align(FL_ALIGN_LEFT));
      inpMailTo->when(FL_WHEN_RELEASE);
    } // Fl_Input2* inpMailTo
    { inpMailSubj = new Fl_Input2(48, 30, 460, 24, "Subj:");
      inpMailSubj->box(FL_DOWN_BOX);
      inpMailSubj->color(FL_BACKGROUND2_COLOR);
      inpMailSubj->selection_color(FL_SELECTION_COLOR);
      inpMailSubj->labeltype(FL_NORMAL_LABEL);
      inpMailSubj->labelfont(0);
      inpMailSubj->labelsize(14);
      inpMailSubj->labelcolor(FL_FOREGROUND_COLOR);
      inpMailSubj->align(Fl_Align(FL_ALIGN_LEFT));
      inpMailSubj->when(FL_WHEN_RELEASE);
    } // Fl_Input2* inpMailSubj
    { txtMailText = new Fl_Text_Editor(0, 56, 510, 188);
      Fl_Group::current()->resizable(txtMailText);
    } // Fl_Text_Editor* txtMailText
    { Fl_Pack* o = new Fl_Pack(0, 247, 515, 28);
      o->type(1);
      { btnOpenComposedMail = new Fl_Button(4, 251, 70, 20, "Open");
        btnOpenComposedMail->tooltip("Open existing Composed email");
        btnOpenComposedMail->callback((Fl_Callback*)cb_btnOpenComposedMail);
      } // Fl_Button* btnOpenComposedMail
      { new Fl_Box(75, 251, 5, 20);
      } // Fl_Box* o
      { btnClearComposer = new Fl_Button(81, 251, 70, 20, "Clear");
        btnClearComposer->tooltip("Clear all fields");
        btnClearComposer->callback((Fl_Callback*)cb_btnClearComposer);
      } // Fl_Button* btnClearComposer
      { new Fl_Box(152, 251, 5, 20);
      } // Fl_Box* o
      { btnUseTemplate = new Fl_Button(159, 251, 70, 20, "Template");
        btnUseTemplate->tooltip("Use template file");
        btnUseTemplate->callback((Fl_Callback*)cb_btnUseTemplate);
      } // Fl_Button* btnUseTemplate
      { Fl_Box* o = new Fl_Box(230, 251, 127, 20);
        Fl_Group::current()->resizable(o);
      } // Fl_Box* o
      { btnCancelComposedMail = new Fl_Button(358, 251, 70, 20, "Cancel");
        btnCancelComposedMail->tooltip("Close Dialog");
        btnCancelComposedMail->callback((Fl_Callback*)cb_btnCancelComposedMail);
      } // Fl_Button* btnCancelComposedMail
      { new Fl_Box(429, 251, 5, 20);
      } // Fl_Box* o
      { btnSaveComposedMail = new Fl_Button(436, 251, 70, 20, "Save");
        btnSaveComposedMail->tooltip("Save this message (shift click Save Template)");
        btnSaveComposedMail->callback((Fl_Callback*)cb_btnSaveComposedMail);
      } // Fl_Button* btnSaveComposedMail
      o->end();
    } // Fl_Pack* o
    o->end();
  } // Fl_Double_Window* o
  return w;
}
