#pragma once

namespace WinApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для full_calc
	/// </summary>
	public ref class full_calc : public System::Windows::Forms::Form
	{
	public:
		full_calc(void)
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
		~full_calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ resbox;
	protected:

	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ b_true;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;

	protected:

	protected:









	private: System::Windows::Forms::Button^ null;

	private: System::Windows::Forms::Button^ b_dot;

	private: System::Windows::Forms::Button^ result;

	private: System::Windows::Forms::Button^ b_add;
	private: System::Windows::Forms::Button^ b_sub;
	private: System::Windows::Forms::Button^ b_mul;
	private: System::Windows::Forms::Button^ b_div;




	private: System::Windows::Forms::Button^ clear;

	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->resbox = (gcnew System::Windows::Forms::TextBox());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->b_true = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->null = (gcnew System::Windows::Forms::Button());
			this->b_dot = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Button());
			this->b_add = (gcnew System::Windows::Forms::Button());
			this->b_sub = (gcnew System::Windows::Forms::Button());
			this->b_mul = (gcnew System::Windows::Forms::Button());
			this->b_div = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// resbox
			// 
			this->resbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resbox->Location = System::Drawing::Point(39, 76);
			this->resbox->Name = L"resbox";
			this->resbox->Size = System::Drawing::Size(191, 35);
			this->resbox->TabIndex = 0;
			// 
			// one
			// 
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->one->Location = System::Drawing::Point(39, 256);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(60, 60);
			this->one->TabIndex = 1;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &full_calc::one_Click);
			// 
			// two
			// 
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->two->Location = System::Drawing::Point(104, 256);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(60, 60);
			this->two->TabIndex = 2;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &full_calc::two_Click);
			// 
			// b_true
			// 
			this->b_true->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_true->Location = System::Drawing::Point(170, 256);
			this->b_true->Name = L"b_true";
			this->b_true->Size = System::Drawing::Size(60, 60);
			this->b_true->TabIndex = 3;
			this->b_true->Text = L"3";
			this->b_true->UseVisualStyleBackColor = true;
			this->b_true->Click += gcnew System::EventHandler(this, &full_calc::b_true_Click);
			// 
			// four
			// 
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->four->Location = System::Drawing::Point(39, 188);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(60, 60);
			this->four->TabIndex = 4;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &full_calc::four_Click);
			// 
			// five
			// 
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->five->Location = System::Drawing::Point(104, 188);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(60, 60);
			this->five->TabIndex = 5;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &full_calc::five_Click);
			// 
			// six
			// 
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->six->Location = System::Drawing::Point(170, 188);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(60, 60);
			this->six->TabIndex = 6;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &full_calc::six_Click);
			// 
			// seven
			// 
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->seven->Location = System::Drawing::Point(39, 122);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(60, 60);
			this->seven->TabIndex = 7;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &full_calc::seven_Click);
			// 
			// eight
			// 
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eight->Location = System::Drawing::Point(105, 122);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(60, 60);
			this->eight->TabIndex = 8;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &full_calc::eight_Click);
			// 
			// nine
			// 
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine->Location = System::Drawing::Point(170, 122);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(60, 60);
			this->nine->TabIndex = 9;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &full_calc::nine_Click);
			// 
			// null
			// 
			this->null->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->null->Location = System::Drawing::Point(39, 322);
			this->null->Name = L"null";
			this->null->Size = System::Drawing::Size(60, 60);
			this->null->TabIndex = 10;
			this->null->Text = L"0";
			this->null->UseVisualStyleBackColor = true;
			this->null->Click += gcnew System::EventHandler(this, &full_calc::null_Click);
			// 
			// b_dot
			// 
			this->b_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_dot->Location = System::Drawing::Point(104, 322);
			this->b_dot->Name = L"b_dot";
			this->b_dot->Size = System::Drawing::Size(60, 60);
			this->b_dot->TabIndex = 11;
			this->b_dot->Text = L".";
			this->b_dot->UseVisualStyleBackColor = true;
			this->b_dot->Click += gcnew System::EventHandler(this, &full_calc::b_dot_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(170, 322);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(60, 60);
			this->result->TabIndex = 12;
			this->result->Text = L"=";
			this->result->UseVisualStyleBackColor = true;
			this->result->Click += gcnew System::EventHandler(this, &full_calc::result_Click);
			// 
			// b_add
			// 
			this->b_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_add->Location = System::Drawing::Point(236, 122);
			this->b_add->Name = L"b_add";
			this->b_add->Size = System::Drawing::Size(60, 60);
			this->b_add->TabIndex = 13;
			this->b_add->Text = L"+";
			this->b_add->UseVisualStyleBackColor = true;
			this->b_add->Click += gcnew System::EventHandler(this, &full_calc::b_add_Click);
			// 
			// b_sub
			// 
			this->b_sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_sub->Location = System::Drawing::Point(236, 188);
			this->b_sub->Name = L"b_sub";
			this->b_sub->Size = System::Drawing::Size(60, 60);
			this->b_sub->TabIndex = 14;
			this->b_sub->Text = L"-";
			this->b_sub->UseVisualStyleBackColor = true;
			this->b_sub->Click += gcnew System::EventHandler(this, &full_calc::b_sub_Click_1);
			// 
			// b_mul
			// 
			this->b_mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_mul->Location = System::Drawing::Point(236, 256);
			this->b_mul->Name = L"b_mul";
			this->b_mul->Size = System::Drawing::Size(60, 60);
			this->b_mul->TabIndex = 15;
			this->b_mul->Text = L"*";
			this->b_mul->UseVisualStyleBackColor = true;
			this->b_mul->Click += gcnew System::EventHandler(this, &full_calc::b_mul_Click);
			// 
			// b_div
			// 
			this->b_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_div->Location = System::Drawing::Point(236, 322);
			this->b_div->Name = L"b_div";
			this->b_div->Size = System::Drawing::Size(60, 60);
			this->b_div->TabIndex = 16;
			this->b_div->Text = L"/";
			this->b_div->UseVisualStyleBackColor = true;
			this->b_div->Click += gcnew System::EventHandler(this, &full_calc::b_div_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->Location = System::Drawing::Point(236, 76);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(60, 35);
			this->clear->TabIndex = 17;
			this->clear->Text = L"X";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &full_calc::clear_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(50, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 37);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Калькулятор 2025";
			// 
			// full_calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 411);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->b_div);
			this->Controls->Add(this->b_mul);
			this->Controls->Add(this->b_sub);
			this->Controls->Add(this->b_add);
			this->Controls->Add(this->result);
			this->Controls->Add(this->b_dot);
			this->Controls->Add(this->null);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->b_true);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->resbox);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(350, 450);
			this->MinimumSize = System::Drawing::Size(350, 450);
			this->Name = L"full_calc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ a = "";
		String^ operation = "";
		String^ b = "";
		double done = 0;
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		resbox->Text = "";
		operation = "";
		a = "";
		b = "";
	}
	private: System::Void b_add_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			operation = "+";
			resbox->Text = "+";
		}
		else if (operation != "" && b != "") {
			double a_1 = Convert::ToDouble(a, Globalization::CultureInfo::InvariantCulture);
			double b_1 = Convert::ToDouble(b, Globalization::CultureInfo::InvariantCulture);
			done = a_1 + b_1;
		} else if (a != "" && operation != "") {
			null;
		}
	}
	private: System::Void b_sub_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			operation = "-";
			resbox->Text = "-";
		}
		else if (operation != "" && b != "") {
			double a_1 = Convert::ToDouble(a, Globalization::CultureInfo::InvariantCulture);
			double b_1 = Convert::ToDouble(b, Globalization::CultureInfo::InvariantCulture);
			done = a_1 - b_1;
		}
		else if (a != "" && operation != "") {
			null;
		}
	}
