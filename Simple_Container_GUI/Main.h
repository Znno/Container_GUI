//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TArrayForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *SizeEdit;
	TButton *SetSizeButton;
	TButton *CreateButton;
	TButton *EditButton;
	TLabel *ArraySizeLbl;
	TButton *Button1;
	void __fastcall SetSizeButtonClick(TObject *Sender);
	void __fastcall CreateButtonClick(TObject *Sender);
	void __fastcall EditButtonClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TArrayForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TArrayForm *ArrayForm;
//---------------------------------------------------------------------------
#endif
