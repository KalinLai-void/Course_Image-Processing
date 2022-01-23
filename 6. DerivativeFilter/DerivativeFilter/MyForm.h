#pragma once

#include <cmath>

int Gx_Prewitt_A[3][3] = { {-1, -1, -1}
						 , { 0,  0,  0}
						 , { 1,  1,  1} };

int Gy_Prewitt_A[3][3] = { {-1, 0, 1}
						 , {-1, 0, 1}
						 , {-1, 0, 1} };

int Gx_Prewitt_B[3][3] = { { 0,  1, 1}
						 , {-1,  0, 1}
						 , {-1, -1, 0} };

int Gy_Prewitt_B[3][3] = { {-1, -1, 0}
						 , {-1,  0, 1}
						 , { 0,  1, 1} };

int Gx_Sobel_A[3][3] = { {-1, -2, -1}
					   , { 0,  0,  0}
					   , { 1,  2,  1} };

int Gy_Sobel_A[3][3] = { {-1, 0, 1}
					   , {-2, 0, 2}
					   , {-1, 0, 1} };

int Gx_Sobel_B[3][3] = { { 0,  1, 2}
					   , {-1,  0, 1}
					   , {-2, -1, 0} };

int Gy_Sobel_B[3][3] = { {-2, -1, 0}
					   , {-1,  0, 1}
					   , { 0,  1, 2} };

int mask_Laplacian_A[3][3] = { { 0, -1,  0}
							 , {-1,  5, -1}
							 , { 0, -1,  0} };

int mask_Laplacian_B[3][3] = { {-1, -1, -1}
							 , {-1,  9, -1}
							 , {-1, -1, -1} };

