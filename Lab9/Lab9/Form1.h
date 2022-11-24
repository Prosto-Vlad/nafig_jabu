#pragma once

namespace Lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1196, 601);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->ResumeLayout(false);

		}
#pragma endregion
		bool mode = false;
	private: System::Void Form1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		
	}
	private: System::Void Form1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			if (mode)
			{
				int x, y;
				x = Cursor->Position.X - this->Location.X - 9;
				y = Cursor->Position.Y - this->Location.Y - 33;
				Button^ but = gcnew Button();
				but->Location = System::Drawing::Point(x, y);
				this->Controls->Add(but);

				mode = false;
			}
			else
			{
				int x, y;
				x = Cursor->Position.X - this->Location.X - 9;
				y = Cursor->Position.Y - this->Location.Y - 33;
				TextBox^ box = gcnew TextBox();
				box->Location = System::Drawing::Point(x, y);
				this->Controls->Add(box);

				mode = true;
			}
		}
		else
		{
			Controls->Clear();
		}
	}
	};
}
