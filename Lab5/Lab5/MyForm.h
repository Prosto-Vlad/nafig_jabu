#pragma once

#include <math.h>;

namespace Lab5 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 73);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(418, 157);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 281);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введіть значення Xn=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введіть значення Хk=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 337);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Введіть значення Хh=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 362);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Введіть значення а=";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(418, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Показати таблицю і екстремуми функції";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(288, 278);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"-1,6";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(288, 306);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(142, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"3,7";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(288, 334);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(142, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,3";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(288, 362);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 22);
			this->textBox4->TabIndex = 9;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(452, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(340, 296);
			this->dataGridView1->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(603, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Таблиця значень функції";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(449, 337);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Максим. знач. функції";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(656, 337);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Мінім. знач. функції";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(452, 362);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(149, 22);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(659, 359);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(133, 22);
			this->textBox6->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(452, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(353, 50);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Вихід";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(816, 450);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double xn, xk, xh, x, y, a, ymax, ymin, yt;
		int n, i;

		if (((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") && (textBox4->Text != "")))
		{
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);
			a = Convert::ToDouble(textBox4->Text);

			int k = 0;
			k = dataGridView1->ColumnCount;
			if (k != 0)
				for (int i = 0; i < k; i++)
					dataGridView1->Columns->Clear();
			
			dataGridView1->ColumnCount = 2;
			dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1);

			dataGridView1->Rows[0]->Cells[0]->Value = " Х";
			dataGridView1->Rows[0]->Cells[1]->Value = " Y";

			i = 1;
			x = xn;
			ymax = -1.8e307;
			ymin = 1.8e307;
			while (x <= xk)
			{
				if (x <= 0)
				{
					y = pow(x, 5) * (cos(2 * pow(x, 3)) / sin(2 * pow(x, 3)));
				}
				else if (x <= a)
				{
					y = 5 / (sin(2 * x + 3) / cos(2 * x + 3) + 1);
				}
				else
				{
					y = pow(x, 2) * exp(-x);
				}

				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
				yt = ceil(y * 100) / 100;
				dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
				if (y > ymax) ymax = ceil(y * 100) / 100;
				if (y < ymin) ymin = ceil(y * 100) / 100;
				x = x + xh;
				i++;
			}

			textBox5->Text = Convert::ToString(ymax);
			textBox6->Text = Convert::ToString(ymin);
		}
		else
		{
			MessageBox::Show("Введіть дані", "Помилка введення даних", MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
