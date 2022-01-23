#pragma once

#include <iostream>
#include <cmath>

#define PI 3.1415926

namespace DCTGeneralWaveletForm {

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
	/// Summary for Q1_Form
	/// </summary>
	public ref class Q1_Form : public System::Windows::Forms::Form
	{
	public:
		Q1_Form(void)
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
		~Q1_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ OpenImgBtn;
	protected:
	private: System::Windows::Forms::Label^ GrayOrigin_label;
	private: System::Windows::Forms::PictureBox^ GrayOrigin_pictureBox;
	private: System::Windows::Forms::Label^ DCT_label;
	private: System::Windows::Forms::PictureBox^ DCT_pictureBox;

	private: System::Windows::Forms::Label^ IDCT_label;
	private: System::Windows::Forms::PictureBox^ IDCT_pictureBox;


	private: System::Windows::Forms::NumericUpDown^ DCT_Range_numbericUpDown;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ Color_checkBox;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	
	private:
		Bitmap^ colorBmp; // to save color image

		// to save DCT information array
		array<int, 2>^ dctArr_B;
		array<int, 2>^ dctArr_G;
		array<int, 2>^ dctArr_R;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->OpenImgBtn = (gcnew System::Windows::Forms::Button());
			this->GrayOrigin_label = (gcnew System::Windows::Forms::Label());
			this->GrayOrigin_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->DCT_label = (gcnew System::Windows::Forms::Label());
			this->DCT_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->IDCT_label = (gcnew System::Windows::Forms::Label());
			this->IDCT_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->DCT_Range_numbericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Color_checkBox = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DCT_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IDCT_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DCT_Range_numbericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// OpenImgBtn
			// 
			this->OpenImgBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->OpenImgBtn->Location = System::Drawing::Point(12, 12);
			this->OpenImgBtn->Name = L"OpenImgBtn";
			this->OpenImgBtn->Size = System::Drawing::Size(302, 45);
			this->OpenImgBtn->TabIndex = 4;
			this->OpenImgBtn->Text = L"Load Image";
			this->OpenImgBtn->UseVisualStyleBackColor = true;
			this->OpenImgBtn->Click += gcnew System::EventHandler(this, &Q1_Form::OpenImgBtn_Click);
			// 
			// GrayOrigin_label
			// 
			this->GrayOrigin_label->AutoSize = true;
			this->GrayOrigin_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->GrayOrigin_label->Location = System::Drawing::Point(70, 374);
			this->GrayOrigin_label->Name = L"GrayOrigin_label";
			this->GrayOrigin_label->Size = System::Drawing::Size(194, 21);
			this->GrayOrigin_label->TabIndex = 7;
			this->GrayOrigin_label->Text = L"Original Gray Image";
			// 
			// GrayOrigin_pictureBox
			// 
			this->GrayOrigin_pictureBox->Location = System::Drawing::Point(12, 63);
			this->GrayOrigin_pictureBox->Name = L"GrayOrigin_pictureBox";
			this->GrayOrigin_pictureBox->Size = System::Drawing::Size(300, 300);
			this->GrayOrigin_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->GrayOrigin_pictureBox->TabIndex = 6;
			this->GrayOrigin_pictureBox->TabStop = false;
			// 
			// DCT_label
			// 
			this->DCT_label->AutoSize = true;
			this->DCT_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->DCT_label->Location = System::Drawing::Point(368, 374);
			this->DCT_label->Name = L"DCT_label";
			this->DCT_label->Size = System::Drawing::Size(214, 21);
			this->DCT_label->TabIndex = 9;
			this->DCT_label->Text = L"8*8 DCT Result Image";
			// 
			// DCT_pictureBox
			// 
			this->DCT_pictureBox->Location = System::Drawing::Point(318, 63);
			this->DCT_pictureBox->Name = L"DCT_pictureBox";
			this->DCT_pictureBox->Size = System::Drawing::Size(300, 300);
			this->DCT_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->DCT_pictureBox->TabIndex = 8;
			this->DCT_pictureBox->TabStop = false;
			// 
			// IDCT_label
			// 
			this->IDCT_label->AutoSize = true;
			this->IDCT_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IDCT_label->Location = System::Drawing::Point(668, 374);
			this->IDCT_label->Name = L"IDCT_label";
			this->IDCT_label->Size = System::Drawing::Size(222, 21);
			this->IDCT_label->TabIndex = 11;
			this->IDCT_label->Text = L"8*8 IDCT Result Image";
			// 
			// IDCT_pictureBox
			// 
			this->IDCT_pictureBox->Location = System::Drawing::Point(624, 63);
			this->IDCT_pictureBox->Name = L"IDCT_pictureBox";
			this->IDCT_pictureBox->Size = System::Drawing::Size(300, 300);
			this->IDCT_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->IDCT_pictureBox->TabIndex = 10;
			this->IDCT_pictureBox->TabStop = false;
			// 
			// DCT_Range_numbericUpDown
			// 
			this->DCT_Range_numbericUpDown->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->DCT_Range_numbericUpDown->Location = System::Drawing::Point(801, 17);
			this->DCT_Range_numbericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->DCT_Range_numbericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->DCT_Range_numbericUpDown->Name = L"DCT_Range_numbericUpDown";
			this->DCT_Range_numbericUpDown->Size = System::Drawing::Size(120, 33);
			this->DCT_Range_numbericUpDown->TabIndex = 12;
			this->DCT_Range_numbericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->DCT_Range_numbericUpDown->ValueChanged += gcnew System::EventHandler(this, &Q1_Form::DCT_Range_numbericUpDown_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(533, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 24);
			this->label1->TabIndex = 13;
			this->label1->Text = L"DCT && IDCT Range (n*n):";
			// 
			// Color_checkBox
			// 
			this->Color_checkBox->AutoSize = true;
			this->Color_checkBox->Checked = true;
			this->Color_checkBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Color_checkBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Color_checkBox->Location = System::Drawing::Point(320, 23);
			this->Color_checkBox->Name = L"Color_checkBox";
			this->Color_checkBox->Size = System::Drawing::Size(83, 25);
			this->Color_checkBox->TabIndex = 14;
			this->Color_checkBox->Text = L"Color\?";
			this->Color_checkBox->UseVisualStyleBackColor = true;
			this->Color_checkBox->CheckedChanged += gcnew System::EventHandler(this, &Q1_Form::checkBox1_CheckedChanged);
			// 
			// Q1_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 410);
			this->Controls->Add(this->Color_checkBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DCT_Range_numbericUpDown);
			this->Controls->Add(this->IDCT_label);
			this->Controls->Add(this->IDCT_pictureBox);
			this->Controls->Add(this->DCT_label);
			this->Controls->Add(this->DCT_pictureBox);
			this->Controls->Add(this->GrayOrigin_label);
			this->Controls->Add(this->GrayOrigin_pictureBox);
			this->Controls->Add(this->OpenImgBtn);
			this->Name = L"Q1_Form";
			this->Text = L"Question 1: DCT & IDCT";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DCT_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IDCT_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DCT_Range_numbericUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void runDctandIDCT()
	{
		if (GrayOrigin_pictureBox->Image)
		{
			DCT_pictureBox->Image = DCT_Transform((int)DCT_Range_numbericUpDown->Value, (Bitmap^)GrayOrigin_pictureBox->Image);
			IDCT_pictureBox->Image = IDCT_Transform((int)DCT_Range_numbericUpDown->Value, (Bitmap^)DCT_pictureBox->Image);
		}
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (GrayOrigin_pictureBox->Image)
		{
			GrayOrigin_pictureBox->Image = Color_checkBox->Checked ? colorBmp : TransferToGray(colorBmp);
			runDctandIDCT();
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
			colorBmp = bmp;
			GrayOrigin_pictureBox->Image = Color_checkBox->Checked ? bmp : TransferToGray(bmp);
			runDctandIDCT();
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
	private: System::Void DCT_Range_numbericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (GrayOrigin_pictureBox->Image)
		{
			int n = (int)DCT_Range_numbericUpDown->Value;
			DCT_label->Text = n.ToString() + "x" + n.ToString() + " DCT Result Image";
			IDCT_label->Text = n.ToString() + "x" + n.ToString() + " IDCT Result Image";
			runDctandIDCT();
		}
	}

	private: Bitmap^ DCT_Transform(int n, Bitmap^ gray)
	{
		Bitmap^ result = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat);

		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadOnly, gray->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);

		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int rowBlock = grayBD->Width / n;
		int colBlock = grayBD->Height / n;

		dctArr_B = gcnew array<int, 2>(grayBD->Height, grayBD->Width);
		dctArr_G = gcnew array<int, 2>(grayBD->Height, grayBD->Width);
		dctArr_R = gcnew array<int, 2>(grayBD->Height, grayBD->Width);

		for (int i = 0; i < colBlock; i++)
		{
			for (int j = 0; j < rowBlock; j++)
			{
				int offsetX = j * n, offsetY = i * n;
				for (int v = offsetY; v < offsetY + n; v++)
				{
					for (int u = offsetX; u < offsetX + n; u++)
					{
						double alpha_u, alpha_v;

						if (u == offsetX) alpha_u = sqrt(1.0 / n);
						else alpha_u = sqrt(2.0 / n);

						if (v == offsetY) alpha_v = sqrt(1.0 / n);
						else alpha_v = sqrt(2.0 / n);

						double bSum = 0, gSum = 0, rSum = 0;
						for (int y = offsetY; y < offsetY + n; y++)
						{
							for (int x = offsetX; x < offsetX + n; x++)
							{
								Byte* ptr = grayPtr + x * 3 + y * grayBD->Stride;
								bSum += ((int)ptr[0] - 128)
									* cos(((2.0 * (x - offsetX) + 1) * (u - offsetX) * PI) / (2.0 * n))
									* cos(((2.0 * (y - offsetY) + 1) * (v - offsetY) * PI) / (2.0 * n));

								gSum += ((int)ptr[1] - 128)
									* cos(((2.0 * (x - offsetX) + 1) * (u - offsetX) * PI) / (2.0 * n))
									* cos(((2.0 * (y - offsetY) + 1) * (v - offsetY) * PI) / (2.0 * n));

								rSum += ((int)ptr[2] - 128)
									* cos(((2.0 * (x - offsetX) + 1) * (u - offsetX) * PI) / (2.0 * n))
									* cos(((2.0 * (y - offsetY) + 1) * (v - offsetY) * PI) / (2.0 * n));
							}
						}

						double b = alpha_u * alpha_v * bSum;
						double g = alpha_u * alpha_v * gSum;
						double r = alpha_u * alpha_v * rSum;

						// filter high frequency information
						if (!((u % n < n / 2) && (v % n < n / 2)))
						{
							dctArr_B[v, u] = 0;
							dctArr_G[v, u] = 0;
							dctArr_R[v, u] = 0;
						}
						else
						{
							dctArr_B[v, u] = b;
							dctArr_G[v, u] = g;
							dctArr_R[v, u] = r;
						}

						Byte* ptr = resultPtr + u * 3 + v * resultBD->Stride;
						ptr[0] = (Byte)dctArr_B[v, u];
						ptr[1] = (Byte)dctArr_G[v, u];
						ptr[2] = (Byte)dctArr_R[v, u];
					}
				}
			}
		}

		gray->UnlockBits(grayBD);
		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ IDCT_Transform(int n, Bitmap^ dctImg)
	{
		Bitmap^ result = gcnew Bitmap(dctImg->Width, dctImg->Height, dctImg->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadWrite, result->PixelFormat);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int rowBlock = resultBD->Width / n;
		int colBlock = resultBD->Height / n;

		for (int i = 0; i < colBlock; i++)
		{
			for (int j = 0; j < rowBlock; j++)
			{
				int offsetX = j * n, offsetY = i * n;
				for (int y = offsetY; y < offsetY + n; y++)
				{
					for (int x = offsetX; x < offsetX + n; x++)
					{
						double bSum = 0, gSum = 0, rSum = 0;

						for (int v = offsetY; v < offsetY + n; v++)
						{
							for (int u = offsetX; u < offsetX + n; u++)
							{
								double alpha_u, alpha_v;

								if (u == offsetX) alpha_u = sqrt(1.0 / n);
								else alpha_u = sqrt(2.0 / n);

								if (v == offsetY) alpha_v = sqrt(1.0 / n);
								else alpha_v = sqrt(2.0 / n);

								//Byte* ptr = dctImgPtr + u * 3 + v * dctImgBD->Stride;
								bSum += alpha_u * alpha_v * dctArr_B[v, u]
									* cos(((2.0 * (x - offsetX) + 1) * (u - offsetX) * PI) / (2.0 * n))
									* cos(((2.0 * (y - offsetY) + 1) * (v - offsetY) * PI) / (2.0 * n));

								gSum += alpha_u * alpha_v * dctArr_G[v, u]
									* cos(((2.0 * (x - offsetX) + 1) * (u - offsetX) * PI) / (2.0 * n))
									* cos(((2.0 * (y - offsetY) + 1) * (v - offsetY) * PI) / (2.0 * n));

								rSum += alpha_u * alpha_v * dctArr_R[v, u]
									* cos(((2.0 * (x - offsetX) + 1) * (u - offsetX) * PI) / (2.0 * n))
									* cos(((2.0 * (y - offsetY) + 1) * (v - offsetY) * PI) / (2.0 * n));
							}
						}

						// Now have some bug: have gap (high frequency) between each block 
						Byte* ptr = resultPtr + x * 3 + y * resultBD->Stride;
						ptr[0] = (Byte)(bSum + 128);
						ptr[1] = (Byte)(gSum + 128);
						ptr[2] = (Byte)(rSum + 128);
					}
				}
			}
		}

		result->UnlockBits(resultBD);
		return result;
	}
};
}