namespace DerivativeFilter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// BitmapData
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Design;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ GrayOrigin_label;
	protected:
	private: System::Windows::Forms::PictureBox^ GrayOrigin_pictureBox;
	private: System::Windows::Forms::Button^ OpenImgBtn;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ Mode_comboBox;
	private: System::Windows::Forms::TextBox^ Gy22_textBox;
	private: System::Windows::Forms::TextBox^ Gy21_textBox;
	private: System::Windows::Forms::TextBox^ Gy20_textBox;
	private: System::Windows::Forms::TextBox^ Gy12_textBox;
	private: System::Windows::Forms::TextBox^ Gy11_textBox;
	private: System::Windows::Forms::TextBox^ Gy10_textBox;
	private: System::Windows::Forms::TextBox^ Gy02_textBox;
	private: System::Windows::Forms::TextBox^ Gy01_textBox;
	private: System::Windows::Forms::TextBox^ Gy00_textBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Gx22_textBox;
	private: System::Windows::Forms::TextBox^ Gx21_textBox;
	private: System::Windows::Forms::TextBox^ Gx20_textBox;
	private: System::Windows::Forms::TextBox^ Gx12_textBox;
	private: System::Windows::Forms::TextBox^ Gx11_textBox;
	private: System::Windows::Forms::TextBox^ Gx10_textBox;
	private: System::Windows::Forms::TextBox^ Gx02_textBox;
	private: System::Windows::Forms::TextBox^ Gx01_textBox;
	private: System::Windows::Forms::TextBox^ Gx00_textBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ Default_radioButton;
	private: System::Windows::Forms::RadioButton^ Diagonal_radioButton;
	private: System::Windows::Forms::Button^ Run_Btn;
	private: System::Windows::Forms::Label^ EdgeImg_label;

	private: System::Windows::Forms::PictureBox^ Edge_pictureBox;


	private: System::Windows::Forms::CheckBox^ Color_checkBox;





	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ ResultImg_label;
	private: System::Windows::Forms::PictureBox^ Result_pictureBox;

	private:
		Bitmap^ colorbmp;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Run_Btn = (gcnew System::Windows::Forms::Button());
			this->Diagonal_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Default_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Gy22_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gy21_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gy20_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gy12_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gy11_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gy10_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gy02_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gy01_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gy00_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Gx22_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gx21_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gx20_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gx12_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gx11_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gx10_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gx02_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gx01_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Gx00_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mode_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->EdgeImg_label = (gcnew System::Windows::Forms::Label());
			this->Edge_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Color_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->ResultImg_label = (gcnew System::Windows::Forms::Label());
			this->Result_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Edge_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_pictureBox))->BeginInit();
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
			this->OpenImgBtn->Size = System::Drawing::Size(467, 45);
			this->OpenImgBtn->TabIndex = 8;
			this->OpenImgBtn->Text = L"Load Image";
			this->OpenImgBtn->UseVisualStyleBackColor = true;
			this->OpenImgBtn->Click += gcnew System::EventHandler(this, &MyForm::OpenImgBtn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Run_Btn);
			this->groupBox1->Controls->Add(this->Diagonal_radioButton);
			this->groupBox1->Controls->Add(this->Default_radioButton);
			this->groupBox1->Controls->Add(this->Gy22_textBox);
			this->groupBox1->Controls->Add(this->Gy21_textBox);
			this->groupBox1->Controls->Add(this->Gy20_textBox);
			this->groupBox1->Controls->Add(this->Gy12_textBox);
			this->groupBox1->Controls->Add(this->Gy11_textBox);
			this->groupBox1->Controls->Add(this->Gy10_textBox);
			this->groupBox1->Controls->Add(this->Gy02_textBox);
			this->groupBox1->Controls->Add(this->Gy01_textBox);
			this->groupBox1->Controls->Add(this->Gy00_textBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->Gx22_textBox);
			this->groupBox1->Controls->Add(this->Gx21_textBox);
			this->groupBox1->Controls->Add(this->Gx20_textBox);
			this->groupBox1->Controls->Add(this->Gx12_textBox);
			this->groupBox1->Controls->Add(this->Gx11_textBox);
			this->groupBox1->Controls->Add(this->Gx10_textBox);
			this->groupBox1->Controls->Add(this->Gx02_textBox);
			this->groupBox1->Controls->Add(this->Gx01_textBox);
			this->groupBox1->Controls->Add(this->Gx00_textBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Mode_comboBox);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(624, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 390);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Control Panel";
			// 
			// Run_Btn
			// 
			this->Run_Btn->Location = System::Drawing::Point(6, 341);
			this->Run_Btn->Name = L"Run_Btn";
			this->Run_Btn->Size = System::Drawing::Size(347, 42);
			this->Run_Btn->TabIndex = 24;
			this->Run_Btn->Text = L"Run!";
			this->Run_Btn->UseVisualStyleBackColor = true;
			this->Run_Btn->Click += gcnew System::EventHandler(this, &MyForm::Run_Btn_Click);
			// 
			// Diagonal_radioButton
			// 
			this->Diagonal_radioButton->AutoSize = true;
			this->Diagonal_radioButton->Location = System::Drawing::Point(6, 98);
			this->Diagonal_radioButton->Name = L"Diagonal_radioButton";
			this->Diagonal_radioButton->Size = System::Drawing::Size(203, 25);
			this->Diagonal_radioButton->TabIndex = 23;
			this->Diagonal_radioButton->Text = L"Detect diagonal edges";
			this->Diagonal_radioButton->UseVisualStyleBackColor = true;
			this->Diagonal_radioButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Diagonal_radioButton_CheckedChanged);
			// 
			// Default_radioButton
			// 
			this->Default_radioButton->AutoSize = true;
			this->Default_radioButton->Checked = true;
			this->Default_radioButton->Location = System::Drawing::Point(6, 67);
			this->Default_radioButton->Name = L"Default_radioButton";
			this->Default_radioButton->Size = System::Drawing::Size(299, 25);
			this->Default_radioButton->TabIndex = 22;
			this->Default_radioButton->TabStop = true;
			this->Default_radioButton->Text = L"Detect horizontal && vertical edges";
			this->Default_radioButton->UseVisualStyleBackColor = true;
			this->Default_radioButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Default_radioButton_CheckedChanged);
			// 
			// Gy22_textBox
			// 
			this->Gy22_textBox->Enabled = false;
			this->Gy22_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy22_textBox->Location = System::Drawing::Point(309, 269);
			this->Gy22_textBox->Name = L"Gy22_textBox";
			this->Gy22_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy22_textBox->TabIndex = 21;
			// 
			// Gy21_textBox
			// 
			this->Gy21_textBox->Enabled = false;
			this->Gy21_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy21_textBox->Location = System::Drawing::Point(259, 269);
			this->Gy21_textBox->Name = L"Gy21_textBox";
			this->Gy21_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy21_textBox->TabIndex = 20;
			// 
			// Gy20_textBox
			// 
			this->Gy20_textBox->Enabled = false;
			this->Gy20_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy20_textBox->Location = System::Drawing::Point(209, 269);
			this->Gy20_textBox->Name = L"Gy20_textBox";
			this->Gy20_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy20_textBox->TabIndex = 19;
			// 
			// Gy12_textBox
			// 
			this->Gy12_textBox->Enabled = false;
			this->Gy12_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy12_textBox->Location = System::Drawing::Point(309, 233);
			this->Gy12_textBox->Name = L"Gy12_textBox";
			this->Gy12_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy12_textBox->TabIndex = 18;
			// 
			// Gy11_textBox
			// 
			this->Gy11_textBox->Enabled = false;
			this->Gy11_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy11_textBox->Location = System::Drawing::Point(259, 233);
			this->Gy11_textBox->Name = L"Gy11_textBox";
			this->Gy11_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy11_textBox->TabIndex = 17;
			// 
			// Gy10_textBox
			// 
			this->Gy10_textBox->Enabled = false;
			this->Gy10_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy10_textBox->Location = System::Drawing::Point(209, 233);
			this->Gy10_textBox->Name = L"Gy10_textBox";
			this->Gy10_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy10_textBox->TabIndex = 16;
			// 
			// Gy02_textBox
			// 
			this->Gy02_textBox->Enabled = false;
			this->Gy02_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy02_textBox->Location = System::Drawing::Point(309, 197);
			this->Gy02_textBox->Name = L"Gy02_textBox";
			this->Gy02_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy02_textBox->TabIndex = 15;
			// 
			// Gy01_textBox
			// 
			this->Gy01_textBox->Enabled = false;
			this->Gy01_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy01_textBox->Location = System::Drawing::Point(259, 197);
			this->Gy01_textBox->Name = L"Gy01_textBox";
			this->Gy01_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy01_textBox->TabIndex = 14;
			// 
			// Gy00_textBox
			// 
			this->Gy00_textBox->Enabled = false;
			this->Gy00_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gy00_textBox->Location = System::Drawing::Point(209, 197);
			this->Gy00_textBox->Name = L"Gy00_textBox";
			this->Gy00_textBox->Size = System::Drawing::Size(44, 30);
			this->Gy00_textBox->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(205, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 21);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Gy";
			// 
			// Gx22_textBox
			// 
			this->Gx22_textBox->Enabled = false;
			this->Gx22_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx22_textBox->Location = System::Drawing::Point(110, 269);
			this->Gx22_textBox->Name = L"Gx22_textBox";
			this->Gx22_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx22_textBox->TabIndex = 11;
			// 
			// Gx21_textBox
			// 
			this->Gx21_textBox->Enabled = false;
			this->Gx21_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx21_textBox->Location = System::Drawing::Point(60, 269);
			this->Gx21_textBox->Name = L"Gx21_textBox";
			this->Gx21_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx21_textBox->TabIndex = 10;
			// 
			// Gx20_textBox
			// 
			this->Gx20_textBox->Enabled = false;
			this->Gx20_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx20_textBox->Location = System::Drawing::Point(10, 269);
			this->Gx20_textBox->Name = L"Gx20_textBox";
			this->Gx20_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx20_textBox->TabIndex = 9;
			// 
			// Gx12_textBox
			// 
			this->Gx12_textBox->Enabled = false;
			this->Gx12_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx12_textBox->Location = System::Drawing::Point(110, 233);
			this->Gx12_textBox->Name = L"Gx12_textBox";
			this->Gx12_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx12_textBox->TabIndex = 8;
			// 
			// Gx11_textBox
			// 
			this->Gx11_textBox->Enabled = false;
			this->Gx11_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx11_textBox->Location = System::Drawing::Point(60, 233);
			this->Gx11_textBox->Name = L"Gx11_textBox";
			this->Gx11_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx11_textBox->TabIndex = 7;
			// 
			// Gx10_textBox
			// 
			this->Gx10_textBox->Enabled = false;
			this->Gx10_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx10_textBox->Location = System::Drawing::Point(10, 233);
			this->Gx10_textBox->Name = L"Gx10_textBox";
			this->Gx10_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx10_textBox->TabIndex = 6;
			// 
			// Gx02_textBox
			// 
			this->Gx02_textBox->Enabled = false;
			this->Gx02_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx02_textBox->Location = System::Drawing::Point(110, 197);
			this->Gx02_textBox->Name = L"Gx02_textBox";
			this->Gx02_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx02_textBox->TabIndex = 5;
			// 
			// Gx01_textBox
			// 
			this->Gx01_textBox->Enabled = false;
			this->Gx01_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx01_textBox->Location = System::Drawing::Point(60, 197);
			this->Gx01_textBox->Name = L"Gx01_textBox";
			this->Gx01_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx01_textBox->TabIndex = 4;
			// 
			// Gx00_textBox
			// 
			this->Gx00_textBox->Enabled = false;
			this->Gx00_textBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gx00_textBox->Location = System::Drawing::Point(10, 197);
			this->Gx00_textBox->Name = L"Gx00_textBox";
			this->Gx00_textBox->Size = System::Drawing::Size(44, 30);
			this->Gx00_textBox->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Gx";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Mask:";
			// 
			// Mode_comboBox
			// 
			this->Mode_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Mode_comboBox->FormattingEnabled = true;
			this->Mode_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prewitt Operator", L"Sobel Operator", L"Laplacian Filter" });
			this->Mode_comboBox->Location = System::Drawing::Point(6, 32);
			this->Mode_comboBox->Name = L"Mode_comboBox";
			this->Mode_comboBox->Size = System::Drawing::Size(347, 29);
			this->Mode_comboBox->TabIndex = 0;
			this->Mode_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Mode_comboBox_SelectedIndexChanged);
			// 
			// EdgeImg_label
			// 
			this->EdgeImg_label->AutoSize = true;
			this->EdgeImg_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->EdgeImg_label->Location = System::Drawing::Point(414, 374);
			this->EdgeImg_label->Name = L"EdgeImg_label";
			this->EdgeImg_label->Size = System::Drawing::Size(116, 21);
			this->EdgeImg_label->TabIndex = 15;
			this->EdgeImg_label->Text = L"Edge Image";
			// 
			// Edge_pictureBox
			// 
			this->Edge_pictureBox->Location = System::Drawing::Point(318, 63);
			this->Edge_pictureBox->Name = L"Edge_pictureBox";
			this->Edge_pictureBox->Size = System::Drawing::Size(300, 300);
			this->Edge_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Edge_pictureBox->TabIndex = 14;
			this->Edge_pictureBox->TabStop = false;
			// 
			// Color_checkBox
			// 
			this->Color_checkBox->AutoSize = true;
			this->Color_checkBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Color_checkBox->Checked = true;
			this->Color_checkBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Color_checkBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Color_checkBox->Location = System::Drawing::Point(485, 23);
			this->Color_checkBox->Name = L"Color_checkBox";
			this->Color_checkBox->Size = System::Drawing::Size(133, 25);
			this->Color_checkBox->TabIndex = 16;
			this->Color_checkBox->Text = L"Color (RGB)";
			this->Color_checkBox->UseVisualStyleBackColor = true;
			this->Color_checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Color_checkBox_CheckedChanged);
			// 
			// ResultImg_label
			// 
			this->ResultImg_label->AutoSize = true;
			this->ResultImg_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ResultImg_label->Location = System::Drawing::Point(1085, 374);
			this->ResultImg_label->Name = L"ResultImg_label";
			this->ResultImg_label->Size = System::Drawing::Size(127, 21);
			this->ResultImg_label->TabIndex = 18;
			this->ResultImg_label->Text = L"Result Image";
			// 
			// Result_pictureBox
			// 
			this->Result_pictureBox->Location = System::Drawing::Point(989, 63);
			this->Result_pictureBox->Name = L"Result_pictureBox";
			this->Result_pictureBox->Size = System::Drawing::Size(300, 300);
			this->Result_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Result_pictureBox->TabIndex = 17;
			this->Result_pictureBox->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(994, 414);
			this->Controls->Add(this->ResultImg_label);
			this->Controls->Add(this->Result_pictureBox);
			this->Controls->Add(this->Color_checkBox);
			this->Controls->Add(this->EdgeImg_label);
			this->Controls->Add(this->Edge_pictureBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->GrayOrigin_label);
			this->Controls->Add(this->GrayOrigin_pictureBox);
			this->Controls->Add(this->OpenImgBtn);
			this->Name = L"MyForm";
			this->Text = L"Homework 5: Derivative Filter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Edge_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		Mode_comboBox->SelectedIndex = 0;
	}

	private: void ChangeMode()
	{
		this->Width = 1010;
		this->Height = 453;
		if (Mode_comboBox->SelectedItem == "Prewitt Operator")
		{
			if (Default_radioButton->Checked)
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						((TextBox^)groupBox1->Controls["Gx" + i.ToString() + j.ToString() + "_textBox"])->Text = Gx_Prewitt_A[i][j].ToString();
						((TextBox^)groupBox1->Controls["Gy" + i.ToString() + j.ToString() + "_textBox"])->Text = Gy_Prewitt_A[i][j].ToString();
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						((TextBox^)groupBox1->Controls["Gx" + i.ToString() + j.ToString() + "_textBox"])->Text = Gx_Prewitt_B[i][j].ToString();
						((TextBox^)groupBox1->Controls["Gy" + i.ToString() + j.ToString() + "_textBox"])->Text = Gy_Prewitt_B[i][j].ToString();
					}
				}
			}
		}
		else if (Mode_comboBox->SelectedItem == "Sobel Operator")
		{
			if (Default_radioButton->Checked)
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						((TextBox^)groupBox1->Controls["Gx" + i.ToString() + j.ToString() + "_textBox"])->Text = Gx_Sobel_A[i][j].ToString();
						((TextBox^)groupBox1->Controls["Gy" + i.ToString() + j.ToString() + "_textBox"])->Text = Gy_Sobel_A[i][j].ToString();
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						((TextBox^)groupBox1->Controls["Gx" + i.ToString() + j.ToString() + "_textBox"])->Text = Gx_Sobel_B[i][j].ToString();
						((TextBox^)groupBox1->Controls["Gy" + i.ToString() + j.ToString() + "_textBox"])->Text = Gy_Sobel_B[i][j].ToString();
					}
				}
			}
		}
		else if (Mode_comboBox->SelectedItem == "Laplacian Filter")
		{
			this->Width = 1315;
			if (Default_radioButton->Checked)
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						((TextBox^)groupBox1->Controls["Gx" + i.ToString() + j.ToString() + "_textBox"])->Text = mask_Laplacian_A[i][j].ToString();
						((TextBox^)groupBox1->Controls["Gy" + i.ToString() + j.ToString() + "_textBox"])->Text = "";
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						((TextBox^)groupBox1->Controls["Gx" + i.ToString() + j.ToString() + "_textBox"])->Text = mask_Laplacian_B[i][j].ToString();
						((TextBox^)groupBox1->Controls["Gy" + i.ToString() + j.ToString() + "_textBox"])->Text = "";
					}
				}
			}
		}
	}

	private: System::Void Mode_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ChangeMode();
		if (GrayOrigin_pictureBox->Image)
			RunMode();
	}

	private: System::Void Diagonal_radioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ChangeMode();
		if (GrayOrigin_pictureBox->Image)
			RunMode();
	}

	private: System::Void Default_radioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ChangeMode();
		if (GrayOrigin_pictureBox->Image)
			RunMode();
	}

	private: System::Void Color_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (GrayOrigin_pictureBox->Image)
		{
			GrayOrigin_pictureBox->Image = Color_checkBox->Checked ? colorbmp : TransferToGray(colorbmp);
			RunMode();
		}
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
			colorbmp = bmp;
			GrayOrigin_pictureBox->Image = Color_checkBox->Checked ? bmp : TransferToGray(bmp);
			RunMode();
		}
	}

	private: Bitmap^ TransferToGray(Bitmap ^ origin)
	{
		Bitmap^ gray = gcnew Bitmap(origin->Width, origin->Height, origin->PixelFormat);

		BitmapData^ originBD = origin->LockBits(Rectangle(0, 0, origin->Width, origin->Height), ImageLockMode::ReadOnly, origin->PixelFormat);
		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadWrite, gray->PixelFormat);

		/* Image maybe have unknown information */
		int orignByteskip = originBD->Stride - originBD->Width * 3;
		int grayByteskip = grayBD->Stride - grayBD->Width * 3;

		Byte* originPtr = (Byte*)((void*)originBD->Scan0);
		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);

		for (int y = 0; y < originBD->Height; y++)
		{
			for (int x = 0; x < originBD->Width; x++)
			{
				int pixel = ((int)originPtr[0] + (int)originPtr[1] + (int)originPtr[2]) / 3; // I image

				grayPtr[0] = grayPtr[1] = grayPtr[2] = pixel;

				originPtr += 3;
				grayPtr += 3;
			}
			// throw unknown information away
			originPtr += orignByteskip;
			grayPtr += grayByteskip;
		}

		origin->UnlockBits(originBD);
		gray->UnlockBits(grayBD);
		return gray;
	}

	private: System::Void Run_Btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RunMode();
	}

	private: void RunMode()
	{
		if (GrayOrigin_pictureBox->Image)
		{
			Result_pictureBox->Image = nullptr;
			if (Mode_comboBox->SelectedItem == "Prewitt Operator")
			{
				Edge_pictureBox->Image = PrewittOperator(Default_radioButton->Checked ? Gx_Prewitt_A : Gx_Prewitt_B
														, Default_radioButton->Checked ? Gy_Prewitt_A : Gy_Prewitt_B
														, (Bitmap^)GrayOrigin_pictureBox->Image);
			}
			else if (Mode_comboBox->SelectedItem == "Sobel Operator")
			{
				Edge_pictureBox->Image = SobelOperator(Default_radioButton->Checked ? Gx_Sobel_A : Gx_Sobel_B
														, Default_radioButton->Checked ? Gy_Sobel_A : Gy_Sobel_B
														, (Bitmap^)GrayOrigin_pictureBox->Image);
			}
			else if (Mode_comboBox->SelectedItem == "Laplacian Filter")
			{
				Result_pictureBox->Image = LaplacianFilter(Default_radioButton->Checked ? mask_Laplacian_A : mask_Laplacian_B
														, (Bitmap^)GrayOrigin_pictureBox->Image);
			}
		}
	} 

	private: Bitmap^ GradientOperator(int gx[][3], int gy[][3], Bitmap^ gray)
	{
		Bitmap^ result = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat);

		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadOnly, gray->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);

		int grayByteskip = grayBD->Stride - grayBD->Width * 3;
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		const int maskSize = 3;
		const int blank = maskSize / 2;

		/* copy origin image */
		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				resultPtr[0] = grayPtr[0];
				resultPtr[1] = grayPtr[1];
				resultPtr[2] = grayPtr[2];
				grayPtr += 3;
				resultPtr += 3;
			}
			grayPtr += grayByteskip;
			resultPtr += resultByteskip;
		}
		/********************/

		grayPtr = (Byte*)((void*)grayBD->Scan0);
		resultPtr = (Byte*)((void*)resultBD->Scan0);
		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				int bSum = 0, gSum = 0, rSum = 0;

				// Avoid out of the range
				if (x > 0 && x < grayBD->Width - blank
					&& y > 0 && y < grayBD->Height - blank)
				{
					for (int i = -blank, index_i = 0; i <= blank; i++, index_i++)
					{
						for (int j = -blank, index_j = 0; j <= blank; j++, index_j++)
						{
							Byte* ptr = grayPtr + (x + j) * 3 + (y + i) * grayBD->Stride;
							bSum += ptr[0] * gx[index_i][index_j] + ptr[0] * gy[index_i][index_j];
							gSum += ptr[1] * gx[index_i][index_j] + ptr[1] * gy[index_i][index_j];
							rSum += ptr[2] * gx[index_i][index_j] + ptr[2] * gy[index_i][index_j];
						}
					}

					if (bSum < 0) bSum = 0;
					else if (bSum > 255) bSum = 255;

					if (gSum < 0) gSum = 0;
					else if (gSum > 255) gSum = 255;

					if (rSum < 0) rSum = 0;
					else if (rSum > 255) rSum = 255;
				}

				Byte* ptr = resultPtr + x * 3 + y * resultBD->Stride;
				ptr[0] = bSum;
				ptr[1] = gSum;
				ptr[2] = rSum;
			}
		}

		gray->UnlockBits(grayBD);
		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ PrewittOperator(int gx[][3], int gy[][3], Bitmap^ gray)
	{
		return GradientOperator(gx, gy, gray);
	}

	private: Bitmap^ SobelOperator(int gx[][3], int gy[][3], Bitmap^ gray)
	{
		return GradientOperator(gx, gy, gray);
	}

	private: Bitmap^ LaplacianFilter(int mask[][3], Bitmap^ gray)
	{
		Bitmap^ result = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat);

		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadOnly, gray->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);

		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		const int maskSize = 3;
		const int blank = maskSize / 2;

		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				double bSum = 0, gSum = 0, rSum = 0;

				// Avoid out of the range
				if (x > 0 && x < grayBD->Width - blank
					&& y > 0 && y < grayBD->Height - blank)
				{
					for (int i = -blank, index_i = 0; i <= blank; i++, index_i++)
					{
						for (int j = -blank, index_j = 0; j <= blank; j++, index_j++)
						{
							Byte* ptr = grayPtr + (x + j) * 3 + (y + i) * grayBD->Stride;
							bSum += ptr[0] * mask[index_i][index_j];
							gSum += ptr[1] * mask[index_i][index_j];
							rSum += ptr[2] * mask[index_i][index_j];
						}
					}

					if (bSum < 0) bSum = 0;
					else if (bSum > 255) bSum = 255;

					if (gSum < 0) gSum = 0;
					else if (gSum > 255) gSum = 255;

					if (rSum < 0) rSum = 0;
					else if (rSum > 255) rSum = 255;
				}

				Byte* ptr = resultPtr + x * 3 + y * resultBD->Stride;
				ptr[0] = bSum;
				ptr[1] = gSum;
				ptr[2] = rSum;
			}
		}

		/* get border image */
		Bitmap^ edgeImg = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat);
		BitmapData^ edgeImgBD = edgeImg->LockBits(Rectangle(0, 0, edgeImg->Width, edgeImg->Height), ImageLockMode::ReadOnly, edgeImg->PixelFormat);
		Byte* edgeImgPtr = (Byte*)((void*)edgeImgBD->Scan0);
		
		int edgeImgByteskip = edgeImgBD->Stride - edgeImgBD->Width * 3;
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;
		int grayByteskip = grayBD->Stride - grayBD->Width * 3;
		
		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				int b = resultPtr[0] - grayPtr[0];
				int g = resultPtr[1] - grayPtr[1];
				int r = resultPtr[2] - grayPtr[2];

				if (b < 0) edgeImgPtr[0] = 0;
				else if (b > 255) edgeImgPtr[0] = 255;
				else edgeImgPtr[0] = b;

				if (g < 0) edgeImgPtr[1] = 0;
				else if (g > 255) edgeImgPtr[1] = 255;
				else edgeImgPtr[1] = g;

				if (r < 0) edgeImgPtr[2] = 0;
				else if (r > 255) edgeImgPtr[2] = 255;
				else edgeImgPtr[2] = r;

				edgeImgPtr += 3;
				resultPtr += 3;
				grayPtr += 3;
			}
			edgeImgPtr += edgeImgByteskip;
			resultPtr += resultByteskip;
			grayPtr += grayByteskip;
		}
		edgeImg->UnlockBits(edgeImgBD);
		Edge_pictureBox->Image = edgeImg;
		/*******************/

		gray->UnlockBits(grayBD);
		result->UnlockBits(resultBD);
		return result;
	}
};
}
