#pragma once

#include <cmath>

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


	private: System::Windows::Forms::Label^ GrayOrigin_label;
	private: System::Windows::Forms::Label^ FirstOrder_label;
	private: System::Windows::Forms::Label^ Bilinear_label;
	private: System::Windows::Forms::PictureBox^ ZeroOrder_pictureBox;

	private: System::Windows::Forms::Label^ ZeroOrder_label;
	private: System::Windows::Forms::TrackBar^ Zoom_trackBar;
	private: System::Windows::Forms::Button^ ResetSelectBtn;
	private: System::Windows::Forms::Label^ OriginAreaLabel;
	private: System::Windows::Forms::Label^ ZoomAreaLabel;








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
			this->GrayOrigin_label = (gcnew System::Windows::Forms::Label());
			this->FirstOrder_label = (gcnew System::Windows::Forms::Label());
			this->Bilinear_label = (gcnew System::Windows::Forms::Label());
			this->ZeroOrder_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ZeroOrder_label = (gcnew System::Windows::Forms::Label());
			this->Zoom_trackBar = (gcnew System::Windows::Forms::TrackBar());
			this->ResetSelectBtn = (gcnew System::Windows::Forms::Button());
			this->OriginAreaLabel = (gcnew System::Windows::Forms::Label());
			this->ZoomAreaLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstOrder_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bilinear_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ZeroOrder_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Zoom_trackBar))->BeginInit();
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
			this->OpenImgBtn->Location = System::Drawing::Point(12, 9);
			this->OpenImgBtn->Name = L"OpenImgBtn";
			this->OpenImgBtn->Size = System::Drawing::Size(302, 45);
			this->OpenImgBtn->TabIndex = 3;
			this->OpenImgBtn->Text = L"Load Image";
			this->OpenImgBtn->UseVisualStyleBackColor = true;
			this->OpenImgBtn->Click += gcnew System::EventHandler(this, &Q2_Form::OpenImgBtn_Click);
			// 
			// GrayOrigin_label
			// 
			this->GrayOrigin_label->AutoSize = true;
			this->GrayOrigin_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->GrayOrigin_label->Location = System::Drawing::Point(70, 374);
			this->GrayOrigin_label->Name = L"GrayOrigin_label";
			this->GrayOrigin_label->Size = System::Drawing::Size(194, 21);
			this->GrayOrigin_label->TabIndex = 5;
			this->GrayOrigin_label->Text = L"Original Gray Image";
			// 
			// FirstOrder_label
			// 
			this->FirstOrder_label->AutoSize = true;
			this->FirstOrder_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->FirstOrder_label->Location = System::Drawing::Point(730, 374);
			this->FirstOrder_label->Name = L"FirstOrder_label";
			this->FirstOrder_label->Size = System::Drawing::Size(111, 21);
			this->FirstOrder_label->TabIndex = 6;
			this->FirstOrder_label->Text = L"First-Order";
			// 
			// Bilinear_label
			// 
			this->Bilinear_label->AutoSize = true;
			this->Bilinear_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Bilinear_label->Location = System::Drawing::Point(997, 374);
			this->Bilinear_label->Name = L"Bilinear_label";
			this->Bilinear_label->Size = System::Drawing::Size(202, 21);
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
			this->ZeroOrder_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ZeroOrder_label->Location = System::Drawing::Point(425, 374);
			this->ZeroOrder_label->Name = L"ZeroOrder_label";
			this->ZeroOrder_label->Size = System::Drawing::Size(112, 21);
			this->ZeroOrder_label->TabIndex = 9;
			this->ZeroOrder_label->Text = L"Zero-Order";
			// 
			// Zoom_trackBar
			// 
			this->Zoom_trackBar->LargeChange = 2;
			this->Zoom_trackBar->Location = System::Drawing::Point(936, 9);
			this->Zoom_trackBar->Minimum = 1;
			this->Zoom_trackBar->Name = L"Zoom_trackBar";
			this->Zoom_trackBar->Size = System::Drawing::Size(300, 45);
			this->Zoom_trackBar->SmallChange = 2;
			this->Zoom_trackBar->TabIndex = 10;
			this->Zoom_trackBar->Value = 1;
			this->Zoom_trackBar->Scroll += gcnew System::EventHandler(this, &Q2_Form::ZoomIn_trackBar_Scroll);
			// 
			// ResetSelectBtn
			// 
			this->ResetSelectBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->ResetSelectBtn->Location = System::Drawing::Point(320, 9);
			this->ResetSelectBtn->Name = L"ResetSelectBtn";
			this->ResetSelectBtn->Size = System::Drawing::Size(300, 44);
			this->ResetSelectBtn->TabIndex = 11;
			this->ResetSelectBtn->Text = L"Reset selected area and scaling";
			this->ResetSelectBtn->UseVisualStyleBackColor = true;
			this->ResetSelectBtn->Click += gcnew System::EventHandler(this, &Q2_Form::ResetSelectBtn_Click);
			// 
			// OriginAreaLabel
			// 
			this->OriginAreaLabel->AutoSize = true;
			this->OriginAreaLabel->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->OriginAreaLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->OriginAreaLabel->Location = System::Drawing::Point(626, 9);
			this->OriginAreaLabel->Name = L"OriginAreaLabel";
			this->OriginAreaLabel->Size = System::Drawing::Size(203, 19);
			this->OriginAreaLabel->TabIndex = 12;
			this->OriginAreaLabel->Text = L"Origin Selected Area Size:";
			// 
			// ZoomAreaLabel
			// 
			this->ZoomAreaLabel->AutoSize = true;
			this->ZoomAreaLabel->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ZoomAreaLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ZoomAreaLabel->Location = System::Drawing::Point(626, 35);
			this->ZoomAreaLabel->Name = L"ZoomAreaLabel";
			this->ZoomAreaLabel->Size = System::Drawing::Size(199, 19);
			this->ZoomAreaLabel->TabIndex = 13;
			this->ZoomAreaLabel->Text = L"Zoom Selected Area Size:";
			// 
			// Q2_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1247, 413);
			this->Controls->Add(this->ZoomAreaLabel);
			this->Controls->Add(this->OriginAreaLabel);
			this->Controls->Add(this->ResetSelectBtn);
			this->Controls->Add(this->Zoom_trackBar);
			this->Controls->Add(this->ZeroOrder_label);
			this->Controls->Add(this->ZeroOrder_pictureBox);
			this->Controls->Add(this->Bilinear_label);
			this->Controls->Add(this->FirstOrder_label);
			this->Controls->Add(this->GrayOrigin_label);
			this->Controls->Add(this->OpenImgBtn);
			this->Controls->Add(this->Bilinear_pictureBox);
			this->Controls->Add(this->FirstOrder_pictureBox);
			this->Controls->Add(this->GrayOrigin_pictureBox);
			this->Name = L"Q2_Form";
			this->Text = L"Question 2 - Zoom-In Image with First-Order and Bilinear.";
			this->Load += gcnew System::EventHandler(this, &Q2_Form::Q2_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrayOrigin_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirstOrder_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bilinear_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ZeroOrder_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Zoom_trackBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		bool zoomIn_or_zoomOut; // 0: zoomIn, 1: zoomOut

	/** Get X Y, and draw rectangle area **/
	private:
		Point^ startPos, ^ endPos; // select point on picture box 
		Point^ startPos_real, ^ endPos_real; // turn to real point on image
		bool isDrawing, isMoving;
		bool hasOriginImg;

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
		Pen^ selectRed = gcnew Pen(Color::Red, 2.f);

		if (isDrawing)
		{
			if (!GrayOrigin_pictureBox->Image) return;

			if (endPos->X - startPos->X >=0 && endPos->Y - startPos->Y >= 0)
			{
				GetRealPos(startPos->X, startPos->Y, endPos->X, endPos->Y);
				e->Graphics->DrawRectangle(selectRed, startPos->X, startPos->Y, Math::Abs(endPos->X - startPos->X), Math::Abs(endPos->Y - startPos->Y));
			}
			else if (endPos->X - startPos->X < 0 && endPos->Y - startPos->Y >= 0)
			{
				GetRealPos(startPos->X, startPos->Y, endPos->X, endPos->Y);
				e->Graphics->DrawRectangle(selectRed, endPos->X, startPos->Y, Math::Abs(endPos->X - startPos->X), Math::Abs(endPos->Y - startPos->Y));
			}
			else if (endPos->X - startPos->X >= 0 && endPos->Y - startPos->Y < 0)
			{
				GetRealPos(endPos->X, endPos->Y, startPos->X, startPos->Y);
				e->Graphics->DrawRectangle(selectRed, startPos->X, endPos->Y, Math::Abs(endPos->X - startPos->X), Math::Abs(endPos->Y - startPos->Y));
			}
			else if (endPos->X - startPos->X < 0 && endPos->Y - startPos->Y < 0)
			{
				GetRealPos(endPos->X, endPos->Y, startPos->X, startPos->Y);
				e->Graphics->DrawRectangle(selectRed, endPos->X, endPos->Y, Math::Abs(endPos->X - startPos->X), Math::Abs(endPos->Y - startPos->Y));
			}
		}
	}

	private: System::Void GrayOrigin_pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (hasOriginImg)
		{
			startPos = endPos = e->Location;
			isDrawing = true;

			if (isMoving)
				GrayOrigin_pictureBox->Invalidate();
		}
	}
	private: System::Void GrayOrigin_pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (isDrawing)
		{
			isDrawing = false;
			isMoving = false;
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

			if (endPos != startPos) // avoid bug easily
				UpdateAllPictureBox();
		}
	}

	private: System::Void GrayOrigin_pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (isDrawing)
		{
			isMoving = true;
			endPos = e->Location;
			GrayOrigin_pictureBox->Invalidate();
		}
	}
	/////////////////////////////////////////////////////////////////////////

	private: System::Void Q2_Form_Load(System::Object^ sender, System::EventArgs^ e)
	{
		if (zoomIn_or_zoomOut)
			this->Text = "Question 3 - Zoom-Out Image with First-Order and Bilinear.";
		else
			this->Text = "Question 2 - Zoom-In Image with First-Order and Bilinear.";
	}

	private: System::Void ResetSelectBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (GrayOrigin_pictureBox->Image)
		{
			startPos_real = gcnew Point(0, 0);
			endPos_real = gcnew Point(GrayOrigin_pictureBox->Image->Width - 1, GrayOrigin_pictureBox->Image->Height - 1);
			Zoom_trackBar->Value = Zoom_trackBar->Minimum;
			GrayOrigin_pictureBox->Invalidate();
			UpdateAllPictureBox();
		}
	}

	private: void SetAreaSizeLabel(double k)
	{
		int x = Math::Abs(endPos_real->X - startPos_real->X) + 1;
		int y = Math::Abs(endPos_real->Y - startPos_real->Y) + 1;

		OriginAreaLabel->Text = "Origin Selected Area Size: " + x.ToString() + "x" + y.ToString();
		ZoomAreaLabel->Text = "Zoom Selected Area Size: " + ((int)(x * k)).ToString() + "x" + ((int)(y * k)).ToString();
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

			startPos_real = gcnew Point(0, 0);
			endPos_real = gcnew Point(GrayOrigin_pictureBox->Image->Width - 1, GrayOrigin_pictureBox->Image->Height - 1);
			hasOriginImg = true;
			Zoom_trackBar->Value = Zoom_trackBar->Minimum;

			UpdateAllPictureBox();
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

	private: Bitmap^ GetSelectedArea()
	{
		Bitmap^ origin = (Bitmap^)GrayOrigin_pictureBox->Image;
		Bitmap^ output = gcnew Bitmap(Math::Abs(endPos_real->X - startPos_real->X), Math::Abs(endPos_real->Y - startPos_real->Y), origin->PixelFormat);

		BitmapData^ originBD = origin->LockBits(Rectangle(0, 0, origin->Width, origin->Height), ImageLockMode::ReadOnly, origin->PixelFormat);
		BitmapData^ outputBD = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

		/* Image maybe have unknown information */
		int orignByteskip = originBD->Stride - originBD->Width * 3;
		int outputByteskip = outputBD->Stride - outputBD->Width * 3;

		Byte* originPtr = (Byte*)((void*)originBD->Scan0);
		Byte* outputPtr = (Byte*)((void*)outputBD->Scan0);

		for (int y = 0; y < originBD->Height; y++)
		{
			for (int x = 0; x < originBD->Width; x++)
			{
				if (y >= startPos_real->Y && y < endPos_real->Y &&
					x >= startPos_real->X && x < endPos_real->X) // in the selected area
				{
					outputPtr[0] = originPtr[0];
					outputPtr[1] = originPtr[1];
					outputPtr[2] = originPtr[2];

					outputPtr += 3;
				}
				originPtr += 3;
			}
			if (y >= startPos_real->Y && y <= endPos_real->Y) outputPtr += outputByteskip;
			originPtr += orignByteskip;
		}

		origin->UnlockBits(originBD);
		output->UnlockBits(outputBD);
		return output;
	}

	private: Bitmap^ ZoomInImg_withZeroOrder(double k)
	{
		Bitmap^ selectedArea = GetSelectedArea();
		Bitmap^ output = gcnew Bitmap(Math::Abs(endPos_real->X - startPos_real->X) * k
									, Math::Abs(endPos_real->Y - startPos_real->Y) * k
									, selectedArea->PixelFormat);

		BitmapData^ selectedAreaBD = selectedArea->LockBits(Rectangle(0, 0, selectedArea->Width, selectedArea->Height), ImageLockMode::ReadOnly, selectedArea->PixelFormat);
		BitmapData^ outputBD = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

		/* Image maybe have unknown information */
		int selectedAreaByteskip = selectedAreaBD->Stride - selectedAreaBD->Width * 3;
		int outputByteskip = outputBD->Stride - outputBD->Width * 3;

		Byte* selectedAreaPtr = (Byte*)((void*)selectedAreaBD->Scan0);
		Byte* outputPtr = (Byte*)((void*)outputBD->Scan0);

		for (int y = 0; y < outputBD->Height; y++)
		{
			for (int x = 0; x < outputBD->Width; x++)
			{
				// get origin x and y
				int src_x = x / k;
				int src_y = y / k;

				// ptr = y * stride + x * 3
				Byte* ptr = selectedAreaPtr + src_y * selectedAreaBD->Stride + src_x * 3;

				outputPtr[0] = ptr[0];
				outputPtr[1] = ptr[1];
				outputPtr[2] = ptr[2];

				outputPtr += 3;
			}
			outputPtr += outputByteskip;
		}

		selectedArea->UnlockBits(selectedAreaBD);
		output->UnlockBits(outputBD);
		return output;
	}

	private: Bitmap^ ZoomInImg_withFirstOrder(double k)
	{
		Bitmap^ selectedArea = GetSelectedArea();
		Bitmap^ output = gcnew Bitmap(Math::Abs(endPos_real->X - startPos_real->X) * k
									, Math::Abs(endPos_real->Y - startPos_real->Y) * k
									, selectedArea->PixelFormat);

		BitmapData^ selectedAreaBD = selectedArea->LockBits(Rectangle(0, 0, selectedArea->Width, selectedArea->Height), ImageLockMode::ReadOnly, selectedArea->PixelFormat);
		BitmapData^ outputBD = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

		/* Image maybe have unknown information */
		int selectedAreaByteskip = selectedAreaBD->Stride - selectedAreaBD->Width * 3;
		int outputByteskip = outputBD->Stride - outputBD->Width * 3;

		Byte* selectedAreaPtr = (Byte*)((void*)selectedAreaBD->Scan0);
		Byte* outputPtr = (Byte*)((void*)outputBD->Scan0);

		for (int y = 0; y < outputBD->Height; y++) // scaling with X
		{
			for (int x = 0; x < outputBD->Width; x++)
			{
				// get origin x and y
				int src_x = x / k;
				int src_y = y / k;

				double r = fmod(x, k);

				if ((src_x >= 0) && (src_y >= 0) && // avoid memory out of range
					(src_x < selectedAreaBD->Width - 1) && (src_y < selectedAreaBD->Height))
				{
					// ptr = y * stride + x * 3
					Byte* ptr = selectedAreaPtr + src_x * 3 + src_y * selectedAreaBD->Stride;

					// output = (ptr * (k - r) + (ptr + 1) * r) / k
					outputPtr[0] = (int)((*ptr * (k - r) + *(ptr + 3) * r) / k);
					outputPtr[1] = (int)((*(ptr + 1) * (k - r) + *(ptr + 3 + 1) * r) / k);
					outputPtr[2] = (int)((*(ptr + 2) * (k - r) + *(ptr + 3 + 2) * r) / k);
				}
				else
					outputPtr[0] = outputPtr[1] = outputPtr[2] = 255;

				outputPtr += 3;
			}
			outputPtr += outputByteskip;
		}

		outputPtr = (Byte*)((void*)outputBD->Scan0);
		for (int y = 0; y < outputBD->Height; y++) // scaling with Y
		{
			for (int x = 0; x < outputBD->Width; x++)
			{
				// get origin x and y
				int src_x = x / k;
				int src_y = y / k;

				double r = fmod(y, k);

				if ((src_x >= 0) && (src_y >= 0) && // avoid memory out of range
					(src_x < selectedAreaBD->Width - 1) && (src_y < selectedAreaBD->Height))
				{
					// ptr = y * stride + x * 3
					Byte* ptr = selectedAreaPtr + src_x * 3 + src_y * selectedAreaBD->Stride;

					// output = (ptr * (k - r) + (ptr + 1) * r) / k
					outputPtr[0] = (int)((*ptr * (k - r) + *(ptr + 3) * r) / k);
					outputPtr[1] = (int)((*(ptr + 1) * (k - r) + *(ptr + 3 + 1) * r) / k);
					outputPtr[2] = (int)((*(ptr + 2) * (k - r) + *(ptr + 3 + 2) * r) / k);
				}
				else
					outputPtr[0] = outputPtr[1] = outputPtr[2] = 255; // set to white

				outputPtr += 3;
			}
			outputPtr += outputByteskip;
		}

		selectedArea->UnlockBits(selectedAreaBD);
		output->UnlockBits(outputBD);
		return output;
	}

	private: Bitmap^ ZoomInImg_withBilinearInterpolation(double k)
	{
		Bitmap^ selectedArea = GetSelectedArea();
		Bitmap^ output = gcnew Bitmap(Math::Abs(endPos_real->X - startPos_real->X) * k
									 , Math::Abs(endPos_real->Y - startPos_real->Y) * k
									 , selectedArea->PixelFormat);

		BitmapData^ selectedAreaBD = selectedArea->LockBits(Rectangle(0, 0, selectedArea->Width, selectedArea->Height), ImageLockMode::ReadOnly, selectedArea->PixelFormat);
		BitmapData^ outputBD = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

		/* Image maybe have unknown information */
		int selectedAreaByteskip = selectedAreaBD->Stride - selectedAreaBD->Width * 3;
		int outputByteskip = outputBD->Stride - outputBD->Width * 3;

		Byte* selectedAreaPtr = (Byte*)((void*)selectedAreaBD->Scan0);
		Byte* outputPtr = (Byte*)((void*)outputBD->Scan0);

		for (int y = 0; y < outputBD->Height - 1; y++)
		{
			for (int x = 0; x < outputBD->Width - 1; x++)
			{
				// get origin x and y
				double src_x = (double)x / k;
				double src_y = (double)y / k;
				int isrc_x = src_x;
				int isrc_y = src_y;

				int q_value[4][3]; // record coord's BGR information, the order is Q11(x1, y1), Q12(x1, y2), Q21(x2, y1), Q22(x2, y2)
				for (int q_x = 0; q_x <= 1; q_x++) // X axis, x1 and x2
				{
					for (int q_y = 0; q_y <= 1; q_y++) // Y axis, y1 and y2
					{
						Byte* ptr = selectedAreaPtr + (isrc_x + q_x) * 3 + (isrc_y + q_y) * selectedAreaBD->Stride;
						q_value[q_y * 1 + q_x * 2][0] = ptr[0];
						q_value[q_y * 1 + q_x * 2][1] = ptr[1];
						q_value[q_y * 1 + q_x * 2][2] = ptr[2];
					}
				}

				/* using formula of inner division point (內分點公式) :
				* 
				 *    |        |             |
				 * --Q12-------R2-----------Q22--
				 *    |        |             |
				 *    |        |             |
				 * ------------P-----------------
				 *    |        |             |
				 * --Q11-------R1-----------Q21--
				 *    |        |             |
				 * 
				 * Q11(x1, y1), Q12(x1, y2), Q21(x2, y1), Q22(x2, y2), R1(x, y1), R2(x, y2), P(x, y)
				 * 
				 * R1 = (x2-x)/(x2-x1) * Q11 + (x-x1)/(x2-x1) * Q21
				 * R2 = (x2-x)/(x2-x1) * Q12 + (x-x1)/(x2-x1) * Q22
				 * 
				 * P  = (y2-y)/(y2-y1) * R1  + (y-y1)/(y2-y1) * R2
				 *    = (y2-y)/(y2-y1) * ((x2-x)/(x2-x1) * Q11 + (x-x1)/(x2-x1) * Q21) + (y-y1)/(y2-y1) * ((x2-x)/(x2-x1) * Q12 + )
				 *    = Q11 * (y2-y)/(y2-y1) * (x2-x)/(x2-x1) + Q21 * (x-x1)/(x2-x1) * (y2-y)/(y2-y1)
				 *    + Q12 * (x2-x)/(x2-x1) * (y-y1)/(y2-y1) + Q22 * (x-x1)/(x2-x1) * (y-y1)/(y2-y1)
				 * 
				 * NOTE: We can assume both of x2-x1 and y2-y1 are 1.
				 */

				outputPtr[0] = q_value[0][0] * ((isrc_x + 1) - src_x) * ((isrc_y + 1) - src_y)
							 + q_value[1][0] * ((isrc_x + 1) - src_x) * (src_y - isrc_y)
							 + q_value[2][0] * (src_x - isrc_x) * ((isrc_y + 1) - src_y)
							 + q_value[3][0] * (src_x - isrc_x) * (src_y - isrc_y);

				outputPtr[1] = q_value[0][1] * ((isrc_x + 1) - src_x) * ((isrc_y + 1) - src_y)
							 + q_value[1][1] * ((isrc_x + 1) - src_x) * (src_y - isrc_y)
							 + q_value[2][1] * (src_x - isrc_x) * ((isrc_y + 1) - src_y)
							 + q_value[3][1] * (src_x - isrc_x) * (src_y - isrc_y);

				outputPtr[2] = q_value[0][2] * ((isrc_x + 1) - src_x) * ((isrc_y + 1) - src_y)
							 + q_value[1][2] * ((isrc_x + 1) - src_x) * (src_y - isrc_y)
							 + q_value[2][2] * (src_x - isrc_x) * ((isrc_y + 1) - src_y)
							 + q_value[3][2] * (src_x - isrc_x) * (src_y - isrc_y);

				outputPtr += 3;
			}
			outputPtr[0] = outputPtr[1] = outputPtr[2] = 255; // last column fill white pixel
			outputPtr += 3; // fill last 3 information because x only run to width - 1
			outputPtr += outputByteskip;
		}

		for (int x = 0; x < outputBD->Width; x++) // last row fill white pixel
		{
			outputPtr[0] = outputPtr[1] = outputPtr[2] = 255;
			outputPtr += 3;
		}
		outputPtr += outputByteskip;

		selectedArea->UnlockBits(selectedAreaBD);
		output->UnlockBits(outputBD);
		return output;
	}

	private: System::Void ZoomIn_trackBar_Scroll(System::Object^ sender, System::EventArgs^ e) 
	{
		if (GrayOrigin_pictureBox->Image == nullptr)
			return;

		UpdateAllPictureBox();
	}

	private: void UpdateAllPictureBox()
	{
		double k = zoomIn_or_zoomOut ? 1.0f / Zoom_trackBar->Value : Zoom_trackBar->Value;
		SetAreaSizeLabel(k);

		ZeroOrder_pictureBox->Image = ZoomInImg_withZeroOrder(k);
		FirstOrder_pictureBox->Image = ZoomInImg_withFirstOrder(k);
		Bilinear_pictureBox->Image = ZoomInImg_withBilinearInterpolation(k);
	}
};
}
