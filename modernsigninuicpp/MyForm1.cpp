#include "MyForm2.h"



using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	modernsigninuicpp::MyForm2 form;
	Application::Run(% form);
}