//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
//#include


TForm1 *Form1;

const wchar_t* libraryVS = L"RI-571227_Martynov_DLL";

const wchar_t* libraryRAD = L"Martynov_DLL";

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	//Label2->Visible = true;
	Label1->Text = "                ?? ? ????? >:(";
	//Form1->Close();


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Button2->Enabled = false;
	Button2->Visible = false;
	Button3->Visible = true;
	Button3->Enabled = true;
	Button1->Visible = false;
	Button1->Enabled = false;
	Label1->Text = "   ?????! ????? ?????? ???????!";


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	HINSTANCE loaddll = LoadLibrary(libraryVS);
	Label2->Visible = true;
	if (!loaddll) {
		Label2->Text = "VS ??????????? ?? ???????!";
		HINSTANCE loaddll = LoadLibrary(libraryRAD);
			if (loaddll) {
			Label2->Text = "RAD ?????????? ???????!";
			PRADGruppa RADGruppa;
			RADGruppa = (PRADGruppa)GetProcAddress(loaddll,"RADGruppa");
			PRADImya RADImya;
			RADImya = (PRADImya)GetProcAddress(loaddll,"RADImya");
			Label3->Visible = true;
			Label4->Visible = true;
			Label4->Text = RADGruppa();
			Label5->Visible = true;
			Label6->Visible = true;
			Label6->Text =RADImya();

	}
	else {
		Label2->Text = "?????????? ?? ???????!";
	}
	}
	else {
	   Label2->Text = "VS ?????????? ???????!";
	   PVSGruppa VSGruppa;
	   VSGruppa = (PVSGruppa)GetProcAddress(loaddll,"VSGruppa");
	   PVSImya VSImya;
	   VSImya = (PVSImya)GetProcAddress(loaddll,"VSImya");
	   Label3->Visible = true;
	   Label4->Visible = true;
	   Label4->Text = VSGruppa();
	   Label5->Visible = true;
	   Label6->Visible = true;
	   Label6->Text =VSImya();

	}


}



