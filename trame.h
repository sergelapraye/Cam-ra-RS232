//---------------------------------------------------------------------------

#ifndef trameH
#define trameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>
#include "RS232.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *Droite;
	TButton *Gauche;
	TButton *Bas;
	TButton *Haut;
	TButton *Mode_automatique;
	TButton *ON;
	TButton *OFF;
	TButton *Stop;
	TLabel *Zoom;
	TButton *ZoomPlus;
	TButton *ZoomStop;
	TButton *ZoomMoins;
	TLabel *Deplacement;

	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall HautClick(TObject *Sender);
	void __fastcall BasClick(TObject *Sender);
	void __fastcall ONClick(TObject *Sender);
	void __fastcall OFFClick(TObject *Sender);
	void __fastcall GaucheClick(TObject *Sender);
	void __fastcall DroiteClick(TObject *Sender);
	void __fastcall StopClick(TObject *Sender);
	void __fastcall Mode_automatiqueClick(TObject *Sender);
	void __fastcall ZoomMoinsClick(TObject *Sender);
	void __fastcall ZoomPlusClick(TObject *Sender);
	void __fastcall ZoomStopClick(TObject *Sender);
private:	// Déclarations utilisateur
	RS232 port;
	//OVERLAPPED over;
	std::vector<char> received;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
