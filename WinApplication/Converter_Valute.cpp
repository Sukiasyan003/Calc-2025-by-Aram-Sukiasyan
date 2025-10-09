#include "Converter_Valute.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WinApplication::Converter_Valute form;
	Application::Run(% form);
}

