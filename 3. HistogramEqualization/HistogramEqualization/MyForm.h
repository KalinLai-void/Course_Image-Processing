#pragma once

#include "Histogram.h"

namespace HistogramEqualization {

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
	private: System::Windows::Forms::Label^ Color_label;
	protected:
	private: System::Windows::Forms::Button^ OpenImgBtn;
	private: System::Windows::Forms::PictureBox^ Color_pictureBox;
	private: System::Windows::Forms::Label^ Gray_label;
	private: System::Windows::Forms::PictureBox^ Gray_pictureBox;
	private: System::Windows::Forms::Label^ HE_label;
	private: System::Windows::Forms::PictureBox^ HE_pictureBox;
	private: System::Windows::Forms::Button^ histogram_Btn;
	private: System::Windows::Forms::ComboBox^ Mode_comboBox;
	private: System::Windows::Forms::NumericUpDown^ LocalRange_numericUpDown;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private: // use to draw Histogram
		int* GrayLevelCount = new int[256];
		int* HELevelCount = new int[256];
		int histogramMax = 0;
		int histogramMax_forLocal = 0;
		   

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Color_label = (gcnew System::Windows::Forms::Label());
			this->OpenImgBtn = (gcnew System::Windows::Forms::Button());
			this->Color_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Gray_label = (gcnew System::Windows::Forms::Label());
			this->Gray_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->HE_label = (gcnew System::Windows::Forms::Label());
			this->HE_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->histogram_Btn = (gcnew System::Windows::Forms::Button());
			this->Mode_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->LocalRange_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Color_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gray_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HE_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LocalRange_numericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// Color_label
			// 
			this->Color_label->AutoSize = true;
			this->Color_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Color_label->Location = System::Drawing::Point(72, 322);
			this->Color_label->Name = L"Color_label";
			this->Color_label->Size = System::Drawing::Size(121, 21);
			this->Color_label->TabIndex = 8;
			this->Color_label->Text = L"Color Image";
			// 
			// OpenImgBtn
			// 
			this->OpenImgBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->OpenImgBtn->Location = System::Drawing::Point(12, 9);
			this->OpenImgBtn->Name = L"OpenImgBtn";
			this->OpenImgBtn->Size = System::Drawing::Size(256, 45);
			this->OpenImgBtn->TabIndex = 7;
			this->OpenImgBtn->Text = L"Load Image";
			this->OpenImgBtn->UseVisualStyleBackColor = true;
			this->OpenImgBtn->Click += gcnew System::EventHandler(this, &MyForm::OpenImgBtn_Click);
			// 
			// Color_pictureBox
			// 
			this->Color_pictureBox->Location = System::Drawing::Point(12, 63);
			this->Color_pictureBox->Name = L"Color_pictureBox";
			this->Color_pictureBox->Size = System::Drawing::Size(256, 256);
			this->Color_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Color_pictureBox->TabIndex = 6;
			this->Color_pictureBox->TabStop = false;
			// 
			// Gray_label
			// 
			this->Gray_label->AutoSize = true;
			this->Gray_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Gray_label->Location = System::Drawing::Point(323, 322);
			this->Gray_label->Name = L"Gray_label";
			this->Gray_label->Size = System::Drawing::Size(173, 21);
			this->Gray_label->TabIndex = 10;
			this->Gray_label->Text = L"Gray-Level Image";
			// 
			// Gray_pictureBox
			// 
			this->Gray_pictureBox->Location = System::Drawing::Point(274, 63);
			this->Gray_pictureBox->Name = L"Gray_pictureBox";
			this->Gray_pictureBox->Size = System::Drawing::Size(256, 256);
			this->Gray_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Gray_pictureBox->TabIndex = 9;
			this->Gray_pictureBox->TabStop = false;
			// 
			// HE_label
			// 
			this->HE_label->AutoSize = true;
			this->HE_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->HE_label->Location = System::Drawing::Point(620, 322);
			this->HE_label->Name = L"HE_label";
			this->HE_label->Size = System::Drawing::Size(99, 21);
			this->HE_label->TabIndex = 12;
			this->HE_label->Text = L"HE Image";
			// 
			// HE_pictureBox
			// 
			this->HE_pictureBox->Location = System::Drawing::Point(536, 63);
			this->HE_pictureBox->Name = L"HE_pictureBox";
			this->HE_pictureBox->Size = System::Drawing::Size(256, 256);
			this->HE_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->HE_pictureBox->TabIndex = 11;
			this->HE_pictureBox->TabStop = false;
			// 
			// histogram_Btn
			// 
			this->histogram_Btn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->histogram_Btn->Location = System::Drawing::Point(536, 12);
			this->histogram_Btn->Name = L"histogram_Btn";
			this->histogram_Btn->Size = System::Drawing::Size(256, 45);
			this->histogram_Btn->TabIndex = 13;
			this->histogram_Btn->Text = L"See Histogram";
			this->histogram_Btn->UseVisualStyleBackColor = true;
			this->histogram_Btn->Click += gcnew System::EventHandler(this, &MyForm::histogram_Btn_Click);
			// 
			// Mode_comboBox
			// 
			this->Mode_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Mode_comboBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Mode_comboBox->FormattingEnabled = true;
			this->Mode_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Global Enhancement", L"Local Enhancement" });
			this->Mode_comboBox->Location = System::Drawing::Point(274, 18);
			this->Mode_comboBox->Name = L"Mode_comboBox";
			this->Mode_comboBox->Size = System::Drawing::Size(199, 29);
			this->Mode_comboBox->TabIndex = 14;
			this->Mode_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Mode_comboBox_SelectedIndexChanged);
			// 
			// LocalRange_numericUpDown
			// 
			this->LocalRange_numericUpDown->AllowDrop = true;
			this->LocalRange_numericUpDown->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->LocalRange_numericUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->LocalRange_numericUpDown->Location = System::Drawing::Point(479, 14);
			this->LocalRange_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->LocalRange_numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->LocalRange_numericUpDown->Name = L"LocalRange_numericUpDown";
			this->LocalRange_numericUpDown->ReadOnly = true;
			this->LocalRange_numericUpDown->Size = System::Drawing::Size(51, 33);
			this->LocalRange_numericUpDown->TabIndex = 16;
			this->LocalRange_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			this->LocalRange_numericUpDown->ValueChanged += gcnew System::EventHandler(this, &MyForm::LocalRange_numericUpDown_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 362);
			this->Controls->Add(this->LocalRange_numericUpDown);
			this->Controls->Add(this->Mode_comboBox);
			this->Controls->Add(this->histogram_Btn);
			this->Controls->Add(this->HE_label);
			this->Controls->Add(this->HE_pictureBox);
			this->Controls->Add(this->Gray_label);
			this->Controls->Add(this->Gray_pictureBox);
			this->Controls->Add(this->Color_label);
			this->Controls->Add(this->OpenImgBtn);
			this->Controls->Add(this->Color_pictureBox);
			this->Name = L"MyForm";
			this->Text = L"Histogram Equalization";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Color_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gray_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HE_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LocalRange_numericUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		Mode_comboBox->SelectedIndex = 0;
		for (int i = 0; i < 256; i++)
		{
			GrayLevelCount[i] = 0;
			HELevelCount[i] = 0;
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
			Color_pictureBox->Image = bmp;
			Gray_pictureBox->Image = TransferToGray(bmp);

			/** using to draw histogram **/
			for (int i = 0; i < 256; i++) GrayLevelCount[i] = HELevelCount[i] = 0;
			histogramMax = histogramMax_forLocal = 0;

			if (Mode_comboBox->SelectedIndex == 0) // Global
				HE_pictureBox->Image = HistogramEqualized_Global((Bitmap^)Gray_pictureBox->Image);
			else // Local
				HE_pictureBox->Image = HistogramEqualized_Local((Bitmap^)Gray_pictureBox->Image);
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

	private: Bitmap^ HistogramEqualized_Global(Bitmap^ gray)
	{
		Bitmap^ result = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat); // HE image

		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadWrite, gray->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadOnly, result->PixelFormat);

		/* Image maybe have unknown information */
		int grayByteskip = grayBD->Stride - grayBD->Width * 3;
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		int r[256] = { 0 }; // count each level(0 ~ 255)'s amount
		int s[256] = { 0 }; // equalization
		int pixelCount = 0;

		for (int i = 0; i < 256; i++) r[i] = s[i] = 0;

		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				r[grayPtr[0]]++;
				pixelCount++;

				grayPtr += 3;
			}
			// throw unknown information away
			grayPtr += grayByteskip;
		}
		
		int accumulation = 0; // accumulation before current level
		for (int i = 0; i < 256; i++) // normalization
		{
			/** using to draw histogram **/
			if (r[i] > histogramMax) histogramMax = r[i];
			GrayLevelCount[i] = r[i];
			/*****************************/

			accumulation += r[i];
			s[i] = (accumulation * 255) / pixelCount;
			r[i] = 0;
		}
		
		grayPtr = (Byte*)((void*)grayBD->Scan0); 
		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				resultPtr[0] = resultPtr[1] = resultPtr[2] = s[grayPtr[0]];
				r[resultPtr[0]]++;

				grayPtr += 3;
				resultPtr += 3;
			}
			grayPtr += grayByteskip;
			resultPtr += resultByteskip;
		}

		/** using to draw histogram **/
		for (int i = 0; i < 256; i++) HELevelCount[i] = r[i];
		histogramMax_forLocal = histogramMax;

		result->UnlockBits(resultBD);
		gray->UnlockBits(grayBD);
		return result;
	}

	private: Bitmap^ HistogramEqualized_Local(Bitmap^ gray)
	{
		// nn*nn range in local enhancement
		int nn = (int)LocalRange_numericUpDown->Value;
		int n = (nn - 1) / 2;// the distance of the center point to border
		
		Bitmap^ result = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat); // HE image

		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadWrite, gray->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadOnly, result->PixelFormat);

		/* Image maybe have unknown information */
		int grayByteskip = grayBD->Stride - grayBD->Width * 3;
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				int r[256] = { 0 }; // count each level(0 ~ 255)'s amount
				int s[256] = { 0 }; // equalization
				int pixelCount = 0;

				for (int i = 0; i < 256; i++) r[i] = s[i] = 0;

				// run n*n range
				for (int range_y = n * -1; range_y < n; range_y++)
				{
					for (int range_x = n * -1; range_x < n; range_x++)
					{
						if (x + range_x >= 0 && x + range_x < grayBD->Width
							&& y + range_y >= 0 && y + range_y < grayBD->Height) // avoid out of range
						{
							Byte* ptr = grayPtr +  range_x * 3 + range_y * grayBD->Stride;
							r[ptr[0]]++;
							pixelCount++;
						}
					}
				}

				int accumulation = 0; // accumulation before current level
				for (int i = 0; i < 256; i++) // normalization
				{
					accumulation += r[i];
					s[i] = (accumulation * 255) / pixelCount;
				}

				/** using to draw histogram **/
				if (s[grayPtr[0]] > histogramMax_forLocal) histogramMax_forLocal = s[grayPtr[0]];
				if (GrayLevelCount[grayPtr[0]] > histogramMax) histogramMax = GrayLevelCount[grayPtr[0]];
				GrayLevelCount[grayPtr[0]]++;
				HELevelCount[grayPtr[0]] = s[grayPtr[0]];
				/****************************/

				// only change the center point's value
				resultPtr[0] = resultPtr[1] = resultPtr[2] = s[grayPtr[0]];

				grayPtr += 3;
				resultPtr += 3;
			}
			grayPtr += grayByteskip;
			resultPtr += resultByteskip;
		}

		result->UnlockBits(resultBD);
		gray->UnlockBits(grayBD);
		return result;
	}

	private: System::Void Mode_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		/** using to draw histogram **/
		for (int i = 0; i < 256; i++) GrayLevelCount[i] = HELevelCount[i] = 0;
		histogramMax = histogramMax_forLocal = 0;

		if (Mode_comboBox->SelectedIndex == 1)
		{
			LocalRange_numericUpDown->Visible = true;
			if (Gray_pictureBox->Image != nullptr)
				HE_pictureBox->Image = HistogramEqualized_Local((Bitmap^)Gray_pictureBox->Image);
		}
		else
		{
			LocalRange_numericUpDown->Value = 7;
			LocalRange_numericUpDown->Visible = false;
			if (Gray_pictureBox->Image != nullptr)
				HE_pictureBox->Image = HistogramEqualized_Global((Bitmap^)Gray_pictureBox->Image);
		}
	}

	private: System::Void LocalRange_numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		/** using to draw histogram **/
		for (int i = 0; i < 256; i++) GrayLevelCount[i] = HELevelCount[i] = 0;
		histogramMax = histogramMax_forLocal = 0;

		if (Gray_pictureBox->Image != nullptr)
			HE_pictureBox->Image = HistogramEqualized_Local((Bitmap^)Gray_pictureBox->Image);
	}

	private: System::Void histogram_Btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		const double RATIO = 0.2; // remaining figure's space to top's ratio

		Histogram^ form = gcnew Histogram();
		form->GrayLevelCount = GrayLevelCount;
		form->HELevelCount = HELevelCount;
		form->histogramMax = histogramMax + RATIO * histogramMax;
		form->histogramMax_forLocal = histogramMax_forLocal + RATIO * histogramMax_forLocal;
		form->Show();
	}
};
}
