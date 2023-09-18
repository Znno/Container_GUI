//---------------------------------------------------------------------------
#include <vcl.h>
#include <vector>
#pragma hdrstop
using namespace std;

#include "Main.h"
#include "Create.h"
#include "Edit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TArrayForm *ArrayForm;
//---------------------------------------------------------------------------
__fastcall TArrayForm::TArrayForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
long long arrsize;
void __fastcall TArrayForm::SetSizeButtonClick(TObject *Sender)
{
	arrsize = StrToInt64(SizeEdit->Text);
	CreateButton->Enabled = 1;
}
//---------------------------------------------------------------------------
void __fastcall TArrayForm::CreateButtonClick(TObject *Sender)
{
	CreateForm->Show();

}
//---------------------------------------------------------------------------
void __fastcall TArrayForm::EditButtonClick(TObject *Sender)
{
	EditForm->Show();
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
extern vector<long long> arr;
void __fastcall TArrayForm::Button1Click(TObject *Sender)
{

	arr.clear();
    CreateForm->ArrayList->Clear();
}
//---------------------------------------------------------------------------

