#include "GreetingForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	modernsigninuicpp::GreetingForm form;
	Application::Run(% form);
}



