#include "full_calc.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WinApplication::full_calc form;
	Application::Run(% form);
}

