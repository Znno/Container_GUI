//---------------------------------------------------------------------------

#include <vcl.h>
#include <vector>
#include "Main.h"
#pragma hdrstop

#include "Create.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCreateForm *CreateForm;
//---------------------------------------------------------------------------
__fastcall TCreateForm::TCreateForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
extern long long arrsize;
vector <long long> arr;
long long temp = 0;
void __fastcall TCreateForm::AddButtonClick(TObject *Sender)
{
	ArrayForm->EditButton->Enabled = 1;
	ArrayForm->Button1->Enabled = 1;

	if (temp<arrsize) {
		long long elementValue = StrToInt64(ValueEdit->Text);
		ArrayList->Items->Add(elementValue);
		arr.push_back(elementValue);
		temp++;
	}

	if (temp==arrsize) {
		ValueEdit->Enabled = 0;
		AddButton->Enabled = 0;
        ValueEdit->Clear();
	}


}
//---------------------------------------------------------------------------
