#pragma once

namespace HistogramEqualization {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Histogram
	/// </summary>
	public ref class Histogram : public System::Windows::Forms::Form
	{
	public:
		Histogram(void)
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
		~Histogram()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ HE_chart;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Gray_chart;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	public: // use to draw Histogram
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->HE_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Gray_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HE_chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gray_chart))->BeginInit();
			this->SuspendLayout();
			// 
			// HE_chart
			// 
			this->HE_chart->BackColor = System::Drawing::Color::Transparent;
			this->HE_chart->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea1->AxisY->Title = L"Amount";
			chartArea1->Name = L"HEHistogram";
			this->HE_chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->HE_chart->Legends->Add(legend1);
			this->HE_chart->Location = System::Drawing::Point(401, 3);
			this->HE_chart->Name = L"HE_chart";
			this->HE_chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Chocolate;
			series1->ChartArea = L"HEHistogram";
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Pixel";
			this->HE_chart->Series->Add(series1);
			this->HE_chart->Size = System::Drawing::Size(385, 255);
			this->HE_chart->TabIndex = 18;
			this->HE_chart->Text = L"chart1";
			title1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title1->Name = L"Title1";
			title1->Text = L"HE Image Histogram";
			this->HE_chart->Titles->Add(title1);
			// 
			// Gray_chart
			// 
			this->Gray_chart->BackColor = System::Drawing::Color::Transparent;
			this->Gray_chart->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea2->AxisY->Title = L"Amount";
			chartArea2->Name = L"GrayHistogram";
			this->Gray_chart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->Gray_chart->Legends->Add(legend2);
			this->Gray_chart->Location = System::Drawing::Point(6, 3);
			this->Gray_chart->Name = L"Gray_chart";
			this->Gray_chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Chocolate;
			series2->ChartArea = L"GrayHistogram";
			series2->IsVisibleInLegend = false;
			series2->Legend = L"Legend1";
			series2->Name = L"Pixel";
			this->Gray_chart->Series->Add(series2);
			this->Gray_chart->Size = System::Drawing::Size(385, 255);
			this->Gray_chart->TabIndex = 17;
			this->Gray_chart->Text = L"chart1";
			title2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title2->Name = L"Title1";
			title2->Text = L"Gray-Level Image Histogram";
			this->Gray_chart->Titles->Add(title2);
			// 
			// Histogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 261);
			this->Controls->Add(this->HE_chart);
			this->Controls->Add(this->Gray_chart);
			this->Name = L"Histogram";
			this->Text = L"Histogram";
			this->Load += gcnew System::EventHandler(this, &Histogram::Histogram_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HE_chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Gray_chart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Histogram_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		// clear Histograms
		Gray_chart->Series["Pixel"]->Points->Clear();
		HE_chart->Series["Pixel"]->Points->Clear();

		Gray_chart->ChartAreas["GrayHistogram"]->AxisY->Maximum = histogramMax;
		HE_chart->ChartAreas["HEHistogram"]->AxisY->Maximum = histogramMax_forLocal;

		for (int i = 0; i < 256; i++)
		{
			Gray_chart->Series["Pixel"]->Points->AddXY(i.ToString(), GrayLevelCount[i]); // draw Histogram of Gray-Level Image
			HE_chart->Series["Pixel"]->Points->AddXY(i.ToString(), HELevelCount[i]); // draw Histogram of HE Image
		}
	}
};
}
