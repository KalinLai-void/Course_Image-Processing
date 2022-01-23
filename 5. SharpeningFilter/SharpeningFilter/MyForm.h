#pragma once

#include <vector>

namespace SharpeningFilter {

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
	private: System::Windows::Forms::Label^ ResultImg_label;

	private: System::Windows::Forms::PictureBox^ ResultImg_pictureBox;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ Mode_comboBox;
	private: System::Windows::Forms::Label^ A_label;

	private: System::Windows::Forms::NumericUpDown^ N_numericUpDown;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ A_numericUpDown;
	private: System::Windows::Forms::Button^ Sharpen_Btn;



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
			this->ResultImg_label = (gcnew System::Windows::Forms::Label());
			this->ResultImg_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Sharpen_Btn = (gcnew System::Windows::Forms::Button());
			this->A_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->A_label = (gcnew System::Windows::Forms::Label());
			this->N_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mode_comboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultImg_pictureBox))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A_numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->N_numericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// GrayOrigin_label
			// 
			this->GrayOrigin_label->AutoSize = true;
			this->GrayOrigin_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->GrayOrigin_label->Location = System::Drawing::Point(69, 374);
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
			this->OpenImgBtn->Click += gcnew System::EventHandler(this, &MyForm::OpenImgBtn_Click);
			// 
			// ResultImg_label
			// 
			this->ResultImg_label->AutoSize = true;
			this->ResultImg_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ResultImg_label->Location = System::Drawing::Point(410, 374);
			this->ResultImg_label->Name = L"ResultImg_label";
			this->ResultImg_label->Size = System::Drawing::Size(127, 21);
			this->ResultImg_label->TabIndex = 14;
			this->ResultImg_label->Text = L"Result Image";
			// 
			// ResultImg_pictureBox
			// 
			this->ResultImg_pictureBox->Location = System::Drawing::Point(318, 63);
			this->ResultImg_pictureBox->Name = L"ResultImg_pictureBox";
			this->ResultImg_pictureBox->Size = System::Drawing::Size(300, 300);
			this->ResultImg_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ResultImg_pictureBox->TabIndex = 13;
			this->ResultImg_pictureBox->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Sharpen_Btn);
			this->groupBox1->Controls->Add(this->A_numericUpDown);
			this->groupBox1->Controls->Add(this->A_label);
			this->groupBox1->Controls->Add(this->N_numericUpDown);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Mode_comboBox);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(624, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(289, 390);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Control Panel";
			// 
			// Sharpen_Btn
			// 
			this->Sharpen_Btn->Location = System::Drawing::Point(10, 344);
			this->Sharpen_Btn->Name = L"Sharpen_Btn";
			this->Sharpen_Btn->Size = System::Drawing::Size(273, 40);
			this->Sharpen_Btn->TabIndex = 5;
			this->Sharpen_Btn->Text = L"Sharpen!";
			this->Sharpen_Btn->UseVisualStyleBackColor = true;
			this->Sharpen_Btn->Click += gcnew System::EventHandler(this, &MyForm::Sharpen_Btn_Click);
			// 
			// A_numericUpDown
			// 
			this->A_numericUpDown->DecimalPlaces = 1;
			this->A_numericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->A_numericUpDown->Location = System::Drawing::Point(164, 130);
			this->A_numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->A_numericUpDown->Name = L"A_numericUpDown";
			this->A_numericUpDown->Size = System::Drawing::Size(63, 36);
			this->A_numericUpDown->TabIndex = 4;
			this->A_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->A_numericUpDown->Visible = false;
			// 
			// A_label
			// 
			this->A_label->AutoSize = true;
			this->A_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->A_label->Location = System::Drawing::Point(120, 134);
			this->A_label->Name = L"A_label";
			this->A_label->Size = System::Drawing::Size(34, 21);
			this->A_label->TabIndex = 3;
			this->A_label->Text = L"A: ";
			this->A_label->Visible = false;
			// 
			// N_numericUpDown
			// 
			this->N_numericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->N_numericUpDown->Location = System::Drawing::Point(164, 86);
			this->N_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->N_numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->N_numericUpDown->Name = L"N_numericUpDown";
			this->N_numericUpDown->Size = System::Drawing::Size(63, 36);
			this->N_numericUpDown->TabIndex = 2;
			this->N_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(6, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Mask Size (n*n):";
			// 
			// Mode_comboBox
			// 
			this->Mode_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Mode_comboBox->FormattingEnabled = true;
			this->Mode_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Spatial High-Pass Filter", L"Spatial High-Boost Filter" });
			this->Mode_comboBox->Location = System::Drawing::Point(6, 35);
			this->Mode_comboBox->Name = L"Mode_comboBox";
			this->Mode_comboBox->Size = System::Drawing::Size(277, 32);
			this->Mode_comboBox->TabIndex = 0;
			this->Mode_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Mode_comboBox_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(926, 414);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ResultImg_label);
			this->Controls->Add(this->ResultImg_pictureBox);
			this->Controls->Add(this->GrayOrigin_label);
			this->Controls->Add(this->GrayOrigin_pictureBox);
			this->Controls->Add(this->OpenImgBtn);
			this->Name = L"MyForm";
			this->Text = L"Homework 4: Sharpening Filters";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultImg_pictureBox))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A_numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->N_numericUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		Mode_comboBox->SelectedIndex = 0;
	}

	private: System::Void Mode_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (Mode_comboBox->SelectedItem == "Spatial High-Pass Filter")
		{
			A_label->Visible = false;
			A_numericUpDown->Visible = false;
		}
		else if (Mode_comboBox->SelectedItem == "Spatial High-Boost Filter")
		{
			A_label->Visible = true;
			A_numericUpDown->Visible = true;
		}
	}

	private: System::Void Sharpen_Btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Mode_comboBox->SelectedItem == "Spatial High-Pass Filter")
		{
			if (GrayOrigin_pictureBox->Image)
				ResultImg_pictureBox->Image = HighPassFilter((int)N_numericUpDown->Value
														   , (Bitmap^)GrayOrigin_pictureBox->Image);
		}
		else if (Mode_comboBox->SelectedItem == "Spatial High-Boost Filter")
		{
			if (GrayOrigin_pictureBox->Image)
				ResultImg_pictureBox->Image = HighBoostFilter((int)N_numericUpDown->Value
															, (double)A_numericUpDown->Value
															, (Bitmap^)GrayOrigin_pictureBox->Image);
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
			GrayOrigin_pictureBox->Image = TransferToGray(bmp);
			ResultImg_pictureBox->Image = HighPassFilter((int)N_numericUpDown->Value
													   , (Bitmap^)GrayOrigin_pictureBox->Image);
		}
	}

	private: Bitmap^ TransferToGray(Bitmap^ origin)
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

	private: Bitmap^ HighPassFilter(int n, Bitmap^ gray)
	{
		Bitmap^ result = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat);

		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadWrite, gray->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadOnly, result->PixelFormat);

		/* Image maybe have unknown information */
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int blank = n / 2;

		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				// avoid out of the range 
				if (x >= blank && x < grayBD->Width - blank
					&& y >= blank && y < grayBD->Height - blank)
				{
					// vector template needs import library "vector"
					std::vector<int> b;
					std::vector<int> g;
					std::vector<int> r;

					for (int i = -blank; i <= blank; i++)
					{
						for (int j = -blank; j <= blank; j++)
						{
							Byte* ptr = grayPtr + (x + j) * 3 + (y + i) * grayBD->Stride;
							b.push_back(ptr[0]);
							g.push_back(ptr[1]);
							r.push_back(ptr[2]);
						}
					}

					int setRate;
					int bSum = 0, gSum = 0, rSum = 0;

					for (int i = 0; i < n * n; i++)
					{
						if (i == n * n / 2) setRate = n * n - 1;
						else setRate = -1;

						bSum += b[i] * setRate;
						gSum += g[i] * setRate;
						rSum += r[i] * setRate;
					}

					if (bSum < 0) bSum = 0;
					if (gSum < 0) gSum = 0;
					if (rSum < 0) rSum = 0;

					resultPtr[0] = bSum / (n * n);
					resultPtr[1] = gSum / (n * n);
					resultPtr[2] = rSum / (n * n);
				}
				else // if is edge
				{
					Byte* ptr = grayPtr + x * 3 + y * grayBD->Stride;
					resultPtr[0] = ptr[0];
					resultPtr[1] = ptr[1];
					resultPtr[2] = ptr[2];
				}
				resultPtr += 3;
			}
			resultPtr += resultByteskip;
		}
		
		gray->UnlockBits(grayBD);
		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ HighBoostFilter(int n, double A, Bitmap^ gray)
	{
		Bitmap^ result = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat);

		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadWrite, gray->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadOnly, result->PixelFormat);

		/* Image maybe have unknown information */
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int blank = n / 2;

		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				// avoid out of the range 
				if (x >= blank && x < grayBD->Width - blank
					&& y >= blank && y < grayBD->Height - blank)
				{
					// vector template needs import library "vector"
					std::vector<int> b;
					std::vector<int> g;
					std::vector<int> r;

					for (int i = -blank; i <= blank; i++)
					{
						for (int j = -blank; j <= blank; j++)
						{
							Byte* ptr = grayPtr + (x + j) * 3 + (y + i) * grayBD->Stride;
							b.push_back(ptr[0]);
							g.push_back(ptr[1]);
							r.push_back(ptr[2]);
						}
					}

					double setRate;
					int bSum = 0, gSum = 0, rSum = 0;

					for (int i = 0; i < n * n; i++)
					{
						if (i == n * n / 2) setRate = A + n * n - 2;
						else setRate = -1;

						bSum += b[i] * setRate;
						gSum += g[i] * setRate;
						rSum += r[i] * setRate;
					}

					if (bSum < 0) bSum = 0;
					if (gSum < 0) gSum = 0;
					if (rSum < 0) rSum = 0;

					resultPtr[0] = bSum / (n * n);
					resultPtr[1] = gSum / (n * n);
					resultPtr[2] = rSum / (n * n);
				}
				else // if is edge
				{
					Byte* ptr = grayPtr + x * 3 + y * grayBD->Stride;
					resultPtr[0] = ptr[0];
					resultPtr[1] = ptr[1];
					resultPtr[2] = ptr[2];
				}
				resultPtr += 3;
			}
			resultPtr += resultByteskip;
		}
		
		gray->UnlockBits(grayBD);
		result->UnlockBits(resultBD);
		return result;
	}
};
}
