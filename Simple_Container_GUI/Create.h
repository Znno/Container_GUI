//---------------------------------------------------------------------------

#ifndef CreateH
#define CreateH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <vector>
//---------------------------------------------------------------------------
class TCreateForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *ValueEdit;
	TButton *AddButton;
	TListBox *ArrayList;
	TLabel *ElementValueLbl;
	void __fastcall AddButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCreateForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCreateForm *CreateForm;
//---------------------------------------------------------------------------
#endif
