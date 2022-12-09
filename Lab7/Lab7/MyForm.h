#pragma once
#include<cmath>
int m, n;
int A[50][50];
namespace Lab7 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ M;

	private: System::Windows::Forms::TextBox^ N;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ third_answ;


	private: System::Windows::Forms::TextBox^ second_answ;

	private: System::Windows::Forms::TextBox^ first_answ;

	private: System::Windows::Forms::TextBox^ X;

	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->M = (gcnew System::Windows::Forms::TextBox());
			this->N = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->third_answ = (gcnew System::Windows::Forms::TextBox());
			this->second_answ = (gcnew System::Windows::Forms::TextBox());
			this->first_answ = (gcnew System::Windows::Forms::TextBox());
			this->X = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->M);
			this->groupBox1->Controls->Add(this->N);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(664, 370);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Введення даних матриці";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 142);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(642, 210);
			this->dataGridView1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(227, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Матриця А[n,m]";
			// 
			// M
			// 
			this->M->Location = System::Drawing::Point(543, 68);
			this->M->Name = L"M";
			this->M->Size = System::Drawing::Size(100, 34);
			this->M->TabIndex = 4;
			// 
			// N
			// 
			this->N->Location = System::Drawing::Point(103, 68);
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(100, 34);
			this->N->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(422, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"М-стовпців";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N-рядків";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(194, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть розмір матриці";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->third_answ);
			this->groupBox2->Controls->Add(this->second_answ);
			this->groupBox2->Controls->Add(this->first_answ);
			this->groupBox2->Controls->Add(this->X);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 388);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(664, 149);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Знайти";
			// 
			// third_answ
			// 
			this->third_answ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->third_answ->Location = System::Drawing::Point(501, 111);
			this->third_answ->Name = L"third_answ";
			this->third_answ->Size = System::Drawing::Size(157, 27);
			this->third_answ->TabIndex = 7;
			this->third_answ->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// second_answ
			// 
			this->second_answ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->second_answ->Location = System::Drawing::Point(501, 71);
			this->second_answ->Name = L"second_answ";
			this->second_answ->Size = System::Drawing::Size(157, 27);
			this->second_answ->TabIndex = 5;
			// 
			// first_answ
			// 
			this->first_answ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->first_answ->Location = System::Drawing::Point(501, 31);
			this->first_answ->Name = L"first_answ";
			this->first_answ->Size = System::Drawing::Size(157, 27);
			this->first_answ->TabIndex = 4;
			// 
			// X
			// 
			this->X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->X->Location = System::Drawing::Point(310, 31);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(74, 27);
			this->X->TabIndex = 3;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(6, 111);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(464, 24);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Сума парних чисел 1-го рядку і додатніх чисел 3-го";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(6, 72);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(410, 24);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Сума елементів розташованих по периметру";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(6, 33);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(298, 24);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Кількість елементів, більших за";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 543);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 45);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Створити таблицю";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(260, 543);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 45);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Перенести дані з таблиці в масив і вирішити завдання";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(504, 543);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 45);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Втхід";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 592);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((N->Text != "") && (M->Text != ""))
	{
		m = Convert::ToInt32(N->Text);
		n = Convert::ToInt32(M->Text);
		int k = 0;
		k = dataGridView1->ColumnCount;
		if (k != 0)
		{
			for (int i = 0; i < k; i++)
				dataGridView1->Columns->Clear();
		}

		dataGridView1->ColumnCount = n;
		dataGridView1->RowCount = m;
	}
	else
	{
		MessageBox::Show("Введіть дані розмірності матриці", "Помилка введення даних", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = 0, X, sum_per = 0, sum_col = 0;
	this->first_answ->Text = "";
	this->second_answ->Text = "";
	this->third_answ->Text = "";

	X = Convert::ToInt32(this->X->Text);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[j]->Value);
			
			if (A[i][j] > X)
			{
				count++;
			}

			if (i == 0 || i == m-1 || j == 0 || j == n-1)
			{
				sum_per += A[i][j];
			}

			if (i == 0)
			{
				if (A[i][j]%2==0)
				{
					sum_col += A[i][j];
				}
			}
			if (j == 2)
			{
				if (A[i][j] > 0)
				{
					sum_col += A[i][j];
				}
			}
		}
	}

	if ((checkBox1->Checked == true) && (count != 1))
	{
		this->first_answ->Text = Convert::ToString(count);
	}
	else if (checkBox1->Checked == true)
	{
		this->first_answ->Text = Convert::ToString("нет элементов");
	}

	if ((checkBox2->Checked == true) && (sum_per != 0))
	{
		this->second_answ->Text = Convert::ToString(sum_per);
	}
	else if (checkBox2->Checked == true)
	{
		this->second_answ->Text = Convert::ToString("нет элементов");
	}

	if ((checkBox3->Checked == true) && (sum_col != 0))
	{
		this->third_answ->Text = Convert::ToString(sum_col);
	}
	else if (checkBox3->Checked == true)
	{
		this->third_answ->Text = Convert::ToString("нет элементов");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
