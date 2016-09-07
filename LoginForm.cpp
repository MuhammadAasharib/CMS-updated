#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	endsemesterproject::MyForm form;
	Application::Run(%form);
}
