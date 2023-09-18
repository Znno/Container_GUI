//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vector>

#include "Edit.h"
#include "Display.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEditForm *EditForm;
//---------------------------------------------------------------------------
__fastcall TEditForm::TEditForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

extern vector <long long> arr;

void __fastcall TEditForm::SearchByIButtonClick(TObject *Sender)
{
	long long searchIndex = StrToInt64(SearchByIndex->Text);
	if (searchIndex<arr.size()) {
		ShowMessage("Element found with value " + IntToStr(arr[searchIndex]));
	} else {
		ShowMessage("Out of bounds!!");
	}

}
//---------------------------------------------------------------------------
void __fastcall TEditForm::SearchByValueButtonClick(TObject *Sender)
{
	long long searchValue = StrToInt64(SearchValueEdit->Text);
	for (long long i=0;i<arr.size();++i) {
		if (arr[i]==searchValue) {
		   ShowMessage("Element found in index #" + IntToStr(i));
		   break;
		}
		if (i==arr.size()-1){
			ShowMessage("Element Not Found!!");
		}
	}

}
void __fastcall TEditForm::DeleteButtonClick(TObject *Sender)
{
	long long deleteValue = StrToInt64(DeleteByValueEdit->Text);
	bool flag = 0;
	for (long long i=0;i<arr.size();++i) {
		if (arr[i]==deleteValue) {
			arr.erase(arr.begin()+i);
            i--;
			flag=1;
		}
	}

	if (flag==0){
		ShowMessage("Element Not Found!");
	} else {
		ShowMessage("Element(s) with value " + IntToStr(deleteValue)+ " had been Deleted!");
    }
}
//---------------------------------------------------------------------------
void __fastcall TEditForm::DisplayButtonClick(TObject *Sender)
{
	DisplayForm->DisplayArrayList->Clear();
	for (long long i=0;i<arr.size();i++){
		DisplayForm->DisplayArrayList->Items->Add(arr[i]);
	}
	DisplayForm->Show();

}
//---------------------------------------------------------------------------
void __fastcall TEditForm::largeButtonClick(TObject *Sender)
{
	long long maxi = arr[0];
	for (long long i=1;i<arr.size();++i) {
		if (arr[i]>maxi) {
			maxi = arr[i];
		}
	}
	ShowMessage("Largest number is " + IntToStr(maxi));
}
//---------------------------------------------------------------------------
void __fastcall TEditForm::smallButtonClick(TObject *Sender)
{
	long long small = arr[0];
	for (long long i=1;i<arr.size();++i) {
		if (arr[i]<small) {
			small = arr[i];
		}
	}
	ShowMessage("Smallest number is " + IntToStr(small));
}
//---------------------------------------------------------------------------
void __fastcall TEditForm::SumButtonClick(TObject *Sender)
{
	long long sum = 0;
	for (long long i=0;i<arr.size();++i) {
		sum += arr[i];
	}
	ShowMessage("Sum is " + IntToStr(sum));
}
//---------------------------------------------------------------------------
void __fastcall TEditForm::MultButtonClick(TObject *Sender)
{
	long long multi = 1;
	for (long long i=0;i<arr.size();++i) {
		multi *= arr[i];
	}
	ShowMessage("multiplication is " + IntToStr(multi));
}
//---------------------------------------------------------------------------
void __fastcall TEditForm::Button1Click(TObject *Sender)
{
	long long deleteIndex = StrToInt64(DeleteByIndexEdit->Text);
	if (deleteIndex<arr.size()) {
		arr.erase(arr.begin()+deleteIndex);
		ShowMessage("Element with index #"+IntToStr(deleteIndex)+" had been deleted!");
	} else {
		ShowMessage("Out of bounds!!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TEditForm::Button2Click(TObject *Sender)
{

	for(long long i {1};i<arr.size();i++) {
		long long key=arr[i];
		long long j=i-1;
		while(j>=0&&arr[j]>key) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
    ShowMessage("Container Had Been Sorted using Insertion Sort Method!");
}
//---------------------------------------------------------------------------

