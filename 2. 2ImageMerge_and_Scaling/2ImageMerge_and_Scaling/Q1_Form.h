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
	/// Summary for MyForm
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
	private: System::Windows::Forms::Button^ OpenImgBtn1;
	protected:

	protected:
	private: System::Windows::Forms::Button^ TransferBtn;
	private: System::Windows::Forms::PictureBox^ I1_Img_pictureBox;
	private: System::Windows::Forms::PictureBox^ I2_Img_pictureBox;
	private: System::Windows::Forms::PictureBox^ Result_pictureBox;





	private: System::Windows::Forms::ComboBox^ MN_comboBox;
	private: System::Windows::Forms::Label^ Formula_label;
	private: System::Windows::Forms::Label^ I1_label;
	private: System::Windows::Forms::Label^ I2_label;

	private: System::Windows::Forms::Label^ F_label;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ GetFImgBtn;
	private: System::Windows::Forms::PictureBox^ RGB_Img2_pictureBox;
	private: System::Windows::Forms::PictureBox^ RGB_Img1_pictureBox;
	private: System::Windows::Forms::Button^ OpenImgBtn2;
	private: System::Windows::Forms::Button^ ClrImgBtn;





	private:
		Bitmap^ rgb_img1;
		Bitmap^ rgb_img2;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->OpenImgBtn1 = (gcnew System::Windows::Forms::Button());
			this->TransferBtn = (gcnew System::Windows::Forms::Button());
			this->I1_Img_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->I2_Img_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Result_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->MN_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Formula_label = (gcnew System::Windows::Forms::Label());
			this->I1_label = (gcnew System::Windows::Forms::Label());
			this->I2_label = (gcnew System::Windows::Forms::Label());
			this->F_label = (gcnew System::Windows::Forms::Label());
			this->GetFImgBtn = (gcnew System::Windows::Forms::Button());
			this->RGB_Img2_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->RGB_Img1_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->OpenImgBtn2 = (gcnew System::Windows::Forms::Button());
			this->ClrImgBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I1_Img_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I2_Img_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RGB_Img2_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RGB_Img1_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// OpenImgBtn1
			// 
			this->OpenImgBtn1->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->OpenImgBtn1->Location = System::Drawing::Point(700, 12);
			this->OpenImgBtn1->Name = L"OpenImgBtn1";
			this->OpenImgBtn1->Size = System::Drawing::Size(338, 42);
			this->OpenImgBtn1->TabIndex = 0;
			this->OpenImgBtn1->Text = L"Open Img1";
			this->OpenImgBtn1->UseVisualStyleBackColor = true;
			this->OpenImgBtn1->Click += gcnew System::EventHandler(this, &Q1_Form::OpenImgBtn_Click);
			// 
			// TransferBtn
			// 
			this->TransferBtn->Enabled = false;
			this->TransferBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->TransferBtn->Location = System::Drawing::Point(700, 108);
			this->TransferBtn->Name = L"TransferBtn";
			this->TransferBtn->Size = System::Drawing::Size(338, 42);
			this->TransferBtn->TabIndex = 1;
			this->TransferBtn->Text = L"Transfer HSI";
			this->TransferBtn->UseVisualStyleBackColor = true;
			this->TransferBtn->Click += gcnew System::EventHandler(this, &Q1_Form::TransferBtn_Click);
			// 
			// I1_Img_pictureBox
			// 
			this->I1_Img_pictureBox->Location = System::Drawing::Point(12, 302);
			this->I1_Img_pictureBox->Name = L"I1_Img_pictureBox";
			this->I1_Img_pictureBox->Size = System::Drawing::Size(338, 284);
			this->I1_Img_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I1_Img_pictureBox->TabIndex = 2;
			this->I1_Img_pictureBox->TabStop = false;
			// 
			// I2_Img_pictureBox
			// 
			this->I2_Img_pictureBox->Location = System::Drawing::Point(356, 302);
			this->I2_Img_pictureBox->Name = L"I2_Img_pictureBox";
			this->I2_Img_pictureBox->Size = System::Drawing::Size(338, 284);
			this->I2_Img_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I2_Img_pictureBox->TabIndex = 3;
			this->I2_Img_pictureBox->TabStop = false;
			// 
			// Result_pictureBox
			// 
			this->Result_pictureBox->Location = System::Drawing::Point(700, 303);
			this->Result_pictureBox->Name = L"Result_pictureBox";
			this->Result_pictureBox->Size = System::Drawing::Size(338, 284);
			this->Result_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Result_pictureBox->TabIndex = 4;
			this->Result_pictureBox->TabStop = false;
			// 
			// MN_comboBox
			// 
			this->MN_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->MN_comboBox->Enabled = false;
			this->MN_comboBox->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->MN_comboBox->FormattingEnabled = true;
			this->MN_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"m=0.1, n=0.9", L"m=0.2, n=0.8", L"m=0.3, n=0.7",
					L"m=0.4, n=0.6", L"m=0.5, n=0.5", L"m=0.6, n=0.4", L"m=0.7, n=0.3", L"m=0.8, n=0.2", L"m=0.9, n=0.1"
			});
			this->MN_comboBox->Location = System::Drawing::Point(843, 218);
			this->MN_comboBox->Name = L"MN_comboBox";
			this->MN_comboBox->Size = System::Drawing::Size(130, 27);
			this->MN_comboBox->TabIndex = 5;
			// 
			// Formula_label
			// 
			this->Formula_label->AutoSize = true;
			this->Formula_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 16));
			this->Formula_label->Location = System::Drawing::Point(708, 223);
			this->Formula_label->Name = L"Formula_label";
			this->Formula_label->Size = System::Drawing::Size(129, 22);
			this->Formula_label->TabIndex = 6;
			this->Formula_label->Text = L"F = mI1 + nI2";
			// 
			// I1_label
			// 
			this->I1_label->AutoSize = true;
			this->I1_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14));
			this->I1_label->Location = System::Drawing::Point(125, 589);
			this->I1_label->Name = L"I1_label";
			this->I1_label->Size = System::Drawing::Size(79, 19);
			this->I1_label->TabIndex = 7;
			this->I1_label->Text = L" I1 Image\r\n";
			this->I1_label->Visible = false;
			// 
			// I2_label
			// 
			this->I2_label->AutoSize = true;
			this->I2_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14));
			this->I2_label->Location = System::Drawing::Point(484, 589);
			this->I2_label->Name = L"I2_label";
			this->I2_label->Size = System::Drawing::Size(74, 19);
			this->I2_label->TabIndex = 8;
			this->I2_label->Text = L"I2 Image";
			this->I2_label->Visible = false;
			// 
			// F_label
			// 
			this->F_label->AutoSize = true;
			this->F_label->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14));
			this->F_label->Location = System::Drawing::Point(826, 590);
			this->F_label->Name = L"F_label";
			this->F_label->Size = System::Drawing::Size(69, 19);
			this->F_label->TabIndex = 9;
			this->F_label->Text = L"F Image";
			this->F_label->Visible = false;
			// 
			// GetFImgBtn
			// 
			this->GetFImgBtn->Enabled = false;
			this->GetFImgBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->GetFImgBtn->Location = System::Drawing::Point(700, 251);
			this->GetFImgBtn->Name = L"GetFImgBtn";
			this->GetFImgBtn->Size = System::Drawing::Size(338, 45);
			this->GetFImgBtn->TabIndex = 10;
			this->GetFImgBtn->Text = L"Get F Img";
			this->GetFImgBtn->UseVisualStyleBackColor = true;
			this->GetFImgBtn->Click += gcnew System::EventHandler(this, &Q1_Form::GetFImgBtn_Click);
			// 
			// RGB_Img2_pictureBox
			// 
			this->RGB_Img2_pictureBox->Location = System::Drawing::Point(356, 12);
			this->RGB_Img2_pictureBox->Name = L"RGB_Img2_pictureBox";
			this->RGB_Img2_pictureBox->Size = System::Drawing::Size(338, 284);
			this->RGB_Img2_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->RGB_Img2_pictureBox->TabIndex = 12;
			this->RGB_Img2_pictureBox->TabStop = false;
			// 
			// RGB_Img1_pictureBox
			// 
			this->RGB_Img1_pictureBox->Location = System::Drawing::Point(12, 12);
			this->RGB_Img1_pictureBox->Name = L"RGB_Img1_pictureBox";
			this->RGB_Img1_pictureBox->Size = System::Drawing::Size(338, 284);
			this->RGB_Img1_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->RGB_Img1_pictureBox->TabIndex = 11;
			this->RGB_Img1_pictureBox->TabStop = false;
			// 
			// OpenImgBtn2
			// 
			this->OpenImgBtn2->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->OpenImgBtn2->Location = System::Drawing::Point(700, 60);
			this->OpenImgBtn2->Name = L"OpenImgBtn2";
			this->OpenImgBtn2->Size = System::Drawing::Size(338, 42);
			this->OpenImgBtn2->TabIndex = 13;
			this->OpenImgBtn2->Text = L"Open Img2";
			this->OpenImgBtn2->UseVisualStyleBackColor = true;
			this->OpenImgBtn2->Click += gcnew System::EventHandler(this, &Q1_Form::OpenImgBtn_Click);
			// 
			// ClrImgBtn
			// 
			this->ClrImgBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ClrImgBtn->Location = System::Drawing::Point(700, 156);
			this->ClrImgBtn->Name = L"ClrImgBtn";
			this->ClrImgBtn->Size = System::Drawing::Size(338, 42);
			this->ClrImgBtn->TabIndex = 14;
			this->ClrImgBtn->Text = L"Clear All Image";
			this->ClrImgBtn->UseVisualStyleBackColor = true;
			this->ClrImgBtn->Click += gcnew System::EventHandler(this, &Q1_Form::ClrImgBtn_Click);
			// 
			// Q1_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 618);
			this->Controls->Add(this->ClrImgBtn);
			this->Controls->Add(this->OpenImgBtn2);
			this->Controls->Add(this->TransferBtn);
			this->Controls->Add(this->OpenImgBtn1);
			this->Controls->Add(this->RGB_Img2_pictureBox);
			this->Controls->Add(this->RGB_Img1_pictureBox);
			this->Controls->Add(this->GetFImgBtn);
			this->Controls->Add(this->F_label);
			this->Controls->Add(this->I2_label);
			this->Controls->Add(this->I1_label);
			this->Controls->Add(this->Formula_label);
			this->Controls->Add(this->MN_comboBox);
			this->Controls->Add(this->Result_pictureBox);
			this->Controls->Add(this->I2_Img_pictureBox);
			this->Controls->Add(this->I1_Img_pictureBox);
			this->Name = L"Q1_Form";
			this->Text = L"Question 1 - Merge two I image of HSI with m and n.";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I1_Img_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I2_Img_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RGB_Img2_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RGB_Img1_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OpenImgBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->FileName = "";
		ofd->Filter = "All Files(*.*) | *.*";
		ofd->FilterIndex = 1;

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "")
		{
			int num = 0; // img num
			if ((Button^)sender == OpenImgBtn1)
			{
				rgb_img1 = gcnew Bitmap(ofd->FileName);
				RGB_Img1_pictureBox->Image = rgb_img1;
				num = 1;
			}
			else if ((Button^)sender == OpenImgBtn2)
			{
				rgb_img2 = gcnew Bitmap(ofd->FileName);
				RGB_Img2_pictureBox->Image = rgb_img2;
				num = 2;
			}

			if (rgb_img1 != nullptr && rgb_img2 != nullptr)
			{
				TransferBtn->Enabled = true;
			}

			/* Reset I image's picture box */
			((PictureBox^)this->Controls["I" + num + "_Img_pictureBox"])->Image = nullptr;
			((Label^)this->Controls["I" + num + "_label"])->Visible = false;

			MN_comboBox->Enabled = false;
			GetFImgBtn->Enabled = false;

			/* Reset result image picture box */
			Result_pictureBox->Image = nullptr;
			F_label->Visible = false;
		}
	}

	private: Bitmap^ Transfer(Bitmap^ rgb_img)
	{
		Bitmap^ gray_img = gcnew Bitmap(rgb_img->Width, rgb_img->Height, rgb_img->PixelFormat);

		BitmapData^ bd_rgb = rgb_img->LockBits(Rectangle(0, 0, rgb_img->Width, rgb_img->Height), ImageLockMode::ReadOnly, rgb_img->PixelFormat);
		BitmapData^ bd_gray = gray_img->LockBits(Rectangle(0, 0, gray_img->Width, gray_img->Height), ImageLockMode::ReadWrite, gray_img->PixelFormat);

		/* Image maybe have unknown information */
		int rgb_byteskip = bd_rgb->Stride - bd_rgb->Width * 3;
		int gray_byteskip = bd_gray->Stride - bd_gray->Width * 3;

		Byte* rgb_ptr = (Byte*)((void*)bd_rgb->Scan0);
		Byte* gray_ptr = (Byte*)((void*)bd_gray->Scan0);

		for (int y = 0; y < bd_rgb->Height; y++)
		{
			for (int x = 0; x < bd_rgb->Width; x++)
			{
				int pixel = ((int)rgb_ptr[0] + (int)rgb_ptr[1] + (int)rgb_ptr[2]) / 3; // I image
				
				gray_ptr[0] = gray_ptr[1] = gray_ptr[2] = pixel;

				// jump to next pixel
				rgb_ptr += 3;
				gray_ptr += 3;
			}
			// throw unknown inforamtion away
			rgb_ptr += rgb_byteskip;
			gray_ptr += gray_byteskip;
		}

		rgb_img->UnlockBits(bd_rgb);
		gray_img->UnlockBits(bd_gray);
		return gray_img;
	}

	private: System::Void TransferBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (rgb_img1 == nullptr || rgb_img2 == nullptr) // if any img is null, then end.
		{
			return;
		}

		I1_Img_pictureBox->Image = Transfer(rgb_img1);
		I2_Img_pictureBox->Image = Transfer(rgb_img2);

		I1_label->Visible = true;
		I2_label->Visible = true;
		MN_comboBox->Enabled = true;
		GetFImgBtn->Enabled = true;
	}

	private: System::Void GetFImgBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		float m; // n = 1 - m

		switch (MN_comboBox->SelectedIndex)
		{
			case 0: m = 0.1; break;
			case 1: m = 0.2; break;
			case 2: m = 0.3; break;
			case 3: m = 0.4; break;
			case 4: m = 0.5; break;
			case 5: m = 0.6; break;
			case 6: m = 0.7; break;
			case 7: m = 0.8; break;
			case 8: m = 0.9; break;
			default: return; // if haven't select
		}

		Bitmap^ I1_img = (Bitmap^)I1_Img_pictureBox->Image;
		Bitmap^ I2_img = (Bitmap^)I2_Img_pictureBox->Image;
		Bitmap^ result_img = gcnew Bitmap(I1_img->Width, I1_img->Height, I1_img->PixelFormat);

		BitmapData^ bd_I1 = I1_img->LockBits(Rectangle(0, 0, I1_img->Width, I1_img->Height), ImageLockMode::ReadOnly, I1_img->PixelFormat);
		BitmapData^ bd_I2 = I2_img->LockBits(Rectangle(0, 0, I2_img->Width, I2_img->Height), ImageLockMode::ReadOnly, I2_img->PixelFormat);
		BitmapData^ bd_result = result_img->LockBits(Rectangle(0, 0, result_img->Width, result_img->Height), ImageLockMode::ReadWrite, result_img->PixelFormat);

		/* Image maybe have unknown information */
		int I1_byteskip = bd_I1->Stride - bd_I1->Width * 3;
		int I2_byteskip = bd_I2->Stride - bd_I2->Width * 3;
		int result_byteskip = bd_result->Stride - bd_result->Width * 3;

		Byte* I1_ptr = (Byte*)((void*)bd_I1->Scan0);
		Byte* I2_ptr = (Byte*)((void*)bd_I2->Scan0);
		Byte* result_ptr = (Byte*)((void*)bd_result->Scan0);

		for (int y = 0; y < bd_I1->Height; y++)
		{
			for (int x = 0; x < bd_I1->Width; x++)
			{
				// F = mI1 + nI2
				result_ptr[0] = m * (int)I1_ptr[0] + (1.f - m) * (int)I2_ptr[0];
				result_ptr[1] = m * (int)I1_ptr[1] + (1.f - m) * (int)I2_ptr[1];
				result_ptr[2] = m * (int)I1_ptr[2] + (1.f - m) * (int)I2_ptr[2];

				// jump to next pixel
				I1_ptr += 3;
				I2_ptr += 3;
				result_ptr += 3;
			}
			// throw unknown inforamtion away
			I1_ptr += I1_byteskip;
			I2_ptr += I2_byteskip;
			result_ptr += result_byteskip;
		}

		I1_img->UnlockBits(bd_I1);
		I2_img->UnlockBits(bd_I2);
		result_img->UnlockBits(bd_result);

		Result_pictureBox->Image = result_img;
		F_label->Visible = true;
	}
	private: System::Void ClrImgBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 1; i <= 2; i++)
		{
			((PictureBox^)this->Controls["RGB_Img" + i + "_pictureBox"])->Image = nullptr;
			((PictureBox^)this->Controls["I" + i + "_Img_pictureBox"])->Image = nullptr;
			((Label^)this->Controls["I" + i + "_label"])->Visible = false;
		}

		TransferBtn->Enabled = false;
		MN_comboBox->Enabled = false;
		GetFImgBtn->Enabled = false;

		Result_pictureBox->Image = nullptr;
		F_label->Visible = false;
	}
};
}
