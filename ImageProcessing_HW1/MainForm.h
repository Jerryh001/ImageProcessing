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
	private: System::Windows::Forms::GroupBox^  resultBox1;
	private: System::Windows::Forms::GroupBox^  resultBox2;
	private: System::Windows::Forms::GroupBox^  resultBox3;








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
			System::Windows::Forms::GroupBox^  groupBox1;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
			System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
			System::Windows::Forms::GroupBox^  groupBox7;
			System::Windows::Forms::Panel^  panel1;
			this->availble_items = (gcnew System::Windows::Forms::ListBox());
			this->originpicture = (gcnew System::Windows::Forms::PictureBox());
			this->queued_items = (gcnew System::Windows::Forms::ListBox());
			this->resultBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->resultBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->resultBox2 = (gcnew System::Windows::Forms::GroupBox());
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
			groupBox2->Location = System::Drawing::Point(3, 2);
			groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			groupBox2->Name = L"groupBox2";
			groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			groupBox2->Size = System::Drawing::Size(211, 231);
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
			this->availble_items->Location = System::Drawing::Point(3, 20);
			this->availble_items->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->availble_items->Name = L"availble_items";
			this->availble_items->Size = System::Drawing::Size(205, 209);
			this->availble_items->TabIndex = 2;
			// 
			// groupBox3
			// 
			groupBox3->Controls->Add(this->originpicture);
			groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox3->Location = System::Drawing::Point(3, 2);
			groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			groupBox3->Name = L"groupBox3";
			groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			groupBox3->Size = System::Drawing::Size(446, 362);
			groupBox3->TabIndex = 0;
			groupBox3->TabStop = false;
			groupBox3->Text = L"原始圖片";
			// 
			// originpicture
			// 
			this->originpicture->Dock = System::Windows::Forms::DockStyle::Fill;
			this->originpicture->Location = System::Drawing::Point(3, 20);
			this->originpicture->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->originpicture->Name = L"originpicture";
			this->originpicture->Size = System::Drawing::Size(440, 340);
			this->originpicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->originpicture->TabIndex = 0;
			this->originpicture->TabStop = false;
			// 
			// groupBox1
			// 
			groupBox1->Controls->Add(this->queued_items);
			groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			groupBox1->Location = System::Drawing::Point(3, 2);
			groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			groupBox1->Name = L"groupBox1";
			groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			groupBox1->Size = System::Drawing::Size(216, 471);
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
			this->queued_items->Location = System::Drawing::Point(3, 20);
			this->queued_items->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->queued_items->Name = L"queued_items";
			this->queued_items->Size = System::Drawing::Size(210, 449);
			this->queued_items->TabIndex = 2;
			this->queued_items->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::queued_items_SelectedIndexChanged);
			// 
			// tableLayoutPanel1
			// 
			tableLayoutPanel1->ColumnCount = 2;
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel1->Controls->Add(this->resultBox1, 1, 0);
			tableLayoutPanel1->Controls->Add(this->resultBox3, 1, 1);
			tableLayoutPanel1->Controls->Add(this->resultBox2, 0, 1);
			tableLayoutPanel1->Controls->Add(groupBox3, 0, 0);
			tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			tableLayoutPanel1->Location = System::Drawing::Point(451, 0);
			tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			tableLayoutPanel1->Name = L"tableLayoutPanel1";
			tableLayoutPanel1->RowCount = 2;
			tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			tableLayoutPanel1->Size = System::Drawing::Size(904, 732);
			tableLayoutPanel1->TabIndex = 5;
			// 
			// resultBox1
			// 
			this->resultBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->resultBox1->Location = System::Drawing::Point(455, 2);
			this->resultBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resultBox1->Name = L"resultBox1";
			this->resultBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resultBox1->Size = System::Drawing::Size(446, 362);
			this->resultBox1->TabIndex = 1;
			this->resultBox1->TabStop = false;
			this->resultBox1->Text = L"結果1";
			// 
			// resultBox3
			// 
			this->resultBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->resultBox3->Location = System::Drawing::Point(455, 368);
			this->resultBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resultBox3->Name = L"resultBox3";
			this->resultBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resultBox3->Size = System::Drawing::Size(446, 362);
			this->resultBox3->TabIndex = 3;
			this->resultBox3->TabStop = false;
			this->resultBox3->Text = L"結果3";
			// 
			// resultBox2
			// 
			this->resultBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->resultBox2->Location = System::Drawing::Point(3, 368);
			this->resultBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resultBox2->Name = L"resultBox2";
			this->resultBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resultBox2->Size = System::Drawing::Size(446, 362);
			this->resultBox2->TabIndex = 2;
			this->resultBox2->TabStop = false;
			this->resultBox2->Text = L"結果2";
			// 
			// tableLayoutPanel2
			// 
			tableLayoutPanel2->ColumnCount = 1;
			tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			tableLayoutPanel2->Controls->Add(tableLayoutPanel3, 0, 0);
			tableLayoutPanel2->Controls->Add(this->operation_property, 0, 1);
			tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Left;
			tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			tableLayoutPanel2->Name = L"tableLayoutPanel2";
			tableLayoutPanel2->RowCount = 2;
			tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 65.52901F)));
			tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 34.47099F)));
			tableLayoutPanel2->Size = System::Drawing::Size(451, 732);
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
			tableLayoutPanel3->Location = System::Drawing::Point(3, 2);
			tableLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			tableLayoutPanel3->Name = L"tableLayoutPanel3";
			tableLayoutPanel3->RowCount = 1;
			tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel3->Size = System::Drawing::Size(445, 475);
			tableLayoutPanel3->TabIndex = 7;
			// 
			// tableLayoutPanel4
			// 
			tableLayoutPanel4->ColumnCount = 1;
			tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel4->Controls->Add(groupBox2, 0, 0);
			tableLayoutPanel4->Controls->Add(groupBox7, 0, 1);
			tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			tableLayoutPanel4->Location = System::Drawing::Point(225, 2);
			tableLayoutPanel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			tableLayoutPanel4->Name = L"tableLayoutPanel4";
			tableLayoutPanel4->RowCount = 2;
			tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			tableLayoutPanel4->Size = System::Drawing::Size(217, 471);
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
			groupBox7->Location = System::Drawing::Point(3, 237);
			groupBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			groupBox7->Name = L"groupBox7";
			groupBox7->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			groupBox7->Size = System::Drawing::Size(211, 232);
			groupBox7->TabIndex = 5;
			groupBox7->TabStop = false;
			groupBox7->Text = L"控制面板";
			// 
			// button_save
			// 
			this->button_save->Location = System::Drawing::Point(118, 127);
			this->button_save->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(90, 24);
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
			panel1->Location = System::Drawing::Point(107, 155);
			panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(101, 73);
			panel1->TabIndex = 6;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Enabled = false;
			this->radioButton3->Location = System::Drawing::Point(3, 52);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->radioButton1->Location = System::Drawing::Point(3, 2);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 19);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"儲存結果1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button_remove
			// 
			this->button_remove->Location = System::Drawing::Point(3, 78);
			this->button_remove->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_remove->Name = L"button_remove";
			this->button_remove->Size = System::Drawing::Size(90, 24);
			this->button_remove->TabIndex = 5;
			this->button_remove->Text = L"移除所選";
			this->button_remove->UseVisualStyleBackColor = true;
			this->button_remove->Click += gcnew System::EventHandler(this, &MainForm::button_remove_Click);
			// 
			// button_down
			// 
			this->button_down->Location = System::Drawing::Point(3, 50);
			this->button_down->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_down->Name = L"button_down";
			this->button_down->Size = System::Drawing::Size(90, 24);
			this->button_down->TabIndex = 4;
			this->button_down->Text = L"向後移動";
			this->button_down->UseVisualStyleBackColor = true;
			this->button_down->Click += gcnew System::EventHandler(this, &MainForm::button_down_Click);
			// 
			// buttom_up
			// 
			this->buttom_up->Location = System::Drawing::Point(3, 22);
			this->buttom_up->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttom_up->Name = L"buttom_up";
			this->buttom_up->Size = System::Drawing::Size(90, 24);
			this->buttom_up->TabIndex = 3;
			this->buttom_up->Text = L"向前移動";
			this->buttom_up->UseVisualStyleBackColor = true;
			this->buttom_up->Click += gcnew System::EventHandler(this, &MainForm::buttom_up_Click);
			// 
			// button_add
			// 
			this->button_add->Location = System::Drawing::Point(118, 22);
			this->button_add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(90, 24);
			this->button_add->TabIndex = 2;
			this->button_add->Text = L"新增動作";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MainForm::button_add_Click);
			// 
			// button_run
			// 
			this->button_run->Enabled = false;
			this->button_run->Location = System::Drawing::Point(3, 204);
			this->button_run->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_run->Name = L"button_run";
			this->button_run->Size = System::Drawing::Size(90, 24);
			this->button_run->TabIndex = 1;
			this->button_run->Text = L"執行";
			this->button_run->UseVisualStyleBackColor = true;
			this->button_run->Click += gcnew System::EventHandler(this, &MainForm::button_run_Click);
			// 
			// button_open
			// 
			this->button_open->Location = System::Drawing::Point(3, 176);
			this->button_open->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_open->Name = L"button_open";
			this->button_open->Size = System::Drawing::Size(90, 24);
			this->button_open->TabIndex = 0;
			this->button_open->Text = L"開啟檔案";
			this->button_open->UseVisualStyleBackColor = true;
			this->button_open->Click += gcnew System::EventHandler(this, &MainForm::button_open_Click);
			// 
			// operation_property
			// 
			this->operation_property->Dock = System::Windows::Forms::DockStyle::Fill;
			this->operation_property->Location = System::Drawing::Point(3, 481);
			this->operation_property->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->operation_property->Name = L"operation_property";
			this->operation_property->Size = System::Drawing::Size(445, 249);
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
			this->ClientSize = System::Drawing::Size(1355, 732);
			this->Controls->Add(tableLayoutPanel1);
			this->Controls->Add(tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			groupBox2->ResumeLayout(false);
			groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originpicture))->EndInit();
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
	private: static array<Operation^>^ available_operations = gcnew array<Operation^>{ gcnew ColorExtraction(), gcnew ColorTransformation(), gcnew SmoothFilter(), gcnew HistogramEqualization(), gcnew Thresholding(), gcnew SobelEdgeDetection(), gcnew OverlapEdgeDetection(), gcnew ImageRotation(), gcnew ImageScaling() };
	private: static BindingList<Operation^>^ queued_operations = gcnew BindingList<Operation^>();
	private: List<GroupBox^>^ result;
	private: array<RadioButton^>^ buttons;
	private: List<DisplayComponent^>^ ans;
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		availble_items->DataSource = available_operations;
		availble_items->DisplayMember = "Name";
		result = gcnew List<GroupBox^>(gcnew array<GroupBox^>{ resultBox1, resultBox2, resultBox3 });
		buttons = gcnew array<RadioButton^>{radioButton1, radioButton2, radioButton3};
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
		originpicture->Image = origin;

		ans = OperationExecuter::Run(origin, queued_operations);
		for (int i = 0; i < 3; i++)
		{
			result[i]->Controls->Clear();
			buttons[i]->Enabled = false;
			if (i < ans->Count)
			{
				result[i]->Controls->Add(ans[i]->GetControl());
				if (ans[i]->GetType() == Picture::typeid)
				{
					buttons[i]->Enabled = true;
				}
			}
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
		if (index == -1 || index == queued_items->Items->Count - 1)
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
		int saveindex = -1;
		for (int i = 0; i < 3; i++)
		{
			if (buttons[i]->Checked)
			{
				saveindex = i;
			}
		}
		if (saveindex == -1)return;
		if (saveimage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			((Picture^)ans[saveindex])->GetImage()->Save(saveimage->FileName, System::Drawing::Imaging::ImageFormat::Png);
		}
	}
	};
}