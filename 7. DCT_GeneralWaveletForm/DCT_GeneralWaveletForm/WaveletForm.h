#pragma once

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
	/// Summary for WaveletForm
	/// </summary>
	public ref class WaveletForm : public System::Windows::Forms::Form
	{
	public:
		WaveletForm(void)
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
		~WaveletForm()
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
	private: System::Windows::Forms::Label^ Wavelet_label;
	private: System::Windows::Forms::PictureBox^ Wavelet_pictureBox;
	private: System::Windows::Forms::Label^ Result_label;
	private: System::Windows::Forms::PictureBox^ Result_pictureBox;
	private: System::Windows::Forms::NumericUpDown^ level_numericUpDown;
	private: System::Windows::Forms::CheckBox^ Color_checkBox;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private:
		Bitmap^ colorBmp;

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
			this->Wavelet_label = (gcnew System::Windows::Forms::Label());
			this->Wavelet_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Result_label = (gcnew System::Windows::Forms::Label());
			this->Result_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->level_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->Color_checkBox = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wavelet_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level_numericUpDown))->BeginInit();
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
			this->OpenImgBtn->Size = System::Drawing::Size(302, 45);
			this->OpenImgBtn->TabIndex = 8;
			this->OpenImgBtn->Text = L"Load Image";
			this->OpenImgBtn->UseVisualStyleBackColor = true;
			this->OpenImgBtn->Click += gcnew System::EventHandler(this, &WaveletForm::OpenImgBtn_Click);
			// 
			// Wavelet_label
			// 
			this->Wavelet_label->AutoSize = true;
			this->Wavelet_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Wavelet_label->Location = System::Drawing::Point(394, 374);
			this->Wavelet_label->Name = L"Wavelet_label";
			this->Wavelet_label->Size = System::Drawing::Size(144, 21);
			this->Wavelet_label->TabIndex = 12;
			this->Wavelet_label->Text = L"Wavelet Image";
			// 
			// Wavelet_pictureBox
			// 
			this->Wavelet_pictureBox->Location = System::Drawing::Point(318, 63);
			this->Wavelet_pictureBox->Name = L"Wavelet_pictureBox";
			this->Wavelet_pictureBox->Size = System::Drawing::Size(300, 300);
			this->Wavelet_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Wavelet_pictureBox->TabIndex = 11;
			this->Wavelet_pictureBox->TabStop = false;
			// 
			// Result_label
			// 
			this->Result_label->AutoSize = true;
			this->Result_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Result_label->Location = System::Drawing::Point(716, 374);
			this->Result_label->Name = L"Result_label";
			this->Result_label->Size = System::Drawing::Size(127, 21);
			this->Result_label->TabIndex = 14;
			this->Result_label->Text = L"Result Image";
			// 
			// Result_pictureBox
			// 
			this->Result_pictureBox->Location = System::Drawing::Point(624, 63);
			this->Result_pictureBox->Name = L"Result_pictureBox";
			this->Result_pictureBox->Size = System::Drawing::Size(300, 300);
			this->Result_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Result_pictureBox->TabIndex = 13;
			this->Result_pictureBox->TabStop = false;
			// 
			// level_numericUpDown
			// 
			this->level_numericUpDown->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->level_numericUpDown->Location = System::Drawing::Point(498, 15);
			this->level_numericUpDown->Name = L"level_numericUpDown";
			this->level_numericUpDown->Size = System::Drawing::Size(120, 33);
			this->level_numericUpDown->TabIndex = 15;
			this->level_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->level_numericUpDown->ValueChanged += gcnew System::EventHandler(this, &WaveletForm::level_numericUpDown_ValueChanged);
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
			this->Color_checkBox->TabIndex = 16;
			this->Color_checkBox->Text = L"Color\?";
			this->Color_checkBox->UseVisualStyleBackColor = true;
			this->Color_checkBox->CheckedChanged += gcnew System::EventHandler(this, &WaveletForm::Color_checkBox_CheckedChanged);
			// 
			// WaveletForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 408);
			this->Controls->Add(this->Color_checkBox);
			this->Controls->Add(this->level_numericUpDown);
			this->Controls->Add(this->Result_label);
			this->Controls->Add(this->Result_pictureBox);
			this->Controls->Add(this->Wavelet_label);
			this->Controls->Add(this->Wavelet_pictureBox);
			this->Controls->Add(this->GrayOrigin_label);
			this->Controls->Add(this->GrayOrigin_pictureBox);
			this->Controls->Add(this->OpenImgBtn);
			this->Name = L"WaveletForm";
			this->Text = L"Question 2: General Wavelet Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wavelet_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level_numericUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void startWavelet()
	{
		if (GrayOrigin_pictureBox->Image)
		{
			Wavelet_pictureBox->Image = GeneralWaveletTransform((int)level_numericUpDown->Value
														, (Bitmap^)GrayOrigin_pictureBox->Image);
			Result_pictureBox->Image = getRealResultImg((int)level_numericUpDown->Value
														, (Bitmap^)Wavelet_pictureBox->Image);
		}
	}

	private: System::Void level_numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		startWavelet();
	}

	private: System::Void Color_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (GrayOrigin_pictureBox->Image)
		{
			GrayOrigin_pictureBox->Image = Color_checkBox->Checked ? colorBmp : TransferToGray(colorBmp);
			startWavelet();
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
			startWavelet();
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

	private: Bitmap^ GeneralWaveletTransform(int level, Bitmap^ gray)
	{
		Bitmap^ result = gcnew Bitmap(gray->Width, gray->Height, gray->PixelFormat);

		BitmapData^ grayBD = gray->LockBits(Rectangle(0, 0, gray->Width, gray->Height), ImageLockMode::ReadWrite, gray->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadOnly, result->PixelFormat);

		/* Image maybe have unknown information */
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* grayPtr = (Byte*)((void*)grayBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		array<int, 3>^ data = gcnew array<int, 3> (grayBD->Height, grayBD->Width, 3);
		array<int, 3>^ tmp_row = gcnew array<int, 3>(grayBD->Height, grayBD->Width, 3); // to save img data temporaily
		array<int, 3>^ tmp_col = gcnew array<int, 3>(grayBD->Height, grayBD->Width, 3); // to save img data temporaily

		/* Copy origin image data */
		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				Byte* ptr = grayPtr + x * 3 + y * grayBD->Stride;
				for (int channels = 0; channels < 3; channels++)
				{
					data[y, x, channels] = ptr[channels];
					tmp_col[y, x, channels] = data[y, x, channels];
				}
			}
		}
		/**********************************************/

		int curHeight = grayBD->Height;
		int curWidth = grayBD->Width;

		while (level--)
		{
			int tmpX = 0, tmpY = 0;

			// handle row (low frequency)
			for (int y = 0; y < curHeight; y++)
			{
				tmpX = 0;
				for (int x = 0; x < curWidth; x += 2)
				{
					for (int channels = 0; channels < 3; channels++)
					{
						data[tmpY, tmpX, channels] = (tmp_col[y, x, channels] + tmp_col[y, x + 1, channels]) / 2;
						tmp_row[tmpY, tmpX, channels] = data[tmpY, tmpX, channels];
					}
					tmpX++;
				}
				tmpY++;
			}
			tmpY = 0;

			// handle row (high frequency)
			for (int y = 0; y < curHeight; y++)
			{
				tmpX = curWidth / 2;
				for (int x = 0; x < curWidth; x += 2)
				{
					for (int channels = 0; channels < 3; channels++)
					{
						data[tmpY, tmpX, channels] = (tmp_col[y, x, channels] - tmp_col[y, x + 1, channels]) / 2;
						tmp_row[tmpY, tmpX, channels] = data[tmpY, tmpX, channels];
					}
					tmpX++;
				}
				tmpY++;
			}
			tmpY = 0;

			tmpX = 0, tmpY = 0;
			
			// handle col (low frequency)
			for (int x = 0; x < curWidth; x++)
			{
				tmpY = 0;
				for (int y = 0; y < curHeight; y += 2)
				{
					for (int channels = 0; channels < 3; channels++)
					{
						data[tmpY, tmpX, channels] = (tmp_row[y, x, channels] + tmp_row[y + 1, x, channels]) / 2;
						tmp_col[tmpY, tmpX, channels] = data[tmpY, tmpX, channels];
					}
					tmpY++;
				}
				tmpX++;
			}
			tmpX = 0;

			// handle col (high frequency)
			for (int x = 0; x < curWidth; x++)
			{
				tmpY = curHeight / 2;
				for (int y = 0; y < curHeight; y += 2)
				{
					for (int channels = 0; channels < 3; channels++)
					{
						data[tmpY, tmpX, channels] = (tmp_row[y, x, channels] - tmp_row[y + 1, x, channels]) / 2;
						tmp_col[tmpY, tmpX, channels] = data[tmpY, tmpX, channels];
					}
					tmpY++;
				}
				tmpX++;
			}
			tmpX = 0;

			curHeight /= 2;
			curWidth /= 2;
		}
		
		for (int y = 0; y < grayBD->Height; y++)
		{
			for (int x = 0; x < grayBD->Width; x++)
			{
				resultPtr[0] = data[y, x, 0];
				resultPtr[1] = data[y, x, 1];
				resultPtr[2] = data[y, x, 2];
				resultPtr += 3;
			}
			resultPtr += resultByteskip;
		}

		gray->UnlockBits(grayBD);
		result->UnlockBits(resultBD);
		return result;
	}

	private: Bitmap^ getRealResultImg(int level, Bitmap^ waveletImg)
	{
		int width = waveletImg->Width;
		int height = waveletImg->Height;
		while (level--)
		{
			width /= 2;
			height /= 2;
		}

		if (!width || !height) return nullptr;

		Bitmap^ result = gcnew Bitmap(width, height, waveletImg->PixelFormat);

		BitmapData^ waveletImgBD = waveletImg->LockBits(Rectangle(0, 0, waveletImg->Width, waveletImg->Height), ImageLockMode::ReadWrite, waveletImg->PixelFormat);
		BitmapData^ resultBD = result->LockBits(Rectangle(0, 0, result->Width, result->Height), ImageLockMode::ReadOnly, result->PixelFormat);

		/* Image maybe have unknown information */
		int resultByteskip = resultBD->Stride - resultBD->Width * 3;

		Byte* waveletImgPtr = (Byte*)((void*)waveletImgBD->Scan0);
		Byte* resultPtr = (Byte*)((void*)resultBD->Scan0);

		for (int y = 0; y < resultBD->Height; y++)
		{
			for (int x = 0; x < resultBD->Width; x++)
			{
				Byte* ptr = waveletImgPtr + x * 3 + y * waveletImgBD->Stride;
				resultPtr[0] = ptr[0];
				resultPtr[1] = ptr[1];
				resultPtr[2] = ptr[2];
				resultPtr += 3;
			}
			resultPtr += resultByteskip;
		}

		waveletImg->UnlockBits(waveletImgBD);
		result->UnlockBits(resultBD);
		return result;
	}
};
}
