#pragma once

#include <cstdlib>
#include <vector>
#include <algorithm>
#include <time.h>

#define PI 3.1415926

namespace SmoothingFilters {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// BitmapData
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Design;

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

	protected:


	private: System::Windows::Forms::Label^ GrayOrigin_label;
	private: System::Windows::Forms::PictureBox^ GrayOrigin_pictureBox;
	private: System::Windows::Forms::Button^ OpenImgBtn;
	private: System::Windows::Forms::Label^ NoiseImg_label;
	private: System::Windows::Forms::PictureBox^ NoiseImg_pictureBox;
	private: System::Windows::Forms::NumericUpDown^ NoiseRatio_numericUpDown;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ NoiseSelect_comboBox;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ VarA_numericUpDown;

	private: System::Windows::Forms::Label^ VarB_label;
	private: System::Windows::Forms::Label^ VarA_label;
	private: System::Windows::Forms::NumericUpDown^ VarB_numericUpDown;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ FilterSelect_comboBox;
	private: System::Windows::Forms::Button^ AddNoise_Btn;
	private: System::Windows::Forms::Button^ Reset_Btn;
	private: System::Windows::Forms::Button^ Smooth_Btn;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ MaskSize_numericUpDown;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ T_label;

	private: System::Windows::Forms::NumericUpDown^ T_numericUpDown;









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
			this->GrayOrigin_label = (gcnew System::Windows::Forms::Label());
			this->GrayOrigin_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->OpenImgBtn = (gcnew System::Windows::Forms::Button());
			this->NoiseImg_label = (gcnew System::Windows::Forms::Label());
			this->NoiseImg_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->NoiseRatio_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NoiseSelect_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Reset_Btn = (gcnew System::Windows::Forms::Button());
			this->AddNoise_Btn = (gcnew System::Windows::Forms::Button());
			this->VarB_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->VarA_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->VarB_label = (gcnew System::Windows::Forms::Label());
			this->VarA_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->T_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->T_label = (gcnew System::Windows::Forms::Label());
			this->Smooth_Btn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->MaskSize_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->FilterSelect_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NoiseImg_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NoiseRatio_numericUpDown))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VarB_numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VarA_numericUpDown))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->T_numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MaskSize_numericUpDown))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// GrayOrigin_label
			// 
			this->GrayOrigin_label->AutoSize = true;
			this->GrayOrigin_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->GrayOrigin_label->Location = System::Drawing::Point(70, 374);
			this->GrayOrigin_label->Name = L"GrayOrigin_label";
			this->GrayOrigin_label->Size = System::Drawing::Size(194, 21);
			this->GrayOrigin_label->TabIndex = 10;
			this->GrayOrigin_label->Text = L"Original Gray Image";
			// 
			// GrayOrigin_pictureBox
			// 
			this->GrayOrigin_pictureBox->Location = System::Drawing::Point(12, 63);
			this->GrayOrigin_pictureBox->Name = L"GrayOrigin_pictureBox";
			this->GrayOrigin_pictureBox->Size = System::Drawing::Size(300, 300);
			this->GrayOrigin_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->GrayOrigin_pictureBox->TabIndex = 9;
			this->GrayOrigin_pictureBox->TabStop = false;
			// 
			// OpenImgBtn
			// 
			this->OpenImgBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->OpenImgBtn->Location = System::Drawing::Point(12, 12);
			this->OpenImgBtn->Name = L"OpenImgBtn";
			this->OpenImgBtn->Size = System::Drawing::Size(606, 45);
			this->OpenImgBtn->TabIndex = 8;
			this->OpenImgBtn->Text = L"Load Image";
			this->OpenImgBtn->UseVisualStyleBackColor = true;
			this->OpenImgBtn->Click += gcnew System::EventHandler(this, &MainForm::OpenImgBtn_Click);
			// 
			// NoiseImg_label
			// 
			this->NoiseImg_label->AutoSize = true;
			this->NoiseImg_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NoiseImg_label->Location = System::Drawing::Point(410, 374);
			this->NoiseImg_label->Name = L"NoiseImg_label";
			this->NoiseImg_label->Size = System::Drawing::Size(127, 21);
			this->NoiseImg_label->TabIndex = 12;
			this->NoiseImg_label->Text = L"Result Image";
			// 
			// NoiseImg_pictureBox
			// 
			this->NoiseImg_pictureBox->Location = System::Drawing::Point(318, 63);
			this->NoiseImg_pictureBox->Name = L"NoiseImg_pictureBox";
			this->NoiseImg_pictureBox->Size = System::Drawing::Size(300, 300);
			this->NoiseImg_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->NoiseImg_pictureBox->TabIndex = 11;
			this->NoiseImg_pictureBox->TabStop = false;
			// 
			// NoiseRatio_numericUpDown
			// 
			this->NoiseRatio_numericUpDown->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NoiseRatio_numericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->NoiseRatio_numericUpDown->Location = System::Drawing::Point(180, 67);
			this->NoiseRatio_numericUpDown->Name = L"NoiseRatio_numericUpDown";
			this->NoiseRatio_numericUpDown->Size = System::Drawing::Size(80, 33);
			this->NoiseRatio_numericUpDown->TabIndex = 14;
			this->NoiseRatio_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(215, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 21);
			this->label1->TabIndex = 15;
			this->label1->Text = L"%";
			// 
			// NoiseSelect_comboBox
			// 
			this->NoiseSelect_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->NoiseSelect_comboBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->NoiseSelect_comboBox->FormattingEnabled = true;
			this->NoiseSelect_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Gaussian Noise", L"Uniform Noise",
					L"Impulse Noise (Salt and Pepper Noise)"
			});
			this->NoiseSelect_comboBox->Location = System::Drawing::Point(6, 32);
			this->NoiseSelect_comboBox->Name = L"NoiseSelect_comboBox";
			this->NoiseSelect_comboBox->Size = System::Drawing::Size(288, 27);
			this->NoiseSelect_comboBox->TabIndex = 16;
			this->NoiseSelect_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::NoiseSelect_comboBox_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Reset_Btn);
			this->groupBox1->Controls->Add(this->AddNoise_Btn);
			this->groupBox1->Controls->Add(this->VarB_numericUpDown);
			this->groupBox1->Controls->Add(this->VarA_numericUpDown);
			this->groupBox1->Controls->Add(this->VarB_label);
			this->groupBox1->Controls->Add(this->VarA_label);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->NoiseSelect_comboBox);
			this->groupBox1->Controls->Add(this->NoiseRatio_numericUpDown);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(300, 336);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Noise Control Panel";
			// 
			// Reset_Btn
			// 
			this->Reset_Btn->Location = System::Drawing::Point(147, 293);
			this->Reset_Btn->Name = L"Reset_Btn";
			this->Reset_Btn->Size = System::Drawing::Size(147, 37);
			this->Reset_Btn->TabIndex = 23;
			this->Reset_Btn->Text = L"Reset to origin";
			this->Reset_Btn->UseVisualStyleBackColor = true;
			this->Reset_Btn->Click += gcnew System::EventHandler(this, &MainForm::Reset_Btn_Click);
			// 
			// AddNoise_Btn
			// 
			this->AddNoise_Btn->Location = System::Drawing::Point(10, 293);
			this->AddNoise_Btn->Name = L"AddNoise_Btn";
			this->AddNoise_Btn->Size = System::Drawing::Size(131, 37);
			this->AddNoise_Btn->TabIndex = 22;
			this->AddNoise_Btn->Text = L"Add Noise";
			this->AddNoise_Btn->UseVisualStyleBackColor = true;
			this->AddNoise_Btn->Click += gcnew System::EventHandler(this, &MainForm::AddNoise_Btn_Click);
			// 
			// VarB_numericUpDown
			// 
			this->VarB_numericUpDown->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->VarB_numericUpDown->Location = System::Drawing::Point(180, 145);
			this->VarB_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->VarB_numericUpDown->Name = L"VarB_numericUpDown";
			this->VarB_numericUpDown->Size = System::Drawing::Size(80, 33);
			this->VarB_numericUpDown->TabIndex = 21;
			this->VarB_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// VarA_numericUpDown
			// 
			this->VarA_numericUpDown->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->VarA_numericUpDown->Location = System::Drawing::Point(180, 106);
			this->VarA_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->VarA_numericUpDown->Name = L"VarA_numericUpDown";
			this->VarA_numericUpDown->Size = System::Drawing::Size(80, 33);
			this->VarA_numericUpDown->TabIndex = 20;
			this->VarA_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 127, 0, 0, 0 });
			// 
			// VarB_label
			// 
			this->VarB_label->AutoSize = true;
			this->VarB_label->Location = System::Drawing::Point(6, 147);
			this->VarB_label->Name = L"VarB_label";
			this->VarB_label->Size = System::Drawing::Size(173, 21);
			this->VarB_label->TabIndex = 19;
			this->VarB_label->Text = L"Standard Deviation: ";
			// 
			// VarA_label
			// 
			this->VarA_label->AutoSize = true;
			this->VarA_label->Location = System::Drawing::Point(6, 111);
			this->VarA_label->Name = L"VarA_label";
			this->VarA_label->Size = System::Drawing::Size(146, 21);
			this->VarA_label->TabIndex = 18;
			this->VarA_label->Text = L"Expected Value: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 21);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Noise-Ratio:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->T_numericUpDown);
			this->groupBox2->Controls->Add(this->T_label);
			this->groupBox2->Controls->Add(this->Smooth_Btn);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->MaskSize_numericUpDown);
			this->groupBox2->Controls->Add(this->FilterSelect_comboBox);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(3, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(300, 336);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Filter Control Panel";
			// 
			// T_numericUpDown
			// 
			this->T_numericUpDown->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->T_numericUpDown->Location = System::Drawing::Point(180, 107);
			this->T_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->T_numericUpDown->Name = L"T_numericUpDown";
			this->T_numericUpDown->Size = System::Drawing::Size(80, 33);
			this->T_numericUpDown->TabIndex = 25;
			this->T_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->T_numericUpDown->Visible = false;
			// 
			// T_label
			// 
			this->T_label->AutoSize = true;
			this->T_label->Location = System::Drawing::Point(146, 109);
			this->T_label->Name = L"T_label";
			this->T_label->Size = System::Drawing::Size(27, 21);
			this->T_label->TabIndex = 24;
			this->T_label->Text = L"T:";
			this->T_label->Visible = false;
			// 
			// Smooth_Btn
			// 
			this->Smooth_Btn->Location = System::Drawing::Point(6, 293);
			this->Smooth_Btn->Name = L"Smooth_Btn";
			this->Smooth_Btn->Size = System::Drawing::Size(288, 37);
			this->Smooth_Btn->TabIndex = 23;
			this->Smooth_Btn->Text = L"Smooth Noise";
			this->Smooth_Btn->UseVisualStyleBackColor = true;
			this->Smooth_Btn->Click += gcnew System::EventHandler(this, &MainForm::Smooth_Btn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 21);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Mask of size (n*n):";
			// 
			// MaskSize_numericUpDown
			// 
			this->MaskSize_numericUpDown->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->MaskSize_numericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->MaskSize_numericUpDown->Location = System::Drawing::Point(180, 69);
			this->MaskSize_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->MaskSize_numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->MaskSize_numericUpDown->Name = L"MaskSize_numericUpDown";
			this->MaskSize_numericUpDown->Size = System::Drawing::Size(80, 33);
			this->MaskSize_numericUpDown->TabIndex = 18;
			this->MaskSize_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// FilterSelect_comboBox
			// 
			this->FilterSelect_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FilterSelect_comboBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->FilterSelect_comboBox->FormattingEnabled = true;
			this->FilterSelect_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Spatial Lowpass Filter", L"Median Filter",
					L"Alpha-Trimmed Mean Filter"
			});
			this->FilterSelect_comboBox->Location = System::Drawing::Point(6, 32);
			this->FilterSelect_comboBox->Name = L"FilterSelect_comboBox";
			this->FilterSelect_comboBox->Size = System::Drawing::Size(288, 27);
			this->FilterSelect_comboBox->TabIndex = 16;
			this->FilterSelect_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::FilterSelect_comboBox_SelectedIndexChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->tabControl1->Location = System::Drawing::Point(624, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(321, 383);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(313, 348);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Noise";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(313, 348);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Filter";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 411);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->NoiseImg_label);
			this->Controls->Add(this->NoiseImg_pictureBox);
			this->Controls->Add(this->GrayOrigin_label);
			this->Controls->Add(this->GrayOrigin_pictureBox);
			this->Controls->Add(this->OpenImgBtn);
			this->Name = L"MainForm";
			this->Text = L"Homework 3";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NoiseImg_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NoiseRatio_numericUpDown))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VarB_numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VarA_numericUpDown))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->T_numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MaskSize_numericUpDown))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		NoiseSelect_comboBox->SelectedIndex = 0;
		FilterSelect_comboBox->SelectedIndex = 0;
	}

	private: System::Void NoiseSelect_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (NoiseSelect_comboBox->SelectedItem == "Gaussian Noise")
		{
			VarA_label->Visible = true;
			VarB_label->Visible = true;
			VarA_numericUpDown->Visible = true;
			VarB_numericUpDown->Visible = true;

			VarA_label->Text = "Expected Value: ";
			VarA_numericUpDown->Value = 127;
			VarB_label->Text = "Standard Deviation: ";
			VarB_numericUpDown->Value = 50;
		}
		else if (NoiseSelect_comboBox->SelectedItem == "Uniform Noise")
		{
			VarA_label->Visible = true;
			VarB_label->Visible = true;
			VarA_numericUpDown->Visible = true;
			VarB_numericUpDown->Visible = true;

			VarA_label->Text = "Minimum: ";
			VarA_numericUpDown->Value = 80;
			VarB_label->Text = "Maximum: ";
			VarB_numericUpDown->Value = 180;
		}
		else if (NoiseSelect_comboBox->SelectedItem == "Impulse Noise (Salt and Pepper Noise)")
		{
			VarA_label->Visible = false;
			VarB_label->Visible = false;
			VarA_numericUpDown->Visible = false;
			VarB_numericUpDown->Visible = false;
		}
	}

	private: System::Void AddNoise_Btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (NoiseImg_pictureBox->Image)
		{
			if (NoiseSelect_comboBox->SelectedItem == "Gaussian Noise")
			{
				NoiseImg_pictureBox->Image = AddNoiseToImg_Gaussian((int)NoiseRatio_numericUpDown->Value
																  , (double)VarA_numericUpDown->Value
																  , (double)VarB_numericUpDown->Value
																  , (Bitmap^)NoiseImg_pictureBox->Image);
			}
			else if (NoiseSelect_comboBox->SelectedItem == "Uniform Noise")
			{
				if (VarA_numericUpDown->Value < VarB_numericUpDown->Value)
					NoiseImg_pictureBox->Image = AddNoiseToImg_Uniform((int)NoiseRatio_numericUpDown->Value
																	 , (int)VarB_numericUpDown->Value
																	 , (int)VarA_numericUpDown->Value
																	 , (Bitmap^)NoiseImg_pictureBox->Image);
			}
			else if (NoiseSelect_comboBox->SelectedItem == "Impulse Noise (Salt and Pepper Noise)")
			{
				NoiseImg_pictureBox->Image = AddNoiseToImg_SaltPepper((int)NoiseRatio_numericUpDown->Value
																	, (Bitmap^)NoiseImg_pictureBox->Image);
			}
		}
	}

	private: System::Void Reset_Btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (GrayOrigin_pictureBox->Image)
			NoiseImg_pictureBox->Image = GrayOrigin_pictureBox->Image;
	}

	private: System::Void OpenImgBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->FileName = "";
		ofd->Filter = "All Files (*.*) | *.*";
		ofd->FilterIndex = 1;

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "")
		{
			Bitmap^ bmp = gcnew Bitmap(ofd->FileName);
			GrayOrigin_pictureBox->Image = bmp;
			NoiseImg_pictureBox->Image = bmp;
		}
	}

	private: Bitmap^ CopyOriginIamgeToResult(Bitmap^ origin)
	{
		Bitmap^ result = gcnew Bitmap(origin->Width, origin->Height, origin->PixelFormat);

		BitmapData^ originBD = origin->LockBits(Rectangle(0, 0, origin->Width, origin->Height), ImageLockMode::ReadOnly, origin->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);

		/* Image maybe have unknown information */
		int originByteskip = originBD->Stride - originBD->Width * 3;
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* originPtr = (Byte*)((void*)originBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		// copy origin image to result
		for (int y = 0; y < originBD->Height; y++)
		{
			for (int x = 0; x < originBD->Width; x++)
			{
				resultPtr[0] = originPtr[0];
				resultPtr[1] = originPtr[1];
				resultPtr[2] = originPtr[2];

				originPtr += 3;
				resultPtr += 3;
			}
			originPtr += originByteskip;
			resultPtr += resultByteskip;
		}

		origin->UnlockBits(originBD);
		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ AddNoiseToImg_Gaussian(int ratio, double ex_val, double std_dev, Bitmap^ origin)
	{
		Bitmap^ result = CopyOriginIamgeToResult(origin);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int noiseAmount = resultBD->Width * resultBD->Height * ratio * 0.01;
		array<int>^ noiseArray = gcnew array<int>(noiseAmount); // c++/cli dynamic array
		for (int i = 0; i < noiseAmount; i++) noiseArray[i] = 0;

		srand(time(NULL));
		for (int i = 0; i < noiseAmount; i++)
		{
			// X = sqrt(-2 * ln(U)) * cos(2 * pi * V) * stdDev + expectedValue
			double u = rand() / (double)RAND_MAX;
			double v = rand() / (double)RAND_MAX;
			double x = sqrt(-2 * log(u)) * cos(2 * PI * v) * std_dev + ex_val;

			int tmp = (int)round(x); // avoid out of the range
			if (tmp > 255) noiseArray[255]++;
			else if (tmp < 0) noiseArray[0]++;
			else noiseArray[tmp]++;
		}

		// to check the selected postion whether is noise.
		array<array<bool>^>^ isPositionNoised = gcnew array<array<bool>^> (resultBD->Height);
		for (int i = 0; i < resultBD->Height; i++) isPositionNoised[i] = gcnew array<bool>(resultBD->Width);

		int curNoiseAmount = 0;
		while (curNoiseAmount < noiseAmount)
		{
			int randX = rand() % resultBD->Width;
			int randY = rand() % resultBD->Height;

			if (!isPositionNoised[randY][randX])
			{
				Byte* ptr = resultPtr + randX * 3 + randY * resultBD->Stride;
				ptr[0] = noiseArray[curNoiseAmount];
				ptr[1] = noiseArray[curNoiseAmount];
				ptr[2] = noiseArray[curNoiseAmount];

				isPositionNoised[randY][randX] = true;
				curNoiseAmount++;
			}
		}

		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ AddNoiseToImg_SaltPepper(int ratio, Bitmap^ origin)
	{
		Bitmap^ result = CopyOriginIamgeToResult(origin);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int noiseAmount = resultBD->Height * resultBD->Width * ratio * 0.01;
		int pepperAmount = noiseAmount / 2; // black pixel amount
		int saltAmount = noiseAmount / 2; // white pixel amount

		srand(time(NULL));
		int pepperCount = 0, saltCount = 0;
		while (pepperCount < pepperAmount)
		{
			int randX = rand() % resultBD->Width;
			int randY = rand() % resultBD->Height;

			Byte* ptr = resultPtr + randX * 3 + randY * resultBD->Stride;
			if (ptr[0] != 0 && ptr[1] != 0 && ptr[2] != 0 
				&& ptr[0] != 255 && ptr[1] != 255 && ptr[2] != 255)
			{
				ptr[0] = ptr[1] = ptr[2] = 0;
				pepperCount++;
			}
		}
		while (saltCount < saltAmount)
		{
			int randX = rand() % resultBD->Width;
			int randY = rand() % resultBD->Height;

			Byte* ptr = resultPtr + randX * 3 + randY * resultBD->Stride;
			if (ptr[0] != 0 && ptr[1] != 0 && ptr[2] != 0
				&& ptr[0] != 255 && ptr[1] != 255 && ptr[2] != 255)
			{
				ptr[0] = ptr[1] = ptr[2] = 255;
				saltCount++;
			}
		}

		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ AddNoiseToImg_Uniform(int ratio, int max, int min, Bitmap^ origin)
	{
		Bitmap^ result = CopyOriginIamgeToResult(origin);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		double probability = resultBD->Width * resultBD->Height * ratio * 0.01;

		// to check the selected postion whether is noise.
		array<array<bool>^>^ isPositionNoised = gcnew array<array<bool>^>(resultBD->Height);
		for (int i = 0; i < resultBD->Height; i++) isPositionNoised[i] = gcnew array<bool>(resultBD->Width);

		srand(time(NULL));
		for (int i = 0; i < probability; i++)
		{
			int randVal = rand() % (max - min) + min;
			int randX = rand() % resultBD->Width;
			int randY = rand() % resultBD->Height;
			
			if (!isPositionNoised[randY][randX])
			{
				Byte* ptr = resultPtr + randX * 3 + randY * resultBD->Stride;
				for (int channel = 0; channel < 3; channel++)
				{
					if (ptr[channel] + randVal > 255) ptr[channel] = 255;
					else if (ptr[channel] + randVal < 0) ptr[channel] = 0;
					else ptr[channel] += randVal;
				}
				isPositionNoised[randY][randX] = true;
			}
		}

		result->UnlockBits(resultBD);
		return result;
	}

	private: System::Void FilterSelect_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (FilterSelect_comboBox->SelectedItem == "Spatial Lowpass Filter")
		{
			T_label->Visible = false;
			T_numericUpDown->Visible = false;
		}
		else if (FilterSelect_comboBox->SelectedItem == "Median Filter")
		{
			T_label->Visible = false;
			T_numericUpDown->Visible = false;
		}
		else if (FilterSelect_comboBox->SelectedItem == "Alpha-Trimmed Mean Filter")
		{
			T_label->Visible = true;
			T_numericUpDown->Visible = true;
		}
	}

	private: System::Void Smooth_Btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (FilterSelect_comboBox->SelectedItem == "Spatial Lowpass Filter")
		{
			NoiseImg_pictureBox->Image = LowpassFilter((int)MaskSize_numericUpDown->Value
													 , (Bitmap^)NoiseImg_pictureBox->Image);
		}
		else if (FilterSelect_comboBox->SelectedItem == "Median Filter")
		{
			NoiseImg_pictureBox->Image = MedianFilter((int)MaskSize_numericUpDown->Value
													, (Bitmap^)NoiseImg_pictureBox->Image);
		}
		else if (FilterSelect_comboBox->SelectedItem == "Alpha-Trimmed Mean Filter")
		{
			NoiseImg_pictureBox->Image = AlphaTrimmedMeanFilter((int)MaskSize_numericUpDown->Value
															  , (int)T_numericUpDown->Value
															  , (Bitmap^)NoiseImg_pictureBox->Image);
		}
	}

	private: Bitmap^ LowpassFilter(int maskSize, Bitmap^ noiseImg)
	{
		Bitmap^ result = gcnew Bitmap(noiseImg->Width, noiseImg->Height, noiseImg->PixelFormat);

		BitmapData^ noiseImgBD = noiseImg->LockBits(Rectangle(0, 0, noiseImg->Width, noiseImg->Height), ImageLockMode::ReadOnly, noiseImg->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);

		/* Image maybe have unknown information */
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* noiseImgPtr = (Byte*)((void*)noiseImgBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		array<array<int>^>^ mask = gcnew array<array<int>^> (maskSize);
		for (int i = 0; i < maskSize; i++) mask[i] = gcnew array<int> (maskSize);

		for (int i = 0; i < maskSize; i++)
			for (int j = 0; j < maskSize; j++)
				mask[i][j] = 1;

		int blank = maskSize / 2;

		for (int y = 0; y < noiseImgBD->Height; y++)
		{
			for (int x = 0; x < noiseImgBD->Width; x++)
			{
				// avoid out of the range 
				if (x >= blank && x < noiseImgBD->Width - blank
					&& y >= blank && y < noiseImgBD->Height - blank)
				{
					int bSum = 0, gSum = 0, rSum = 0;
					for (int i = -blank, index_i = 0; i <= blank; i++)
					{
						for (int j = -blank, index_j = 0; j <= blank; j++)
						{
							Byte* ptr = noiseImgPtr + (x + j) * 3 + (y + i) * noiseImgBD->Stride;
							bSum += ptr[0] * mask[index_i][index_j];
							gSum += ptr[1] * mask[index_i][index_j];
							rSum += ptr[2] * mask[index_i][index_j];
						}
					}

					resultPtr[0] = bSum / (maskSize * maskSize);
					resultPtr[1] = gSum / (maskSize * maskSize);
					resultPtr[2] = rSum / (maskSize * maskSize);
				}
				else // if is edge
				{
					Byte* ptr = noiseImgPtr + x * 3 + y * noiseImgBD->Stride;
					resultPtr[0] = ptr[0];
					resultPtr[1] = ptr[1];
					resultPtr[2] = ptr[2];
				}

				resultPtr += 3;
			}
			resultPtr += resultByteskip;
		}

		noiseImg->UnlockBits(noiseImgBD);
		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ MedianFilter(int maskSize, Bitmap^ noiseImg)
	{
		Bitmap^ result = gcnew Bitmap(noiseImg->Width, noiseImg->Height, noiseImg->PixelFormat);

		BitmapData^ noiseImgBD = noiseImg->LockBits(Rectangle(0, 0, noiseImg->Width, noiseImg->Height), ImageLockMode::ReadOnly, noiseImg->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);

		/* Image maybe have unknown information */
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* noiseImgPtr = (Byte*)((void*)noiseImgBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int blank = maskSize / 2;
		int median = maskSize * maskSize / 2;

		for (int y = 0; y < noiseImgBD->Height; y++)
		{
			for (int x = 0; x < noiseImgBD->Width; x++)
			{
				// avoid out of the range 
				if (x >= blank && x < noiseImgBD->Width - blank
					&& y >= blank && y < noiseImgBD->Height - blank)
				{
					// vector template needs import library "vector"
					std::vector<int> b;
					std::vector<int> g;
					std::vector<int> r;

					for (int i = -blank; i <= blank; i++)
					{
						for (int j = -blank; j <= blank; j++)
						{
							Byte* ptr = noiseImgPtr + (x + j) * 3 + (y + i) * noiseImgBD->Stride;
							b.push_back(ptr[0]);
							g.push_back(ptr[1]);
							r.push_back(ptr[2]);
						}
					}

					// sort function needs import library "Algorithm"
					std::sort(b.begin(), b.end());
					std::sort(g.begin(), g.end());
					std::sort(r.begin(), r.end());

					resultPtr[0] = b[median];
					resultPtr[1] = g[median];
					resultPtr[2] = r[median];
				}
				else // if is edge
				{
					Byte* ptr = noiseImgPtr + x * 3 + y * noiseImgBD->Stride;
					resultPtr[0] = ptr[0];
					resultPtr[1] = ptr[1];
					resultPtr[2] = ptr[2];
				}

				resultPtr += 3;
			}
			resultPtr += resultByteskip;
		}

		noiseImg->UnlockBits(noiseImgBD);
		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ AlphaTrimmedMeanFilter(int maskSize, int T, Bitmap^ noiseImg)
	{
		Bitmap^ result = gcnew Bitmap(noiseImg->Width, noiseImg->Height, noiseImg->PixelFormat);

		BitmapData^ noiseImgBD = noiseImg->LockBits(Rectangle(0, 0, noiseImg->Width, noiseImg->Height), ImageLockMode::ReadOnly, noiseImg->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);

		/* Image maybe have unknown information */
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* noiseImgPtr = (Byte*)((void*)noiseImgBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int blank = maskSize / 2;

		for (int y = 0; y < noiseImgBD->Height; y++)
		{
			for (int x = 0; x < noiseImgBD->Width; x++)
			{
				// avoid out of the range 
				if (x >= blank && x < noiseImgBD->Width - blank
					&& y >= blank && y < noiseImgBD->Height - blank)
				{
					// vector template needs import library "vector"
					std::vector<int> b;
					std::vector<int> g;
					std::vector<int> r;

					for (int i = -blank; i <= blank; i++)
					{
						for (int j = -blank; j <= blank; j++)
						{
							Byte* ptr = noiseImgPtr + (x + j) * 3 + (y + i) * noiseImgBD->Stride;
							b.push_back(ptr[0]);
							g.push_back(ptr[1]);
							r.push_back(ptr[2]);
						}
					}

					// sort function needs import library "Algorithm"
					std::sort(b.begin(), b.end());
					std::sort(g.begin(), g.end());
					std::sort(r.begin(), r.end());

					int bSum = 0, gSum = 0, rSum = 0;
					for (int index = T ; index < maskSize * maskSize - T; index++)
					{
						bSum += b[index];
						gSum += g[index];
						rSum += r[index];
					}

					resultPtr[0] = bSum / (maskSize * maskSize - 2 * T);
					resultPtr[1] = gSum / (maskSize * maskSize - 2 * T);
					resultPtr[2] = rSum / (maskSize * maskSize - 2 * T);
				}
				else // if is edge
				{
					Byte* ptr = noiseImgPtr + x * 3 + y * noiseImgBD->Stride;
					resultPtr[0] = ptr[0];
					resultPtr[1] = ptr[1];
					resultPtr[2] = ptr[2];
				}

				resultPtr += 3;
			}
			resultPtr += resultByteskip;
		}

		noiseImg->UnlockBits(noiseImgBD);
		result->UnlockBits(resultBD);
		return result;
	}
};
}
