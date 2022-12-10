#pragma once

namespace Lab13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::RadioButton^ colo_marker;

	private: System::Windows::Forms::RadioButton^ polig_marker;

	private: System::Windows::Forms::RadioButton^ squer_marker;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ squr_a;
	private: System::Windows::Forms::TextBox^ polig_a;
	private: System::Windows::Forms::TextBox^ polig_b;
	private: System::Windows::Forms::TextBox^ colo_radius;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->colo_marker = (gcnew System::Windows::Forms::RadioButton());
			this->polig_marker = (gcnew System::Windows::Forms::RadioButton());
			this->squer_marker = (gcnew System::Windows::Forms::RadioButton());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->squr_a = (gcnew System::Windows::Forms::TextBox());
			this->polig_a = (gcnew System::Windows::Forms::TextBox());
			this->polig_b = (gcnew System::Windows::Forms::TextBox());
			this->colo_radius = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->colo_marker);
			this->groupBox1->Controls->Add(this->polig_marker);
			this->groupBox1->Controls->Add(this->squer_marker);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(148, 171);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вибір фігури";
			// 
			// colo_marker
			// 
			this->colo_marker->AutoSize = true;
			this->colo_marker->Location = System::Drawing::Point(21, 127);
			this->colo_marker->Name = L"colo_marker";
			this->colo_marker->Size = System::Drawing::Size(62, 21);
			this->colo_marker->TabIndex = 2;
			this->colo_marker->TabStop = true;
			this->colo_marker->Text = L"Коло";
			this->colo_marker->UseVisualStyleBackColor = true;
			this->colo_marker->CheckedChanged += gcnew System::EventHandler(this, &MyForm::colo_marker_CheckedChanged);
			// 
			// polig_marker
			// 
			this->polig_marker->AutoSize = true;
			this->polig_marker->Location = System::Drawing::Point(21, 86);
			this->polig_marker->Name = L"polig_marker";
			this->polig_marker->Size = System::Drawing::Size(116, 21);
			this->polig_marker->TabIndex = 1;
			this->polig_marker->TabStop = true;
			this->polig_marker->Text = L"Прямокутник";
			this->polig_marker->UseVisualStyleBackColor = true;
			this->polig_marker->CheckedChanged += gcnew System::EventHandler(this, &MyForm::polig_marker_CheckedChanged);
			// 
			// squer_marker
			// 
			this->squer_marker->AutoSize = true;
			this->squer_marker->Location = System::Drawing::Point(21, 44);
			this->squer_marker->Name = L"squer_marker";
			this->squer_marker->Size = System::Drawing::Size(84, 21);
			this->squer_marker->TabIndex = 0;
			this->squer_marker->TabStop = true;
			this->squer_marker->Text = L"Квадрат";
			this->squer_marker->UseVisualStyleBackColor = true;
			this->squer_marker->CheckedChanged += gcnew System::EventHandler(this, &MyForm::squer_marker_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(166, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"a =";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(166, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"a =";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(166, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"r =";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(266, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"b =";
			this->label4->Visible = false;
			// 
			// squr_a
			// 
			this->squr_a->Location = System::Drawing::Point(200, 55);
			this->squr_a->Name = L"squr_a";
			this->squr_a->Size = System::Drawing::Size(48, 22);
			this->squr_a->TabIndex = 5;
			this->squr_a->Visible = false;
			// 
			// polig_a
			// 
			this->polig_a->Location = System::Drawing::Point(200, 97);
			this->polig_a->Name = L"polig_a";
			this->polig_a->Size = System::Drawing::Size(48, 22);
			this->polig_a->TabIndex = 6;
			this->polig_a->Visible = false;
			// 
			// polig_b
			// 
			this->polig_b->Location = System::Drawing::Point(300, 97);
			this->polig_b->Name = L"polig_b";
			this->polig_b->Size = System::Drawing::Size(48, 22);
			this->polig_b->TabIndex = 7;
			this->polig_b->Visible = false;
			// 
			// colo_radius
			// 
			this->colo_radius->Location = System::Drawing::Point(200, 138);
			this->colo_radius->Name = L"colo_radius";
			this->colo_radius->Size = System::Drawing::Size(48, 22);
			this->colo_radius->TabIndex = 8;
			this->colo_radius->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(364, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 215);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(11, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 46);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Побудувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(187, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 46);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(364, 237);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 46);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Сова";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(527, 237);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 46);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Вихід";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 295);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->colo_radius);
			this->Controls->Add(this->polig_b);
			this->Controls->Add(this->polig_a);
			this->Controls->Add(this->squr_a);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Геометричні фігури";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ picture = pictureBox1->CreateGraphics();
		Pen^ pen = gcnew Pen(Color::Black, 1.0f);
		int side_a, side_b, rad;

		if (squer_marker->Checked)
		{
			side_a = Convert::ToInt32(squr_a->Text);

			picture->DrawRectangle(pen, 10, 10, side_a, side_a);
		}
		if (polig_marker->Checked)
		{
			side_a = Convert::ToInt32(polig_a->Text);
			side_b = Convert::ToInt32(polig_b->Text);

			picture->DrawRectangle(pen, 10, 10, side_a, side_b);
		}
		if (colo_marker->Checked)
		{
			rad = Convert::ToInt32(colo_radius->Text);

			picture->DrawEllipse(pen, 10, 10, rad, rad);
		}

		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ picture = pictureBox1->CreateGraphics();
	picture->Clear(Color::White);
}
private: System::Void squer_marker_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (squer_marker->Checked)
	{
		label1->Visible = true;
		squr_a->Visible = true;
		button1->Enabled = true;
		pictureBox1->Visible = true;
	}
	if (!squer_marker->Checked)
	{
		label1->Visible = false;
		squr_a->Visible = false;
		button1->Enabled = true;
	}
}
private: System::Void polig_marker_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (polig_marker->Checked)
	{
		label2->Visible = true;
		polig_a->Visible = true;

		label4->Visible = true;
		polig_b->Visible = true;
		button1->Enabled = true;
		pictureBox1->Visible = true;
	}
	if (!polig_marker->Checked)
	{
		label2->Visible = false;
		polig_a->Visible = false;

		label4->Visible = false;
		polig_b->Visible = false;
		button1->Enabled = false;
	}
}
private: System::Void colo_marker_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (colo_marker->Checked)
	{
		label3->Visible = true;
		colo_radius->Visible = true;

		button1->Enabled = true;
		pictureBox1->Visible = true;
	}
	if (!colo_marker->Checked)
	{
		label3->Visible = true;
		colo_radius->Visible = true;

		button1->Enabled = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ picture = pictureBox1->CreateGraphics();
	Pen^ pen = gcnew Pen(Color::Black, 1.0f);
	
	//Лапки
	picture->FillEllipse(System::Drawing::Brushes::Orange, 50, 145, 25, 25);
	picture->DrawEllipse(Pens::Black, 50, 145, 25, 25);

	picture->FillEllipse(System::Drawing::Brushes::Orange, 101, 145, 25, 25);
	picture->DrawEllipse(Pens::Black, 101, 145, 25, 25);

	//Тіло
	picture->FillEllipse(System::Drawing::Brushes::Peru, 35, 25, 106, 135);
	picture->DrawEllipse(Pens::Black, 35, 25, 106, 135);

	picture->FillEllipse(System::Drawing::Brushes::White, 50, 65, 76, 95);
	
	//Голова
	array<Point>^ points = gcnew array<Point>(3);
	points[0].X = 40; points[0].Y = 10;
	points[1].X = 136; points[1].Y = 10;
	points[2].X = 88; points[2].Y = 85;
	picture->FillPolygon(Brushes::SaddleBrown, points);

	points[0].X = 71; points[0].Y = 60;
	points[1].X = 105; points[1].Y = 60;
	points[2].X = 88; points[2].Y = 85;
	picture->FillPolygon(Brushes::Orange, points);

	points[0].X = 40; points[0].Y = 10;
	points[1].X = 136; points[1].Y = 10;
	points[2].X = 88; points[2].Y = 85;
	picture->DrawPolygon(Pens::Black, points);

	//Очі
	picture->FillEllipse(System::Drawing::Brushes::Gold, 58, 40, 25, 25);
	picture->DrawEllipse(Pens::Black, 58, 40, 25, 25);
	picture->FillEllipse(System::Drawing::Brushes::Black, 69, 52, 10, 10);


	picture->FillEllipse(System::Drawing::Brushes::Gold, 93, 40, 25, 25);
	picture->DrawEllipse(Pens::Black, 93, 40, 25, 25);
	picture->FillEllipse(System::Drawing::Brushes::Black, 97, 52, 10, 10);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
