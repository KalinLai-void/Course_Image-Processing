#pragma once

namespace My2ImageMergeandScaling {

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
	/// Summary for Q2_Form
	/// </summary>
	public ref class Q2_Form : public System::Windows::Forms::Form
	{
	public:
		Q2_Form(void)
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
		~Q2_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ GrayOrigin_pictureBox;
	protected:
	private: System::Windows::Forms::PictureBox^ FirstOrder_pictureBox;
	private: System::Windows::Forms::PictureBox^ Bilinear_pictureBox;
	private: System::Windows::Forms::Button^ OpenImgBtn;
	private: System::Windows::Forms::TrackBar^ ZoomIn_trackBar;
	private: System::Windows::Forms::Label^ GrayOrigin_label;
	private: System::Windows::Forms::Label^ FirstOrder_label;
	private: System::Windows::Forms::Label^ Bilinear_label;
	private: System::Windows::Forms::PictureBox^ ZeroOrder_pictureBox;

	private: System::Windows::Forms::Label^ ZeroOrder_label;
	private: System::Windows::Forms::Button^ button1;


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
			this->GrayOrigin_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->FirstOrder_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Bilinear_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->OpenImgBtn = (gcnew System::Windows::Forms::Button());
			this->ZoomIn_trackBar = (gcnew System::Windows::Forms::TrackBar());
			this->GrayOrigin_label = (gcnew System::Windows::Forms::Label());
			this->FirstOrder_label = (gcnew System::Windows::Forms::Label());
			this->Bilinear_label = (gcnew System::Windows::Forms::Label());
			this->ZeroOrder_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ZeroOrder_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstOrder_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bilinear_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ZoomIn_trackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ZeroOrder_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// GrayOrigin_pictureBox
			// 
			this->GrayOrigin_pictureBox->Location = System::Drawing::Point(12, 63);
			this->GrayOrigin_pictureBox->Name = L"GrayOrigin_pictureBox";
			this->GrayOrigin_pictureBox->Size = System::Drawing::Size(300, 300);
			this->GrayOrigin_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->GrayOrigin_pictureBox->TabIndex = 0;
			this->GrayOrigin_pictureBox->TabStop = false;
			this->GrayOrigin_pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Q2_Form::GrayOrigin_pictureBox_Paint);
			this->GrayOrigin_pictureBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Q2_Form::GrayOrigin_pictureBox_MouseDown);
			this->GrayOrigin_pictureBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Q2_Form::GrayOrigin_pictureBox_MouseMove);
			this->GrayOrigin_pictureBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Q2_Form::GrayOrigin_pictureBox_MouseUp);
			// 
			// FirstOrder_pictureBox
			// 
			this->FirstOrder_pictureBox->Location = System::Drawing::Point(628, 63);
			this->FirstOrder_pictureBox->Name = L"FirstOrder_pictureBox";
			this->FirstOrder_pictureBox->Size = System::Drawing::Size(300, 300);
			this->FirstOrder_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->FirstOrder_pictureBox->TabIndex = 1;
			this->FirstOrder_pictureBox->TabStop = false;
			// 
			// Bilinear_pictureBox
			// 
			this->Bilinear_pictureBox->Location = System::Drawing::Point(936, 63);
			this->Bilinear_pictureBox->Name = L"Bilinear_pictureBox";
			this->Bilinear_pictureBox->Size = System::Drawing::Size(300, 300);
			this->Bilinear_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Bilinear_pictureBox->TabIndex = 2;
			this->Bilinear_pictureBox->TabStop = false;
			// 
			// OpenImgBtn
			// 
			this->OpenImgBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->OpenImgBtn->Location = System::Drawing::Point(12, 12);
			this->OpenImgBtn->Name = L"OpenImgBtn";
			this->OpenImgBtn->Size = System::Drawing::Size(302, 45);
			this->OpenImgBtn->TabIndex = 3;
			this->OpenImgBtn->Text = L"Load Image";
			this->OpenImgBtn->UseVisualStyleBackColor = true;
			this->OpenImgBtn->Click += gcnew System::EventHandler(this, &Q2_Form::OpenImgBtn_Click);
			// 
			// ZoomIn_trackBar
			// 
			this->ZoomIn_trackBar->LargeChange = 2;
			this->ZoomIn_trackBar->Location = System::Drawing::Point(320, 12);
			this->ZoomIn_trackBar->Maximum = 20;
			this->ZoomIn_trackBar->Minimum = 1;
			this->ZoomIn_trackBar->Name = L"ZoomIn_trackBar";
			this->ZoomIn_trackBar->Size = System::Drawing::Size(302, 45);
			this->ZoomIn_trackBar->TabIndex = 4;
			this->ZoomIn_trackBar->Value = 1;
			this->ZoomIn_trackBar->Scroll += gcnew System::EventHandler(this, &Q2_Form::ZoomIn_trackBar_Scroll);
			// 
			// GrayOrigin_label
			// 
			this->GrayOrigin_label->AutoSize = true;
			this->GrayOrigin_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->GrayOrigin_label->Location = System::Drawing::Point(70, 374);
			this->GrayOrigin_label->Name = L"GrayOrigin_label";
			this->GrayOrigin_label->Size = System::Drawing::Size(183, 22);
			this->GrayOrigin_label->TabIndex = 5;
			this->GrayOrigin_label->Text = L"Original Gray Image";
			// 
			// FirstOrder_label
			// 
			this->FirstOrder_label->AutoSize = true;
			this->FirstOrder_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->FirstOrder_label->Location = System::Drawing::Point(730, 374);
			this->FirstOrder_label->Name = L"FirstOrder_label";
			this->FirstOrder_label->Size = System::Drawing::Size(103, 22);
			this->FirstOrder_label->TabIndex = 6;
			this->FirstOrder_label->Text = L"First-Order";
			// 
			// Bilinear_label
			// 
			this->Bilinear_label->AutoSize = true;
			this->Bilinear_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->Bilinear_label->Location = System::Drawing::Point(997, 374);
			this->Bilinear_label->Name = L"Bilinear_label";
			this->Bilinear_label->Size = System::Drawing::Size(189, 22);
			this->Bilinear_label->TabIndex = 7;
			this->Bilinear_label->Text = L"Bilinear Interpolation";
			// 
			// ZeroOrder_pictureBox
			// 
			this->ZeroOrder_pictureBox->Location = System::Drawing::Point(320, 63);
			this->ZeroOrder_pictureBox->Name = L"ZeroOrder_pictureBox";
			this->ZeroOrder_pictureBox->Size = System::Drawing::Size(300, 300);
			this->ZeroOrder_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ZeroOrder_pictureBox->TabIndex = 8;
			this->ZeroOrder_pictureBox->TabStop = false;
			// 
			// ZeroOrder_label
			// 
			this->ZeroOrder_label->AutoSize = true;
			this->ZeroOrder_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->ZeroOrder_label->Location = System::Drawing::Point(425, 374);
			this->ZeroOrder_label->Name = L"ZeroOrder_label";
			this->ZeroOrder_label->Size = System::Drawing::Size(104, 22);
			this->ZeroOrder_label->TabIndex = 9;
			this->ZeroOrder_label->Text = L"Zero-Order";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(675, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Q2_Form::button1_Click);
			// 
			// Q2_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1247, 411);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ZeroOrder_label);
			this->Controls->Add(this->ZeroOrder_pictureBox);
			this->Controls->Add(this->Bilinear_label);
			this->Controls->Add(this->FirstOrder_label);
			this->Controls->Add(this->GrayOrigin_label);
			this->Controls->Add(this->ZoomIn_trackBar);
			this->Controls->Add(this->OpenImgBtn);
			this->Controls->Add(this->Bilinear_pictureBox);
			this->Controls->Add(this->FirstOrder_pictureBox);
			this->Controls->Add(this->GrayOrigin_pictureBox);
			this->Name = L"Q2_Form";
			this->Text = L"Question 2 - Zoom-In Image with First-Order and Bilinear.";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstOrder_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bilinear_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ZoomIn_trackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ZeroOrder_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/** Get X Y, and draw rectangle area **/
	private:
		Point^ startPos, ^ endPos;
		Point^ startPos_real, ^ endPos_real;
		bool isDrawing;

	private: void GetRealPos(int start_x, int start_y, int end_x, int end_y)
	{
		// transfer select point to real point (using re-scale)
		if (GrayOrigin_pictureBox->Image->Width > GrayOrigin_pictureBox->Image->Height)
		{
			int offset = (GrayOrigin_pictureBox->Image->Width - GrayOrigin_pictureBox->Image->Height) / 2;
			startPos_real = gcnew Point(  start_x * GrayOrigin_pictureBox->Image->Width / GrayOrigin_pictureBox->Width
										, start_y * GrayOrigin_pictureBox->Image->Width / GrayOrigin_pictureBox->Width - offset);
			endPos_real = gcnew Point(end_x * GrayOrigin_pictureBox->Image->Width / GrayOrigin_pictureBox->Width
									, end_y * GrayOrigin_pictureBox->Image->Width / GrayOrigin_pictureBox->Width - offset);
		}
		else
		{
			int offset = (GrayOrigin_pictureBox->Image->Height - GrayOrigin_pictureBox->Image->Width) / 2;
			startPos_real = gcnew Point(  start_x * GrayOrigin_pictureBox->Image->Height / GrayOrigin_pictureBox->Height - offset
										, start_y * GrayOrigin_pictureBox->Image->Height / GrayOrigin_pictureBox->Height);
			endPos_real = gcnew Point(end_x * GrayOrigin_pictureBox->Image->Height / GrayOrigin_pictureBox->Height - offset
									, end_y * GrayOrigin_pictureBox->Image->Height / GrayOrigin_pictureBox->Height);
		}

		// when the selected range out of picture's range
		if (startPos_real->X < 0) startPos_real->X = 0;
		if (startPos_real->X > GrayOrigin_pictureBox->Image->Width) startPos_real->X = GrayOrigin_pictureBox->Image->Width;
		if (startPos_real->Y < 0) startPos_real->Y = 0;
		if (startPos_real->Y > GrayOrigin_pictureBox->Image->Height) startPos_real->Y = GrayOrigin_pictureBox->Image->Height;
		if (endPos_real->X < 0) endPos_real->X = 0;
		if (endPos_real->X > GrayOrigin_pictureBox->Image->Width) endPos_real->X = GrayOrigin_pictureBox->Image->Width;
		if (endPos_real->Y < 0) endPos_real->Y = 0;
		if (endPos_real->Y > GrayOrigin_pictureBox->Image->Height) endPos_real->Y = GrayOrigin_pictureBox->Image->Height;
	}

	private: System::Void GrayOrigin_pictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		Pen^ redPen = gcnew Pen(Color::Red, 2.f);

		if (isDrawing)
		{
			if (!GrayOrigin_pictureBox->Image) return;

			if (endPos->X - startPos->X >=0 && endPos->Y - startPos->Y >= 0)
			{
				GetRealPos(startPos->X, startPos->Y, endPos->X, endPos->Y);
				e->Graphics->DrawRectangle(redPen, startPos->X, startPos->Y, Math::Abs(endPos->X - startPos->X), Math::Abs(endPos->Y - startPos->Y));
			}
			else if (endPos->X - startPos->X < 0 && endPos->Y - startPos->Y >= 0)
			{
				GetRealPos(startPos->X, startPos->Y, endPos->X, endPos->Y);
				e->Graphics->DrawRectangle(redPen, endPos->X, startPos->Y, Math::Abs(endPos->X - startPos->X), Math::Abs(endPos->Y - startPos->Y));
			}
			else if (endPos->X - startPos->X >= 0 && endPos->Y - startPos->Y < 0)
			{
				GetRealPos(endPos->X, endPos->Y, startPos->X, startPos->Y);
				e->Graphics->DrawRectangle(redPen, startPos->X, endPos->Y, Math::Abs(endPos->X - startPos->X), Math::Abs(endPos->Y - startPos->Y));
			}
			else if (endPos->X - startPos->X < 0 && endPos->Y - startPos->Y < 0)
			{
				GetRealPos(endPos->X, endPos->Y, startPos->X, startPos->Y);
				e->Graphics->DrawRectangle(redPen, endPos->X, endPos->Y, Math::Abs(endPos->X - startPos->X), Math::Abs(endPos->Y - startPos->Y));
			}
		}
	}

	private: System::Void GrayOrigin_pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		startPos = endPos = e->Location;
		isDrawing = true;
		GrayOrigin_pictureBox->Invalidate();
	}

	private: System::Void GrayOrigin_pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (isDrawing)
		{
			isDrawing = false;

			// let the endPos bigger than the startPos forever
			if (startPos_real->X > endPos_real->X)
			{
				int tmp = startPos_real->X;
				startPos_real->X = endPos_real->X;
				endPos_real->X = tmp;
			}

			if (startPos_real->Y > endPos_real->Y)
			{
				int tmp = startPos_real->Y;
				startPos_real->Y = endPos_real->Y;
				endPos_real->Y = tmp;
			}
		}
	}

	private: System::Void GrayOrigin_pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		endPos = e->Location;
		if (isDrawing)
			GrayOrigin_pictureBox->Invalidate();
	}
	/////////////////////////////////////////////////////////////////////////

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

			startPos_real = gcnew Point(0, 0);
			endPos_real = gcnew Point(GrayOrigin_pictureBox->Image->Width, GrayOrigin_pictureBox->Image->Height);

			ZeroOrder_pictureBox->Image = ZoomInImg_withZeroOrder();
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

	private: Bitmap^ ZoomInImg_withZeroOrder()
	{
		int k = ZoomIn_trackBar->Value;

		Bitmap^ origin = (Bitmap^)GrayOrigin_pictureBox->Image;
		Bitmap^ output = gcnew Bitmap(Math::Abs(endPos_real->X - startPos_real->X) * k
									, Math::Abs(endPos_real->Y - startPos_real->Y) * k, origin->PixelFormat);

		BitmapData^ originBD = origin->LockBits(Rectangle(0, 0, origin->Width, origin->Height), ImageLockMode::ReadOnly, origin->PixelFormat);
		BitmapData^ outputBD = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

		/* Image maybe have unknown information */
		int orignByteskip = originBD->Stride - originBD->Width * 3;
		int outputByteskip = outputBD->Stride - outputBD->Width * 3;

		Byte* originPtr = (Byte*)((void*)originBD->Scan0);
		Byte* outputPtr = (Byte*)((void*)outputBD->Scan0);

		for (int y = 0; y < originBD->Height; y++)
		{
			for (int j = 0; j < k; j++) // repeat vertical k times
			{
				for (int x = 0; x < originBD->Width; x++)
				{
					if (y >= startPos_real->Y && y < endPos_real->Y &&
						x >= startPos_real->X && x < endPos_real->X)
					{
						for (int i = 0; i < k; i++) // repeat horizonal k times
						{


							outputPtr += 3;
						}
					}
				}
				if (y >= startPos_real->Y && y <= endPos_real->Y) outputPtr += outputByteskip;
			}
		}

		origin->UnlockBits(originBD);
		output->UnlockBits(outputBD);
		return output;
	}

	private: System::Void ZoomIn_trackBar_Scroll(System::Object^ sender, System::EventArgs^ e) 
	{
		if (GrayOrigin_pictureBox->Image == nullptr)
			return;

		ZeroOrder_pictureBox->Image = ZoomInImg_withZeroOrder();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ZeroOrder_pictureBox->Image = ZoomInImg_withZeroOrder();
	}
};
}
