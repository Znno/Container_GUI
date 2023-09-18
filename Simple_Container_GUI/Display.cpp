//---------------------------------------------------------------------------

#include <vcl.h>
#include <vector>
#pragma hdrstop
using namespace std;

#include "Display.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDisplayForm *DisplayForm;
//---------------------------------------------------------------------------
__fastcall TDisplayForm::TDisplayForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
extern vector <long long> arr;
void __fastcall TDisplayForm::RefreshButtonClick(TObject *Sender)
{
	long long arraySize=arr.size();
	DisplayArrayList->Clear();
	for (long long i=0;i<arraySize;i++){
		DisplayArrayList->Items->Add(arr[i]);
	}
}
//---------------------------------------------------------------------------

