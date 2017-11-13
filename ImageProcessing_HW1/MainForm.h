#pragma once
#include "stdafx.h"
namespace ImageProcessing_HW1 {



	/// <summary>
	/// MainForm 的摘要
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PropertyGrid^  operation_property;
	protected:

	private: System::Windows::Forms::ListBox^  queued_items;


	private: System::Windows::Forms::ListBox^  availble_items;

	private: System::Windows::Forms::PictureBox^  originpicture;
	private: System::Windows::Forms::Button^  button_open;







	private: System::Windows::Forms::OpenFileDialog^  openimage;
	private: System::Windows::Forms::PictureBox^  result1;
	private: System::Windows::Forms::PictureBox^  result2;
	private: System::Windows::Forms::PictureBox^  result3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartorigin;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartresult;
	private: System::Windows::Forms::Button^  button_run;
	private: System::Windows::Forms::Button^  button_add;
	private: System::Windows::Forms::Button^  buttom_up;
	private: System::Windows::Forms::Button^  button_down;
	private: System::Windows::Forms::Button^  button_remove;
	private: System::Windows::Forms::Button^  button_save;


	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::SaveFileDialog^  saveimage;








	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::GroupBox^  groupBox2;
			System::Windows::Forms::GroupBox^  groupBox3;
			System::Windows::Forms::GroupBox^  groupBox4;
			System::Windows::Forms::GroupBox^  groupBox5;
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::GroupBox^  groupBox6;
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::GroupBox^  groupBox1;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
			System::Windows::Forms::GroupBox^  groupBox7;
			System::Windows::Forms::Panel^  panel1;
			this->availble_items = (gcnew System::Windows::Forms::ListBox());
			this->originpicture = (gcnew System::Windows::Forms::PictureBox());
			this->result1 = (gcnew System::Windows::Forms::PictureBox());
			this->chartorigin = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->result2 = (gcnew System::Windows::Forms::PictureBox());
			this->chartresult = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->result3 = (gcnew System::Windows::Forms::PictureBox());
			this->queued_items = (gcnew System::Windows::Forms::ListBox());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button_remove = (gcnew System::Windows::Forms::Button());
			this->button_down = (gcnew System::Windows::Forms::Button());
			this->buttom_up = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_run = (gcnew System::Windows::Forms::Button());
			this->button_open = (gcnew System::Windows::Forms::Button());
			this->operation_property = (gcnew System::Windows::Forms::PropertyGrid());
			this->openimage = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveimage = (gcnew System::Windows::Forms::SaveFileDialog());
			groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			panel1 = (gcnew System::Windows::Forms::Panel());
			groupBox2->SuspendLayout();
			groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originpicture))->BeginInit();
			groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->result1))->BeginInit();
			groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartorigin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->result2))->BeginInit();
			groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartresult))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->result3))->BeginInit();
			groupBox1->SuspendLayout();
			tableLayoutPanel1->SuspendLayout();
			tableLayoutPanel2->SuspendLayout();
			tableLayoutPanel3->SuspendLayout();
			tableLayoutPanel4->SuspendLayout();
			groupBox7->SuspendLayout();
			panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			groupBox2->BackColor = System::Drawing::SystemColors::Control;
			groupBox2->Controls->Add(this->availble_items);
			groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox2->Location = System::Drawing::Point(3, 3);
			groupBox2->Name = L"groupBox2";
			groupBox2->Size = System::Drawing::Size(210, 222);
			groupBox2->TabIndex = 4;
			groupBox2->TabStop = false;
			groupBox2->Text = L"可使用動作";
			// 
			// availble_items
			// 
			this->availble_items->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->availble_items->Dock = System::Windows::Forms::DockStyle::Fill;
			this->availble_items->FormattingEnabled = true;
			this->availble_items->ItemHeight = 15;
			this->availble_items->Location = System::Drawing::Point(3, 21);
			this->availble_items->Name = L"availble_items";
			this->availble_items->Size = System::Drawing::Size(204, 198);
			this->availble_items->TabIndex = 2;
			// 
			// groupBox3
			// 
			groupBox3->Controls->Add(this->originpicture);
			groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox3->Location = System::Drawing::Point(3, 3);
			groupBox3->Name = L"groupBox3";
			groupBox3->Size = System::Drawing::Size(554, 384);
			groupBox3->TabIndex = 0;
			groupBox3->TabStop = false;
			groupBox3->Text = L"原始圖片";
			// 
			// originpicture
			// 
			this->originpicture->Dock = System::Windows::Forms::DockStyle::Fill;
			this->originpicture->Location = System::Drawing::Point(3, 21);
			this->originpicture->Name = L"originpicture";
			this->originpicture->Size = System::Drawing::Size(548, 360);
			this->originpicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->originpicture->TabIndex = 0;
			this->originpicture->TabStop = false;
			// 
			// groupBox4
			// 
			groupBox4->Controls->Add(this->result1);
			groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox4->Location = System::Drawing::Point(563, 3);
			groupBox4->Name = L"groupBox4";
			groupBox4->Size = System::Drawing::Size(555, 384);
			groupBox4->TabIndex = 1;
			groupBox4->TabStop = false;
			groupBox4->Text = L"結果1";
			// 
			// result1
			// 
			this->result1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->result1->Location = System::Drawing::Point(3, 21);
			this->result1->Name = L"result1";
			this->result1->Size = System::Drawing::Size(549, 360);
			this->result1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->result1->TabIndex = 1;
			this->result1->TabStop = false;
			// 
			// groupBox5
			// 
			groupBox5->Controls->Add(this->chartorigin);
			groupBox5->Controls->Add(this->result2);
			groupBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox5->Location = System::Drawing::Point(3, 393);
			groupBox5->Name = L"groupBox5";
			groupBox5->Size = System::Drawing::Size(554, 384);
			groupBox5->TabIndex = 2;
			groupBox5->TabStop = false;
			groupBox5->Text = L"結果2";
			// 
			// chartorigin
			// 
			chartArea3->AxisX->IsMarginVisible = false;
			chartArea3->AxisX->LabelStyle->Enabled = false;
			chartArea3->AxisX->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea3->AxisX->LineWidth = 0;
			chartArea3->AxisX->MajorGrid->Enabled = false;
			chartArea3->AxisX->MajorTickMark->Enabled = false;
			chartArea3->AxisX->Maximum = 255;
			chartArea3->AxisX->Minimum = 0;
			chartArea3->AxisX2->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea3->AxisX2->LineWidth = 0;
			chartArea3->AxisY->LabelStyle->Enabled = false;
			chartArea3->AxisY->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			chartArea3->AxisY->LineWidth = 0;
			chartArea3->AxisY->MajorGrid->Enabled = false;
			chartArea3->AxisY->MajorTickMark->Enabled = false;
			chartArea3->AxisY2->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea3->AxisY2->LineWidth = 0;
			chartArea3->Name = L"ChartArea1";
			this->chartorigin->ChartAreas->Add(chartArea3);
			this->chartorigin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chartorigin->Location = System::Drawing::Point(3, 21);
			this->chartorigin->Name = L"chartorigin";
			this->chartorigin->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chartorigin->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(1) { System::Drawing::Color::Black };
			series3->ChartArea = L"ChartArea1";
			series3->CustomProperties = L"EmptyPointValue=Zero, PointWidth=1";
			series3->Name = L"Series1";
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series3->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chartorigin->Series->Add(series3);
			this->chartorigin->Size = System::Drawing::Size(548, 360);
			this->chartorigin->TabIndex = 1;
			this->chartorigin->Text = L"originchart";
			this->chartorigin->Visible = false;
			// 
			// result2
			// 
			this->result2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->result2->Location = System::Drawing::Point(3, 21);
			this->result2->Name = L"result2";
			this->result2->Size = System::Drawing::Size(548, 360);
			this->result2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->result2->TabIndex = 2;
			this->result2->TabStop = false;
			// 
			// groupBox6
			// 
			groupBox6->Controls->Add(this->chartresult);
			groupBox6->Controls->Add(this->result3);
			groupBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox6->Location = System::Drawing::Point(563, 393);
			groupBox6->Name = L"groupBox6";
			groupBox6->Size = System::Drawing::Size(555, 384);
			groupBox6->TabIndex = 3;
			groupBox6->TabStop = false;
			groupBox6->Text = L"結果3";
			// 
			// chartresult
			// 
			chartArea4->AxisX->IsMarginVisible = false;
			chartArea4->AxisX->LabelStyle->Enabled = false;
			chartArea4->AxisX->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea4->AxisX->LineWidth = 0;
			chartArea4->AxisX->MajorGrid->Enabled = false;
			chartArea4->AxisX->MajorTickMark->Enabled = false;
			chartArea4->AxisX->Maximum = 255;
			chartArea4->AxisX->Minimum = 0;
			chartArea4->AxisX2->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea4->AxisX2->LineWidth = 0;
			chartArea4->AxisY->LabelStyle->Enabled = false;
			chartArea4->AxisY->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			chartArea4->AxisY->LineWidth = 0;
			chartArea4->AxisY->MajorGrid->Enabled = false;
			chartArea4->AxisY->MajorTickMark->Enabled = false;
			chartArea4->AxisY2->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea4->AxisY2->LineWidth = 0;
			chartArea4->Name = L"ChartArea1";
			this->chartresult->ChartAreas->Add(chartArea4);
			this->chartresult->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chartresult->Location = System::Drawing::Point(3, 21);
			this->chartresult->Name = L"chartresult";
			this->chartresult->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chartresult->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(1) { System::Drawing::Color::Black };
			series4->ChartArea = L"ChartArea1";
			series4->CustomProperties = L"EmptyPointValue=Zero, PointWidth=1";
			series4->Name = L"Series1";
			series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series4->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chartresult->Series->Add(series4);
			this->chartresult->Size = System::Drawing::Size(549, 360);
			this->chartresult->TabIndex = 3;
			this->chartresult->Text = L"originchart";
			this->chartresult->Visible = false;
			// 
			// result3
			// 
			this->result3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->result3->Location = System::Drawing::Point(3, 21);
			this->result3->Name = L"result3";
			this->result3->Size = System::Drawing::Size(549, 360);
			this->result3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->result3->TabIndex = 3;
			this->result3->TabStop = false;
			// 
			// groupBox1
			// 
			groupBox1->Controls->Add(this->queued_items);
			groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox1->Location = System::Drawing::Point(3, 3);
			groupBox1->Name = L"groupBox1";
			groupBox1->Size = System::Drawing::Size(216, 456);
			groupBox1->TabIndex = 3;
			groupBox1->TabStop = false;
			groupBox1->Text = L"隊列中動作";
			// 
			// queued_items
			// 
			this->queued_items->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->queued_items->Dock = System::Windows::Forms::DockStyle::Fill;
			this->queued_items->FormattingEnabled = true;
			this->queued_items->ItemHeight = 15;
			this->queued_items->Location = System::Drawing::Point(3, 21);
			this->queued_items->Name = L"queued_items";
			this->queued_items->Size = System::Drawing::Size(210, 432);
			this->queued_items->TabIndex = 2;
			this->queued_items->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::queued_items_SelectedIndexChanged);
			// 
			// tableLayoutPanel1
			// 
			tableLayoutPanel1->ColumnCount = 2;
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel1->Controls->Add(groupBox4, 1, 0);
			tableLayoutPanel1->Controls->Add(groupBox6, 1, 1);
			tableLayoutPanel1->Controls->Add(groupBox5, 0, 1);
			tableLayoutPanel1->Controls->Add(groupBox3, 0, 0);
			tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			tableLayoutPanel1->Location = System::Drawing::Point(450, 0);
			tableLayoutPanel1->Name = L"tableLayoutPanel1";
			tableLayoutPanel1->RowCount = 2;
			tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			tableLayoutPanel1->Size = System::Drawing::Size(1121, 780);
			tableLayoutPanel1->TabIndex = 5;
			// 
			// tableLayoutPanel2
			// 
			tableLayoutPanel2->ColumnCount = 1;
			tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			tableLayoutPanel2->Controls->Add(tableLayoutPanel3, 0, 0);
			tableLayoutPanel2->Controls->Add(this->operation_property, 0, 1);
			tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Left;
			tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			tableLayoutPanel2->Name = L"tableLayoutPanel2";
			tableLayoutPanel2->RowCount = 2;
			tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40)));
			tableLayoutPanel2->Size = System::Drawing::Size(450, 780);
			tableLayoutPanel2->TabIndex = 6;
			// 
			// tableLayoutPanel3
			// 
			tableLayoutPanel3->ColumnCount = 2;
			tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel3->Controls->Add(groupBox1, 0, 0);
			tableLayoutPanel3->Controls->Add(tableLayoutPanel4, 1, 0);
			tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			tableLayoutPanel3->Name = L"tableLayoutPanel3";
			tableLayoutPanel3->RowCount = 1;
			tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel3->Size = System::Drawing::Size(444, 462);
			tableLayoutPanel3->TabIndex = 7;
			// 
			// tableLayoutPanel4
			// 
			tableLayoutPanel4->ColumnCount = 1;
			tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel4->Controls->Add(groupBox2, 0, 0);
			tableLayoutPanel4->Controls->Add(groupBox7, 0, 1);
			tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			tableLayoutPanel4->Location = System::Drawing::Point(225, 3);
			tableLayoutPanel4->Name = L"tableLayoutPanel4";
			tableLayoutPanel4->RowCount = 2;
			tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel4->Size = System::Drawing::Size(216, 456);
			tableLayoutPanel4->TabIndex = 7;
			// 
			// groupBox7
			// 
			groupBox7->Controls->Add(this->button_save);
			groupBox7->Controls->Add(panel1);
			groupBox7->Controls->Add(this->button_remove);
			groupBox7->Controls->Add(this->button_down);
			groupBox7->Controls->Add(this->buttom_up);
			groupBox7->Controls->Add(this->button_add);
			groupBox7->Controls->Add(this->button_run);
			groupBox7->Controls->Add(this->button_open);
			groupBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox7->Location = System::Drawing::Point(3, 231);
			groupBox7->Name = L"groupBox7";
			groupBox7->Size = System::Drawing::Size(210, 222);
			groupBox7->TabIndex = 5;
			groupBox7->TabStop = false;
			groupBox7->Text = L"控制面板";
			// 
			// button_save
			// 
			this->button_save->Location = System::Drawing::Point(129, 112);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(75, 23);
			this->button_save->TabIndex = 7;
			this->button_save->Text = L"儲存檔案";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &MainForm::button_save_Click);
			// 
			// panel1
			// 
			panel1->AutoSize = true;
			panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			panel1->Controls->Add(this->radioButton3);
			panel1->Controls->Add(this->radioButton2);
			panel1->Controls->Add(this->radioButton1);
			panel1->Location = System::Drawing::Point(103, 141);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(101, 75);
			panel1->TabIndex = 6;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Enabled = false;
			this->radioButton3->Location = System::Drawing::Point(3, 53);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(95, 19);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"儲存結果3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Location = System::Drawing::Point(3, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(95, 19);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"儲存結果2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->Location = System::Drawing::Point(3, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 19);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"儲存結果1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button_remove
			// 
			this->button_remove->Location = System::Drawing::Point(6, 82);
			this->button_remove->Name = L"button_remove";
			this->button_remove->Size = System::Drawing::Size(75, 23);
			this->button_remove->TabIndex = 5;
			this->button_remove->Text = L"移除所選";
			this->button_remove->UseVisualStyleBackColor = true;
			this->button_remove->Click += gcnew System::EventHandler(this, &MainForm::button_remove_Click);
			// 
			// button_down
			// 
			this->button_down->Location = System::Drawing::Point(6, 53);
			this->button_down->Name = L"button_down";
			this->button_down->Size = System::Drawing::Size(75, 23);
			this->button_down->TabIndex = 4;
			this->button_down->Text = L"向後移動";
			this->button_down->UseVisualStyleBackColor = true;
			this->button_down->Click += gcnew System::EventHandler(this, &MainForm::button_down_Click);
			// 
			// buttom_up
			// 
			this->buttom_up->Location = System::Drawing::Point(6, 24);
			this->buttom_up->Name = L"buttom_up";
			this->buttom_up->Size = System::Drawing::Size(75, 23);
			this->buttom_up->TabIndex = 3;
			this->buttom_up->Text = L"向前移動";
			this->buttom_up->UseVisualStyleBackColor = true;
			this->buttom_up->Click += gcnew System::EventHandler(this, &MainForm::buttom_up_Click);
			// 
			// button_add
			// 
			this->button_add->Location = System::Drawing::Point(129, 24);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(75, 23);
			this->button_add->TabIndex = 2;
			this->button_add->Text = L"新增動作";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MainForm::button_add_Click);
			// 
			// button_run
			// 
			this->button_run->Enabled = false;
			this->button_run->Location = System::Drawing::Point(6, 193);
			this->button_run->Name = L"button_run";
			this->button_run->Size = System::Drawing::Size(75, 23);
			this->button_run->TabIndex = 1;
			this->button_run->Text = L"執行";
			this->button_run->UseVisualStyleBackColor = true;
			this->button_run->Click += gcnew System::EventHandler(this, &MainForm::button_run_Click);
			// 
			// button_open
			// 
			this->button_open->Location = System::Drawing::Point(6, 164);
			this->button_open->Name = L"button_open";
			this->button_open->Size = System::Drawing::Size(75, 23);
			this->button_open->TabIndex = 0;
			this->button_open->Text = L"開啟檔案";
			this->button_open->UseVisualStyleBackColor = true;
			this->button_open->Click += gcnew System::EventHandler(this, &MainForm::button_open_Click);
			// 
			// operation_property
			// 
			this->operation_property->Dock = System::Windows::Forms::DockStyle::Fill;
			this->operation_property->Location = System::Drawing::Point(3, 471);
			this->operation_property->Name = L"operation_property";
			this->operation_property->Size = System::Drawing::Size(444, 306);
			this->operation_property->TabIndex = 0;
			// 
			// openimage
			// 
			this->openimage->Filter = L"Image Files(*.BMP,*.JPG,*.GIF,*.PNG)|*.bmp;*.jpg;*.gif;*.png";
			this->openimage->Title = L"載入圖片";
			// 
			// saveimage
			// 
			this->saveimage->DefaultExt = L"bmp";
			this->saveimage->Filter = L"Png Files(*.PNG)|*.png";
			this->saveimage->Title = L"儲存圖片";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1571, 780);
			this->Controls->Add(tableLayoutPanel1);
			this->Controls->Add(tableLayoutPanel2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			groupBox2->ResumeLayout(false);
			groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originpicture))->EndInit();
			groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->result1))->EndInit();
			groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartorigin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->result2))->EndInit();
			groupBox6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartresult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->result3))->EndInit();
			groupBox1->ResumeLayout(false);
			tableLayoutPanel1->ResumeLayout(false);
			tableLayoutPanel2->ResumeLayout(false);
			tableLayoutPanel3->ResumeLayout(false);
			tableLayoutPanel4->ResumeLayout(false);
			groupBox7->ResumeLayout(false);
			groupBox7->PerformLayout();
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: static array<Operation^>^ available_operations = gcnew array<Operation^>{ gcnew ColorExtraction(), gcnew ColorTransformation(), gcnew SmoothFilter(), gcnew HistogramEqualization(), gcnew Thresholding(), gcnew SobelEdgeDetection(), gcnew OverlapEdgeDetection(),gcnew ImageRotation(),gcnew ImageScaling() };
	private: static BindingList<Operation^>^ queued_operations = gcnew BindingList<Operation^>();
	private: List<PictureBox^>^ result;
	private: array<RadioButton^>^ buttoms;
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		availble_items->DataSource = available_operations;
		availble_items->DisplayMember = "Name";
		result = gcnew List<PictureBox^>(gcnew array<PictureBox^>{ result1, result2, result3 });
		buttoms = gcnew array<RadioButton^>{radioButton1, radioButton2, radioButton3};
		queued_items->DataSource = queued_operations;
		queued_items->DisplayMember = "Name";
	}
	private: System::Void queued_items_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (queued_items->SelectedIndex == -1) return;
		operation_property->SelectedObject = queued_operations[queued_items->SelectedIndex];
	}

	private: System::Void button_open_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openimage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			button_run->Enabled = true;
			button_run_Click(sender, e);
		}
	}