private: System::Void null_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operation == "") {
		a += "0";
		resbox->Text += "0";
	}
	else if (operation != "") {
		b += "0";
		resbox->Text += "0";
	}
}
	private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "1";
			resbox->Text += "1";
		}
		else if (operation != "") {
			b += "1";
			resbox->Text += "1";
		}
	}
	private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "2";
			resbox->Text += "2";
		}
		else if (operation != "") {
			b += "2";
			resbox->Text += "2";
		}
	}
	private: System::Void b_true_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "3";
			resbox->Text += "3";
		}
		else if (operation != "") {
			b += "3";
			resbox->Text += "3";
		}
	}
	private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "4";
			resbox->Text += "4";
		}
		else if (operation != "") {
			b += "4";
			resbox->Text += "4";
		}
	}
	private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "5";
			resbox->Text += "5";
		}
		else if (operation != "") {
			b += "5";
			resbox->Text += "5";
		}
	}
	private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "6";
			resbox->Text += "6";
		}
		else if (operation != "") {
			b += "6";
			resbox->Text += "6";
		}
	}

	private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "7";
			resbox->Text += "7";
		}
		else if (operation != "") {
			b += "7";
			resbox->Text += "7";
		}
	}
	private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "8";
			resbox->Text += "8";
		}
		else if (operation != "") {
			b += "8";
			resbox->Text += "8";
		}
	}
	private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			a += "9";
			resbox->Text += "9";
		}
		else if (operation != "") {
			b += "9";
			resbox->Text += "9";
		}
	}
	private: System::Void b_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (a->Contains(".")) {
			null;
		}
		else if (b-> Contains(".")) {
			null;
			}
		else if (operation == "") {
			a += ".";
			resbox->Text += ".";
		}
		if (operation != "") {
			b += ".";
			resbox->Text += ".";
		}
	}
	private: System::Void b_mul_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			operation = "*";
			resbox->Text = "*";
		}
		else if (operation != "" && b != "") {
			double a_1 = Convert::ToDouble(a, Globalization::CultureInfo::InvariantCulture);
			double b_1 = Convert::ToDouble(b, Globalization::CultureInfo::InvariantCulture);
			done = a_1 * b_1;
		}
		else if (a != "" && operation != "") {
			null;
		}
	}
	private: System::Void b_div_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == "") {
			operation = "/";
			resbox->Text = "/";
		}
		else if (operation != "" && b != "") {
			double a_1 = Convert::ToDouble(a, Globalization::CultureInfo::InvariantCulture);
			double b_1 = Convert::ToDouble(b, Globalization::CultureInfo::InvariantCulture);
			done = a_1 / b_1;
		}
		else if (a != "" && operation != "") {
			null;
		}
	}
	private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) {
		double a_1 = Convert::ToDouble(a, Globalization::CultureInfo::InvariantCulture); 
		double b_1 = Convert::ToDouble(b, Globalization::CultureInfo::InvariantCulture); 
		if (operation == "+") {
			done = a_1 + b_1;
		}
		else if (operation == "-") {
			done = a_1 - b_1;
		}
		else if (operation == "*") {
			done = a_1 * b_1;
		}
		else if (operation == "/") {
			if (a_1 == 0 || b_1 == 0) {
				MessageBox::Show("Ошибка / 0 ", "Проблема", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				done = a_1 / b_1;
			}
		}
		resbox->Text = done.ToString();
		operation = "";
		b = "";
		}
	};
}