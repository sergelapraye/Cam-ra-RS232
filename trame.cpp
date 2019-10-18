//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "trame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	port.Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
    port.Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HautClick(TObject *Sender)
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x03;
	texte[7] = 0x01;
	texte[8] = 0xFF;
	port.Write(texte, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BasClick(TObject *Sender)
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x03;
	texte[7] = 0x02;
	texte[8] = 0xFF;
	port.Write(texte, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ONClick(TObject *Sender)
{
	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x00;
	texte[4] = 0x02;
	texte[5] =  0xFF;
	port.Write(texte, 6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OFFClick(TObject *Sender)
{
	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x00;
	texte[4] = 0x03;
	texte[5] =  0xFF;
	port.Write(texte, 6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GaucheClick(TObject *Sender)
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x01;
	texte[7] = 0x03;
	texte[8] = 0xFF;
	port.Write(texte, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DroiteClick(TObject *Sender)
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x02;
	texte[7] = 0x03;
	texte[8] = 0xFF;
	port.Write(texte, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StopClick(TObject *Sender)
{
	char texte[9];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x06;
	texte[3] = 0x01;
	texte[4] = 0x03;
	texte[5] = 0x01;
	texte[6] = 0x03;
	texte[7] = 0x03;
	texte[8] = 0xFF;
	port.Write(texte, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Mode_automatiqueClick(TObject *Sender)
{
	char home[5];
	home[0] = 0x81;
	home[1] = 0x01;
	home[2] = 0x06;
	home[3] = 0x04;
	home[4] = 0xFF;

	char gauche[9];
	gauche[0] = 0x81;
	gauche[1] = 0x01;
	gauche[2] = 0x06;
	gauche[3] = 0x01;
	gauche[4] = 0x03;
	gauche[5] = 0x01;
	gauche[6] = 0x01;
	gauche[7] = 0x03;
	gauche[8] = 0xFF;

	char droite[9];
	droite[0] = 0x81;
	droite[1] = 0x01;
	droite[2] = 0x06;
	droite[3] = 0x01;
	droite[4] = 0x03;
	droite[5] = 0x01;
	droite[6] = 0x02;
	droite[7] = 0x03;
	droite[8] = 0xFF;

	//port.Write(home, 5);
	//port.Write(gauche, 9);
	//port.Write(droite, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZoomMoinsClick(TObject *Sender)
{
	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x07;
	texte[4] = 0x03;
	texte[5] = 0xFF;

	port.Write(texte, 6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZoomPlusClick(TObject *Sender)
{
	char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x07;
	texte[4] = 0x02;
	texte[5] = 0xFF;

	port.Write(texte, 6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZoomStopClick(TObject *Sender)
{
    char texte[6];
	texte[0] = 0x81;
	texte[1] = 0x01;
	texte[2] = 0x04;
	texte[3] = 0x07;
	texte[4] = 0x00;
	texte[5] = 0xFF;

	port.Write(texte, 6);
}
//---------------------------------------------------------------------------

