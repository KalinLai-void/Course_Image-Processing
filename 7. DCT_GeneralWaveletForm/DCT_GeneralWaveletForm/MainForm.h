#pragma once

#include "Q1_Form.h"
#include "WaveletForm.h"

namespace DCTGeneralWaveletForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Q1_Btn;
	private: System::Windows::Forms::Button^ Q2_Btn;

	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Q1_Btn = (gcnew System::Windows::Forms::Button());
			this->Q2_Btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Q1_Btn
			// 
			this->Q1_Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Q1_Btn->Location = System::Drawing::Point(12, 12);
			this->Q1_Btn->Name = L"Q1_Btn";
			this->Q1_Btn->Size = System::Drawing::Size(536, 60);
			this->Q1_Btn->TabIndex = 0;
			this->Q1_Btn->Text = L"Question 1: DCT && IDCT";
			this->Q1_Btn->UseVisualStyleBackColor = true;
			this->Q1_Btn->Click += gcnew System::EventHandler(this, &MainForm::Q1_Btn_Click);
			// 
			// Q2_Btn
			// 
			this->Q2_Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Q2_Btn->Location = System::Drawing::Point(12, 78);
			this->Q2_Btn->Name = L"Q2_Btn";
			this->Q2_Btn->Size = System::Drawing::Size(536, 60);
			this->Q2_Btn->TabIndex = 1;
			this->Q2_Btn->Text = L"Question 2: General Wavelet form";
			this->Q2_Btn->UseVisualStyleBackColor = true;
			this->Q2_Btn->Click += gcnew System::EventHandler(this, &MainForm::Q2_Btn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 149);
			this->Controls->Add(this->Q2_Btn);
			this->Controls->Add(this->Q1_Btn);
			this->Name = L"MainForm";
			this->Text = L"Homework 6";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Q1_Btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Q1_Form^ form = gcnew Q1_Form();
		form->Show();
	}
	
	private: System::Void Q2_Btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		WaveletForm^ form = gcnew WaveletForm();
		form->Show();
	}
};
}
