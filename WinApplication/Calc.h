#pragma once

namespace WinApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{
	public:
		Calc(void)
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
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ number1;
	private: System::Windows::Forms::Button^ button_div;
	private: System::Windows::Forms::TextBox^ number2;
	private: System::Windows::Forms::TextBox^ result_box;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->number1 = (gcnew System::Windows::Forms::TextBox());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->number2 = (gcnew System::Windows::Forms::TextBox());
			this->result_box = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(169, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сложение";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Укажите число снизу";
			// 
			// number1
			// 
			this->number1->Location = System::Drawing::Point(38, 86);
			this->number1->Name = L"number1";
			this->number1->Size = System::Drawing::Size(116, 20);
			this->number1->TabIndex = 2;
			// 
			// button_div
			// 
			this->button_div->Location = System::Drawing::Point(173, 84);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(90, 23);
			this->button_div->TabIndex = 3;
			this->button_div->Text = L"Сложить на";
			this->button_div->UseVisualStyleBackColor = true;
			this->button_div->Click += gcnew System::EventHandler(this, &Calc::button_div_Click);
			// 
			// number2
			// 
			this->number2->Location = System::Drawing::Point(277, 86);
			this->number2->Name = L"number2";
			this->number2->Size = System::Drawing::Size(116, 20);
			this->number2->TabIndex = 4;
			// 
			// result_box
			// 
			this->result_box->Location = System::Drawing::Point(38, 133);
			this->result_box->Name = L"result_box";
			this->result_box->Size = System::Drawing::Size(116, 20);
			this->result_box->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ответ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(274, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Укажите число снизу";
			// 
			// Calc
		// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 165);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->result_box);
			this->Controls->Add(this->number2);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->number1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Calc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор (/)";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_div_Click(System::Object^ sender, System::EventArgs^ e) {
		float num1 = Convert::ToInt32(this->number1->Text);
		float num2 = Convert::ToInt32(this->number2->Text);
		float res = num1 / num2;
		Convert::ToString(res);
		result_box->Text = res.ToString();
		
	}
};
}
