// ImageProcessing_HW1.cpp: 主要專案檔。

#include "stdafx.h"
#include "MainForm.h"

using namespace ImageProcessing_HW1;
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm());
    return 0;
}
