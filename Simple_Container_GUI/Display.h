//---------------------------------------------------------------------------

#ifndef DisplayH
#define DisplayH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TDisplayForm : public TForm
{
__published:	// IDE-managed Components
	TListBox *DisplayArrayList;
	TButton *RefreshButton;
	void __fastcall RefreshButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDisplayForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDisplayForm *DisplayForm;
//---------------------------------------------------------------------------
#endif
