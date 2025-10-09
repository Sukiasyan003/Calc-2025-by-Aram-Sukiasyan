#pragma once

namespace WinApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Converter_Valute
	/// </summary>
	public ref class Converter_Valute : public System::Windows::Forms::Form
	{
	public:
		Converter_Valute(void)
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
		~Converter_Valute()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ buttonclear;

	private: System::Windows::Forms::Button^ buttonconvert;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ historybox;


	private: System::Windows::Forms::TextBox^ resultbox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ usernumber;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Converter_Valute::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->buttonclear = (gcnew System::Windows::Forms::Button());
			this->buttonconvert = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->historybox = (gcnew System::Windows::Forms::ListBox());
			this->resultbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->usernumber = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"AMD", L"USD", L"RUB" });
			this->comboBox1->Location = System::Drawing::Point(31, 111);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(201, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"AMD", L"USD", L"RUB" });
			this->comboBox2->Location = System::Drawing::Point(31, 167);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(201, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// buttonclear
			// 
			this->buttonclear->Location = System::Drawing::Point(107, 464);
			this->buttonclear->Name = L"buttonclear";
			this->buttonclear->Size = System::Drawing::Size(125, 23);
			this->buttonclear->TabIndex = 2;
			this->buttonclear->Text = L"Очистить историю";
			this->buttonclear->UseVisualStyleBackColor = true;
			this->buttonclear->Click += gcnew System::EventHandler(this, &Converter_Valute::buttonclear_Click);
			// 
			// buttonconvert
			// 
			this->buttonconvert->Location = System::Drawing::Point(119, 194);
			this->buttonconvert->Name = L"buttonconvert";
			this->buttonconvert->Size = System::Drawing::Size(113, 23);
			this->buttonconvert->TabIndex = 3;
			this->buttonconvert->Text = L"Конвертировать";
			this->buttonconvert->UseVisualStyleBackColor = true;
			this->buttonconvert->Click += gcnew System::EventHandler(this, &Converter_Valute::buttonconvert_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(28, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Выберите вальюта";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(28, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"На какую вальюта";
			// 
			// historybox
			// 
			this->historybox->FormattingEnabled = true;
			this->historybox->Location = System::Drawing::Point(31, 258);
			this->historybox->Name = L"historybox";
			this->historybox->Size = System::Drawing::Size(201, 199);
			this->historybox->TabIndex = 6;
			// 
			// resultbox
			// 
			this->resultbox->Location = System::Drawing::Point(31, 223);
			this->resultbox->Name = L"resultbox";
			this->resultbox->Size = System::Drawing::Size(201, 20);
			this->resultbox->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(28, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Укажите число";
			// 
			// usernumber
			// 
			this->usernumber->Location = System::Drawing::Point(31, 59);
			this->usernumber->Name = L"usernumber";
			this->usernumber->Size = System::Drawing::Size(201, 20);
			this->usernumber->TabIndex = 9;
			// 
			// Converter_Valute
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(282, 505);
			this->Controls->Add(this->usernumber);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->resultbox);
			this->Controls->Add(this->historybox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonconvert);
			this->Controls->Add(this->buttonclear);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(295, 487);
			this->Name = L"Converter_Valute";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Конвертер Валют";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double a, b, res;
	private: System::Void buttonconvert_Click(System::Object^ sender, System::EventArgs^ e) {
		if(comboBox1->SelectedIndex == 0 && comboBox2->SelectedIndex == 1){
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = (a / 383.06).ToString();
			historybox->Items->Add(resultbox->Text);
		}
		if(comboBox1->SelectedIndex == 0 && comboBox2->SelectedIndex == 2){
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = (a * 0.21).ToString();
			historybox->Items->Add(resultbox->Text);
		}
		if(comboBox1->SelectedIndex == 0 && comboBox2->SelectedIndex == 0){
			MessageBox::Show("Вы выбрали одинаковые вальюты !", "Предуперждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = a.ToString();
		}
		if(comboBox1->SelectedIndex == 1 && comboBox2->SelectedIndex == 0){
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = (a * 383.06).ToString();
			historybox->Items->Add(resultbox->Text);
		}
		if(comboBox1->SelectedIndex == 1 && comboBox2->SelectedIndex == 2){
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = (a * 81.17).ToString();
			historybox->Items->Add(resultbox->Text);
		}
		if(comboBox1->SelectedIndex == 1 && comboBox2->SelectedIndex == 1){
			MessageBox::Show("Вы выбрали одинаковые вальюты !", "Предуперждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = a.ToString();
		}
		if(comboBox1->SelectedIndex == 2 && comboBox2->SelectedIndex == 0){
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = (a * 4.74).ToString();
			historybox->Items->Add(resultbox->Text);
		}
		if(comboBox1->SelectedIndex == 2 && comboBox2->SelectedIndex == 1){
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = (a * 0.012).ToString();
			historybox->Items->Add(resultbox->Text);
		}
		if(comboBox1->SelectedIndex == 2 && comboBox2->SelectedIndex == 2){
			MessageBox::Show("Вы выбрали одинаковые вальюты !", "Предуперждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			a = Convert::ToDouble(usernumber->Text);
			resultbox->Text = a.ToString();
		}
	}
private: System::Void buttonclear_Click(System::Object^ sender, System::EventArgs^ e) {
	historybox->Items->Clear();
}
};
}
