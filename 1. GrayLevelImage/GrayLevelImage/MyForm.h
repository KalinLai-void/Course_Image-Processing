#pragma once

namespace GrayLevelImage {

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
	private: System::Windows::Forms::Button^ OpenBtn;
	private: System::Windows::Forms::Button^ TransferBtn_HSI;


	private: System::Windows::Forms::PictureBox^ originImg_pictureBox;
	private: System::Windows::Forms::PictureBox^ outImg_pictureBox;

	protected:

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ TransferBtn_YIQ;
	private: System::Windows::Forms::Button^ TransferBtn_BinImg;

	private:
		// 定義影像類別(點陣圖(.bmp)，無壓縮，資訊較多)
		Bitmap^ origin_img;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->OpenBtn = (gcnew System::Windows::Forms::Button());
			this->TransferBtn_HSI = (gcnew System::Windows::Forms::Button());
			this->originImg_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->outImg_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->TransferBtn_YIQ = (gcnew System::Windows::Forms::Button());
			this->TransferBtn_BinImg = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originImg_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outImg_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// OpenBtn
			// 
			this->OpenBtn->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->OpenBtn->Location = System::Drawing::Point(12, 12);
			this->OpenBtn->Name = L"OpenBtn";
			this->OpenBtn->Size = System::Drawing::Size(98, 29);
			this->OpenBtn->TabIndex = 0;
			this->OpenBtn->Text = L"Open Img";
			this->OpenBtn->UseVisualStyleBackColor = true;
			this->OpenBtn->Click += gcnew System::EventHandler(this, &MyForm::OpenBtn_Click);
			// 
			// TransferBtn_HSI
			// 
			this->TransferBtn_HSI->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->TransferBtn_HSI->Location = System::Drawing::Point(116, 12);
			this->TransferBtn_HSI->Name = L"TransferBtn_HSI";
			this->TransferBtn_HSI->Size = System::Drawing::Size(118, 29);
			this->TransferBtn_HSI->TabIndex = 1;
			this->TransferBtn_HSI->Text = L"Tranfer HSI";
			this->TransferBtn_HSI->UseVisualStyleBackColor = true;
			this->TransferBtn_HSI->Click += gcnew System::EventHandler(this, &MyForm::TransferBtn_HSI_Click);
			// 
			// originImg_pictureBox
			// 
			this->originImg_pictureBox->Location = System::Drawing::Point(12, 47);
			this->originImg_pictureBox->Name = L"originImg_pictureBox";
			this->originImg_pictureBox->Size = System::Drawing::Size(350, 350);
			this->originImg_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->originImg_pictureBox->TabIndex = 2;
			this->originImg_pictureBox->TabStop = false;
			// 
			// outImg_pictureBox
			// 
			this->outImg_pictureBox->Location = System::Drawing::Point(368, 47);
			this->outImg_pictureBox->Name = L"outImg_pictureBox";
			this->outImg_pictureBox->Size = System::Drawing::Size(350, 350);
			this->outImg_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->outImg_pictureBox->TabIndex = 3;
			this->outImg_pictureBox->TabStop = false;
			// 
			// TransferBtn_YIQ
			// 
			this->TransferBtn_YIQ->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->TransferBtn_YIQ->Location = System::Drawing::Point(240, 12);
			this->TransferBtn_YIQ->Name = L"TransferBtn_YIQ";
			this->TransferBtn_YIQ->Size = System::Drawing::Size(121, 29);
			this->TransferBtn_YIQ->TabIndex = 4;
			this->TransferBtn_YIQ->Text = L"Tranfer YIQ";
			this->TransferBtn_YIQ->UseVisualStyleBackColor = true;
			this->TransferBtn_YIQ->Click += gcnew System::EventHandler(this, &MyForm::TransferBtn_YIQ_Click);
			// 
			// TransferBtn_BinImg
			// 
			this->TransferBtn_BinImg->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->TransferBtn_BinImg->Location = System::Drawing::Point(367, 12);
			this->TransferBtn_BinImg->Name = L"TransferBtn_BinImg";
			this->TransferBtn_BinImg->Size = System::Drawing::Size(167, 29);
			this->TransferBtn_BinImg->TabIndex = 5;
			this->TransferBtn_BinImg->Text = L"Tranfer Binary Img";
			this->TransferBtn_BinImg->UseVisualStyleBackColor = true;
			this->TransferBtn_BinImg->Click += gcnew System::EventHandler(this, &MyForm::TransferBtn_BinImg_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 413);
			this->Controls->Add(this->TransferBtn_BinImg);
			this->Controls->Add(this->TransferBtn_YIQ);
			this->Controls->Add(this->outImg_pictureBox);
			this->Controls->Add(this->originImg_pictureBox);
			this->Controls->Add(this->TransferBtn_HSI);
			this->Controls->Add(this->OpenBtn);
			this->Name = L"MyForm";
			this->Text = L"Transfer to Gray Level Image";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originImg_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outImg_pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void OpenBtn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//開啟檔案對話窗 記得「^」
			OpenFileDialog^ ofd = gcnew OpenFileDialog();
			ofd->FileName = "";
			//name|format
			ofd->Filter = "All Files(*.*)|*.*";
			ofd->FilterIndex = 1;
			//對話窗回應OK，或是檔名不為空值，表示有資料了
			//開始讀取影像資訊
			if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
				//讀取影像
				origin_img = gcnew Bitmap(ofd->FileName);
				//顯示origin_img於pictureBox1
				originImg_pictureBox->Image = origin_img;
			}
		}

		private: System::Void TransferBtn_HSI_Click(System::Object^ sender, System::EventArgs^ e)
		{
			//若沒開啟影像，則離開this process
			if (origin_img == nullptr) {
				//return nothing because function System::Void 回傳Void
				return;
			}
			Bitmap^ output = gcnew Bitmap(origin_img->Width, origin_img->Height, origin_img->PixelFormat);
			//BitmapData 需要加入 namespace
			//Lock Memory
			BitmapData^ bd_ori = origin_img->LockBits(Rectangle(0, 0, origin_img->Width, origin_img->Height), ImageLockMode::ReadWrite, origin_img->PixelFormat);
			BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

			//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
			int ori_byteskip = bd_ori->Stride - bd_ori->Width * 3;
			int output_byteskip = bd_output->Stride - bd_output->Width * 3;

			//設定指標再開始的位置
			Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
			Byte* output_ptr = (Byte*)((void*)bd_output->Scan0);

			for (int y = 0; y < bd_ori->Height; y++) {
				for (int x = 0; x < bd_ori->Width; x++) {
					int B = (int)ori_ptr[0];
					int G = (int)ori_ptr[1];
					int R = (int)ori_ptr[2];

					int gray = (R + G + B) / 3; // I image

					//將處理完的結果放回output
					output_ptr[0] = gray;
					output_ptr[1] = gray;
					output_ptr[2] = gray;

					//跳到下一像素
					ori_ptr += 3;
					output_ptr += 3;
				}
				//捨棄非必要資訊
				ori_ptr += ori_byteskip;
				output_ptr += output_byteskip;
			}


			//Unlock Memory 以便顯示
			origin_img->UnlockBits(bd_ori);
			output->UnlockBits(bd_output);
			//顯示output於pictureBox1
			outImg_pictureBox->Image = output;
		}
		private: System::Void TransferBtn_YIQ_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//若沒開啟影像，則離開this process
			if (origin_img == nullptr) {
				//return nothing because function System::Void 回傳Void
				return;
			}
			Bitmap^ output = gcnew Bitmap(origin_img->Width, origin_img->Height, origin_img->PixelFormat);
			//BitmapData 需要加入 namespace
			//Lock Memory
			BitmapData^ bd_ori = origin_img->LockBits(Rectangle(0, 0, origin_img->Width, origin_img->Height), ImageLockMode::ReadWrite, origin_img->PixelFormat);
			BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

			//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
			int ori_byteskip = bd_ori->Stride - bd_ori->Width * 3;
			int output_byteskip = bd_output->Stride - bd_output->Width * 3;

			//設定指標再開始的位置
			Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
			Byte* output_ptr = (Byte*)((void*)bd_output->Scan0);

			for (int y = 0; y < bd_ori->Height; y++) {
				for (int x = 0; x < bd_ori->Width; x++) {
					int B = (int)ori_ptr[0];
					int G = (int)ori_ptr[1];
					int R = (int)ori_ptr[2];

					int gray = R * 0.299 + G * 0.587 + B * 0.114; // Y image

					//將處理完的結果放回output
					output_ptr[0] = gray;
					output_ptr[1] = gray;
					output_ptr[2] = gray;

					//跳到下一像素
					ori_ptr += 3;
					output_ptr += 3;
				}
				//捨棄非必要資訊
				ori_ptr += ori_byteskip;
				output_ptr += output_byteskip;
			}


			//Unlock Memory 以便顯示
			origin_img->UnlockBits(bd_ori);
			output->UnlockBits(bd_output);
			//顯示output於pictureBox1
			outImg_pictureBox->Image = output;
		}
		private: System::Void TransferBtn_BinImg_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			// 若沒開啟影像，則離開this process
				if (origin_img == nullptr) {
					//return nothing because function System::Void 回傳Void
					return;
				}
			Bitmap^ output = gcnew Bitmap(origin_img->Width, origin_img->Height, origin_img->PixelFormat);
			//BitmapData 需要加入 namespace
			//Lock Memory
			BitmapData^ bd_ori = origin_img->LockBits(Rectangle(0, 0, origin_img->Width, origin_img->Height), ImageLockMode::ReadWrite, origin_img->PixelFormat);
			BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

			//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
			int ori_byteskip = bd_ori->Stride - bd_ori->Width * 3;
			int output_byteskip = bd_output->Stride - bd_output->Width * 3;

			//設定指標再開始的位置
			Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
			Byte* output_ptr = (Byte*)((void*)bd_output->Scan0);

			for (int y = 0; y < bd_ori->Height; y++) {
				for (int x = 0; x < bd_ori->Width; x++) {
					int B = (int)ori_ptr[0];
					int G = (int)ori_ptr[1];
					int R = (int)ori_ptr[2];

					int gray = R * 0.299 + G * 0.587 + B * 0.114; // Y image

					unsigned char bin = (gray > 127) ? 255 : 0; // binary image

					//將處理完的結果放回output
					output_ptr[0] = bin;
					output_ptr[1] = bin;
					output_ptr[2] = bin;

					//跳到下一像素
					ori_ptr += 3;
					output_ptr += 3;
				}
				//捨棄非必要資訊
				ori_ptr += ori_byteskip;
				output_ptr += output_byteskip;
			}


			//Unlock Memory 以便顯示
			origin_img->UnlockBits(bd_ori);
			output->UnlockBits(bd_output);
			//顯示output於pictureBox1
			outImg_pictureBox->Image = output;
		}
};
}
