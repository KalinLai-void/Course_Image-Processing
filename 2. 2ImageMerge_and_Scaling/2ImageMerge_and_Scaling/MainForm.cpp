#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

//應用程式的執行緒模型為 單一執行緒 (Single-Threaded Apartment，STA)
[STAThreadAttribute]
void main(void)
{
	//啟動可視化
	Application::EnableVisualStyles();
	//控制元件會基於TextRender方式使用
	Application::SetCompatibleTextRenderingDefault(false);
	//建立Window Forms
	My2ImageMergeandScaling::MainForm myform;
	Application::Run(% myform);
}