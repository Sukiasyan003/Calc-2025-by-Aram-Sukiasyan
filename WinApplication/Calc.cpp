#include "Calc.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WinApplication::Calc form;
	Application::Run(% form);

}
