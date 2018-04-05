#include "Home.h"
#include "Admin.h"
#include "Minister.h" 
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EGSbeta::Minister form;
	Application::Run(%form);
}