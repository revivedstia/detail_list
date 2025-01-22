#include "MyForm.h"
//#include <Windows.h>
//using namespace Lab2;

using namespace System;
using namespace System::Windows::Forms;


//[STAThread]
//int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//
//	Application::Run(gcnew MyForm);
//}

//[STAThreadAttribute]
[STAThread]
void Main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Lab3::MyForm form;
	Application::Run(% form);
}
