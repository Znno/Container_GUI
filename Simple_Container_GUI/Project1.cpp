//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Main.cpp", ArrayForm);
USEFORM("Create.cpp", CreateForm);
USEFORM("Edit.cpp", EditForm);
USEFORM("Display.cpp", DisplayForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TArrayForm), &ArrayForm);
		Application->CreateForm(__classid(TCreateForm), &CreateForm);
		Application->CreateForm(__classid(TEditForm), &EditForm);
		Application->CreateForm(__classid(TDisplayForm), &DisplayForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