private: System::Void button_run_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap^ origin = gcnew Bitmap(openimage->FileName);
	List<Bitmap^>^ ans = gcnew List<Bitmap^>();
	originpicture->Image = origin;
	if (queued_operations->Count > 0)
	{
		Bitmap^ temp = gcnew Bitmap(origin);
		for each (Operation^% op in queued_operations)
		{
			op->SetImage(temp);
			temp = op->GetResult();
		}
		ans = queued_operations[queued_operations->Count - 1]->GetResults();
	}
	for (int i = 0; i < 3; i++)
	{
		result[i]->Image = i < ans->Count ? ans[i] : nullptr;
	}
	switch (ans->Count)
	{
	case 0:
		radioButton1->Checked = true;
		radioButton1->Checked = false;
		radioButton1->Enabled = false;
		radioButton2->Enabled = false;
		radioButton3->Enabled = false;
	case 1:
		chartorigin->Visible = true;
		HistogramEqualization::BindBitmapChart(origin, chartorigin);

		if (queued_operations->Count>0&&queued_operations[queued_operations->Count - 1]->GetType()->Name == "HistogramEqualization")
		{
			chartresult->Visible = true;
			HistogramEqualization::BindBitmapChart((Bitmap^%)ans[0], chartresult);
		}
		else
		{
			chartresult->Visible = false;
		}
		radioButton1->Checked = true;
		radioButton2->Enabled = true;
		radioButton2->Enabled = false;
		radioButton3->Enabled = false;
		break;
	case 2:
		radioButton2->Enabled = true;
		radioButton3->Enabled = false;
		if (radioButton3->Checked) radioButton1->Checked = true;
		chartorigin->Visible = false;
		chartresult->Visible = false;
		break;
	case 3:
		radioButton2->Enabled = true;
		radioButton3->Enabled = true;
		if (radioButton2->Checked||radioButton3->Checked) radioButton1->Checked = true;
		chartorigin->Visible = false;
		chartresult->Visible = false;
		break;
	}
}
private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e) {
	if (availble_items->SelectedIndex == -1) return;
	queued_operations->Add((Operation^)available_operations[availble_items->SelectedIndex]->Clone());
}
private: System::Void buttom_up_Click(System::Object^  sender, System::EventArgs^  e) {
	int index = queued_items->SelectedIndex;
	if (index == -1 || index == 0)
	{
		return;
	}
	Operation^ op = queued_operations[index];
	queued_operations->RemoveAt(index);
	queued_operations->Insert(index - 1, op);
	queued_items->SelectedIndex = index - 1;
}
private: System::Void button_down_Click(System::Object^  sender, System::EventArgs^  e) {
	int index = queued_items->SelectedIndex;
	if (index == -1 || index == queued_items->Items->Count-1)
	{
		return;
	}
	Operation^ op = queued_operations[index];
	queued_operations->RemoveAt(index);
	queued_operations->Insert(index + 1, op);
	queued_items->SelectedIndex = index + 1;
}
private: System::Void button_remove_Click(System::Object^  sender, System::EventArgs^  e) {
	int index = queued_items->SelectedIndex;
	if (index == -1)
	{
		return;
	}
	queued_operations->RemoveAt(index);
}

private: System::Void button_save_Click(System::Object^  sender, System::EventArgs^  e) {
	int saveindex=-1;
	for (int i = 0; i < 3; i++)
	{
		if (buttoms[i]->Checked)
		{
			saveindex = i;
		}
	}
	if (saveindex == -1)return;
	if (saveimage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		result[saveindex]->Image->Save(saveimage->FileName, System::Drawing::Imaging::ImageFormat::Png);
	}
}
};
}