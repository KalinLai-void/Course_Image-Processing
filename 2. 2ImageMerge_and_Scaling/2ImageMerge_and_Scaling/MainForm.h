#pragma once

#include "Q1_Form.h"
#include "Q2_Form.h"

namespace My2ImageMergeandScaling {

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
	private: System::Windows::Forms::Button^ Q1Btn;
	private: System::Windows::Forms::Button^ Q2Btn;
	private: System::Windows::Forms::Button^ Q3Btn;
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
			this->Q1Btn = (gcnew System::Windows::Forms::Button());
			this->Q2Btn = (gcnew System::Windows::Forms::Button());
			this->Q3Btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Q1Btn
			// 
			this->Q1Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18));
			this->Q1Btn->Location = System::Drawing::Point(12, 12);
			this->Q1Btn->Name = L"Q1Btn";
			this->Q1Btn->Size = System::Drawing::Size(630, 67);
			this->Q1Btn->TabIndex = 0;
			this->Q1Btn->Text = L"Question 1 - Merge two I image of HSI with m and n.";
			this->Q1Btn->UseVisualStyleBackColor = true;
			this->Q1Btn->Click += gcnew System::EventHandler(this, &MainForm::Q1Btn_Click);
			// 
			// Q2Btn
			// 
			this->Q2Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18));
			this->Q2Btn->Location = System::Drawing::Point(12, 85);
			this->Q2Btn->Name = L"Q2Btn";
			this->Q2Btn->Size = System::Drawing::Size(630, 67);
			this->Q2Btn->TabIndex = 1;
			this->Q2Btn->Text = L"Question 2 - Zoom-In Image with First-Order and Bilinear.";
			this->Q2Btn->UseVisualStyleBackColor = true;
			this->Q2Btn->Click += gcnew System::EventHandler(this, &MainForm::Q2Btn_Click);
			// 
			// Q3Btn
			// 
			this->Q3Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18));
			this->Q3Btn->Location = System::Drawing::Point(12, 158);
			this->Q3Btn->Name = L"Q3Btn";
			this->Q3Btn->Size = System::Drawing::Size(630, 67);
			this->Q3Btn->TabIndex = 2;
			this->Q3Btn->Text = L"Question 3 - Zoom-Out of Question 2.";
			this->Q3Btn->UseVisualStyleBackColor = true;
			this->Q3Btn->Click += gcnew System::EventHandler(this, &MainForm::Q3Btn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 234);
			this->Controls->Add(this->Q3Btn);
			this->Controls->Add(this->Q2Btn);
			this->Controls->Add(this->Q1Btn);
			this->Name = L"MainForm";
			this->Text = L"Homework 1 - Main Form";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Q1Btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Q1_Form^ q1_form = gcnew Q1_Form();
		q1_form->Show();
	}

	private: System::Void Q2Btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Q2_Form^ q2_form = gcnew Q2_Form();
		q2_form->zoomIn_or_zoomOut = 0;
		q2_form->Show();
	}

	private: System::Void Q3Btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Q2_Form^ q2_form = gcnew Q2_Form();
		q2_form->zoomIn_or_zoomOut = 1;
		q2_form->Show();
	}
};
}
