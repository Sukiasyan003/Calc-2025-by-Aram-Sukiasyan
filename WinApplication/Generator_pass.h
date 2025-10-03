#pragma once

namespace WinApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Generator_pass
	/// </summary>
	public ref class Generator_pass : public System::Windows::Forms::Form
	{
	public:
		Generator_pass(void)
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
		~Generator_pass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::ComboBox^ combolevel;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ user_text;
	private: System::Windows::Forms::Button^ buttongenerate;
	private: System::Windows::Forms::TextBox^ passbox;



	private: System::Windows::Forms::Button^ buttoncopy;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::CheckBox^ checkBox19;
	private: System::Windows::Forms::CheckBox^ checkBox20;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Generator_pass::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->combolevel = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->user_text = (gcnew System::Windows::Forms::TextBox());
			this->buttongenerate = (gcnew System::Windows::Forms::Button());
			this->passbox = (gcnew System::Windows::Forms::TextBox());
			this->buttoncopy = (gcnew System::Windows::Forms::Button());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(11, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ընտրել գաղտնաբառի բարդությունը";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(15, 142);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(37, 24);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"\?";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(239, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Գաղտնաբառը իր մեջ ներառում է";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(15, 172);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(32, 24);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L":";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(15, 202);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(32, 24);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L".";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Transparent;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->ForeColor = System::Drawing::Color::White;
			this->checkBox4->Location = System::Drawing::Point(15, 232);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(34, 24);
			this->checkBox4->TabIndex = 5;
			this->checkBox4->Text = L"\"";
			this->checkBox4->UseVisualStyleBackColor = false;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->ForeColor = System::Drawing::Color::White;
			this->checkBox5->Location = System::Drawing::Point(15, 262);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(34, 24);
			this->checkBox5->TabIndex = 6;
			this->checkBox5->Text = L"*";
			this->checkBox5->UseVisualStyleBackColor = false;
			// 
			// combolevel
			// 
			this->combolevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->combolevel->FormattingEnabled = true;
			this->combolevel->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Հեշտ (Միայն տառեր)", L"Միջին (Տառեր և թվեր)",
					L"Դժվար (Տառեր, թվեր և սիմվոլներ)", L"Անկոտրելի (Ամենինչ ներառված)"
			});
			this->combolevel->Location = System::Drawing::Point(12, 81);
			this->combolevel->Name = L"combolevel";
			this->combolevel->Size = System::Drawing::Size(271, 26);
			this->combolevel->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 485);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Ինչ կցանկանաք որ պարտադիր ներառի ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 507);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(271, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"գաղտնաբառը (Գրեք՝ բառ, թիվ կամ այլ բան)";
			// 
			// user_text
			// 
			this->user_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->user_text->Location = System::Drawing::Point(16, 533);
			this->user_text->Name = L"user_text";
			this->user_text->Size = System::Drawing::Size(310, 20);
			this->user_text->TabIndex = 10;
			// 
			// buttongenerate
			// 
			this->buttongenerate->Location = System::Drawing::Point(208, 559);
			this->buttongenerate->Name = L"buttongenerate";
			this->buttongenerate->Size = System::Drawing::Size(119, 23);
			this->buttongenerate->TabIndex = 11;
			this->buttongenerate->Text = L"Գեներացնել";
			this->buttongenerate->UseVisualStyleBackColor = true;
			this->buttongenerate->Click += gcnew System::EventHandler(this, &Generator_pass::buttongenerate_Click);
			// 
			// passbox
			// 
			this->passbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->passbox->Location = System::Drawing::Point(16, 604);
			this->passbox->Name = L"passbox";
			this->passbox->Size = System::Drawing::Size(229, 21);
			this->passbox->TabIndex = 12;
			// 
			// buttoncopy
			// 
			this->buttoncopy->Location = System::Drawing::Point(251, 602);
			this->buttoncopy->Name = L"buttoncopy";
			this->buttoncopy->Size = System::Drawing::Size(75, 23);
			this->buttoncopy->TabIndex = 13;
			this->buttoncopy->Text = L"Պատճենել";
			this->buttoncopy->UseVisualStyleBackColor = true;
			this->buttoncopy->Click += gcnew System::EventHandler(this, &Generator_pass::buttoncopy_Click);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::Color::Transparent;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->ForeColor = System::Drawing::Color::White;
			this->checkBox6->Location = System::Drawing::Point(15, 292);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(33, 24);
			this->checkBox6->TabIndex = 18;
			this->checkBox6->Text = L"-";
			this->checkBox6->UseVisualStyleBackColor = false;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->BackColor = System::Drawing::Color::Transparent;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox7->ForeColor = System::Drawing::Color::White;
			this->checkBox7->Location = System::Drawing::Point(15, 322);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(37, 24);
			this->checkBox7->TabIndex = 17;
			this->checkBox7->Text = L"=";
			this->checkBox7->UseVisualStyleBackColor = false;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->BackColor = System::Drawing::Color::Transparent;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox8->ForeColor = System::Drawing::Color::White;
			this->checkBox8->Location = System::Drawing::Point(15, 352);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(37, 24);
			this->checkBox8->TabIndex = 16;
			this->checkBox8->Text = L"+";
			this->checkBox8->UseVisualStyleBackColor = false;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->BackColor = System::Drawing::Color::Transparent;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox9->ForeColor = System::Drawing::Color::White;
			this->checkBox9->Location = System::Drawing::Point(15, 382);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(32, 24);
			this->checkBox9->TabIndex = 15;
			this->checkBox9->Text = L"/";
			this->checkBox9->UseVisualStyleBackColor = false;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->BackColor = System::Drawing::Color::Transparent;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox10->ForeColor = System::Drawing::Color::White;
			this->checkBox10->Location = System::Drawing::Point(15, 412);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(33, 24);
			this->checkBox10->TabIndex = 14;
			this->checkBox10->Text = L"}";
			this->checkBox10->UseVisualStyleBackColor = false;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->BackColor = System::Drawing::Color::Transparent;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox11->ForeColor = System::Drawing::Color::White;
			this->checkBox11->Location = System::Drawing::Point(15, 442);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(32, 24);
			this->checkBox11->TabIndex = 20;
			this->checkBox11->Text = L",";
			this->checkBox11->UseVisualStyleBackColor = false;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->BackColor = System::Drawing::Color::Transparent;
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox12->ForeColor = System::Drawing::Color::White;
			this->checkBox12->Location = System::Drawing::Point(181, 142);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(32, 24);
			this->checkBox12->TabIndex = 19;
			this->checkBox12->Text = L"[";
			this->checkBox12->UseVisualStyleBackColor = false;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->BackColor = System::Drawing::Color::Transparent;
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox13->ForeColor = System::Drawing::Color::White;
			this->checkBox13->Location = System::Drawing::Point(181, 172);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(33, 24);
			this->checkBox13->TabIndex = 24;
			this->checkBox13->Text = L")";
			this->checkBox13->UseVisualStyleBackColor = false;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->BackColor = System::Drawing::Color::Transparent;
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox14->ForeColor = System::Drawing::Color::White;
			this->checkBox14->Location = System::Drawing::Point(181, 202);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(33, 24);
			this->checkBox14->TabIndex = 23;
			this->checkBox14->Text = L"{";
			this->checkBox14->UseVisualStyleBackColor = false;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->BackColor = System::Drawing::Color::Transparent;
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox15->ForeColor = System::Drawing::Color::White;
			this->checkBox15->Location = System::Drawing::Point(181, 232);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(33, 24);
			this->checkBox15->TabIndex = 22;
			this->checkBox15->Text = L"(";
			this->checkBox15->UseVisualStyleBackColor = false;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->BackColor = System::Drawing::Color::Transparent;
			this->checkBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox16->ForeColor = System::Drawing::Color::White;
			this->checkBox16->Location = System::Drawing::Point(181, 262);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(32, 24);
			this->checkBox16->TabIndex = 21;
			this->checkBox16->Text = L"]";
			this->checkBox16->UseVisualStyleBackColor = false;
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->BackColor = System::Drawing::Color::Transparent;
			this->checkBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox17->ForeColor = System::Drawing::Color::White;
			this->checkBox17->Location = System::Drawing::Point(181, 292);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(37, 24);
			this->checkBox17->TabIndex = 30;
			this->checkBox17->Text = L"#";
			this->checkBox17->UseVisualStyleBackColor = false;
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->BackColor = System::Drawing::Color::Transparent;
			this->checkBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox18->ForeColor = System::Drawing::Color::White;
			this->checkBox18->Location = System::Drawing::Point(181, 322);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(32, 24);
			this->checkBox18->TabIndex = 29;
			this->checkBox18->Text = L"!";
			this->checkBox18->UseVisualStyleBackColor = false;
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->BackColor = System::Drawing::Color::Transparent;
			this->checkBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox19->ForeColor = System::Drawing::Color::White;
			this->checkBox19->Location = System::Drawing::Point(181, 352);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(37, 24);
			this->checkBox19->TabIndex = 28;
			this->checkBox19->Text = L"$";
			this->checkBox19->UseVisualStyleBackColor = false;
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->BackColor = System::Drawing::Color::Transparent;
			this->checkBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox20->ForeColor = System::Drawing::Color::White;
			this->checkBox20->Location = System::Drawing::Point(181, 382);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(44, 24);
			this->checkBox20->TabIndex = 27;
			this->checkBox20->Text = L"@";
			this->checkBox20->UseVisualStyleBackColor = false;
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->BackColor = System::Drawing::Color::Transparent;
			this->checkBox21->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox21->ForeColor = System::Drawing::Color::White;
			this->checkBox21->Location = System::Drawing::Point(181, 412);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(35, 23);
			this->checkBox21->TabIndex = 26;
			this->checkBox21->Text = L"|";
			this->checkBox21->UseVisualStyleBackColor = false;
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->BackColor = System::Drawing::Color::Transparent;
			this->checkBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox22->ForeColor = System::Drawing::Color::White;
			this->checkBox22->Location = System::Drawing::Point(181, 441);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(42, 24);
			this->checkBox22->TabIndex = 25;
			this->checkBox22->Text = L"%";
			this->checkBox22->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(43, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 20);
			this->label5->TabIndex = 31;
			this->label5->Text = L"(Հարցական)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(42, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 20);
			this->label6->TabIndex = 32;
			this->label6->Text = L"(Վերջակետ)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(42, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 20);
			this->label7->TabIndex = 33;
			this->label7->Text = L"(Կետ)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(43, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 20);
			this->label8->TabIndex = 34;
			this->label8->Text = L"(Մեջբերում)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(43, 353);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 20);
			this->label9->TabIndex = 38;
			this->label9->Text = L"(Գումարում)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(42, 323);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 20);
			this->label10->TabIndex = 37;
			this->label10->Text = L"(Հավասար)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(42, 293);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 20);
			this->label11->TabIndex = 36;
			this->label11->Text = L"(Հանում)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(43, 263);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 20);
			this->label12->TabIndex = 35;
			this->label12->Text = L"(Սստղանիշ)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(44, 442);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(105, 20);
			this->label13->TabIndex = 41;
			this->label13->Text = L"(Ստորակետ)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(43, 412);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 20);
			this->label14->TabIndex = 40;
			this->label14->Text = L"(Ոլոր փակագիծ)";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(43, 382);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 20);
			this->label15->TabIndex = 39;
			this->label15->Text = L"(Բաժանում)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(218, 441);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 20);
			this->label16->TabIndex = 52;
			this->label16->Text = L"(Տոկոս)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(213, 412);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 20);
			this->label17->TabIndex = 51;
			this->label17->Text = L"(Կամ)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(218, 382);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(58, 20);
			this->label18->TabIndex = 50;
			this->label18->Text = L"(Շնիկ)";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(210, 352);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(70, 20);
			this->label19->TabIndex = 49;
			this->label19->Text = L"(Դոլլար)";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(210, 322);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(105, 20);
			this->label20->TabIndex = 48;
			this->label20->Text = L"(Բացականչ․)";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(210, 293);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(66, 20);
			this->label21->TabIndex = 47;
			this->label21->Text = L"(Շարփ)";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(210, 263);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(136, 20);
			this->label22->TabIndex = 46;
			this->label22->Text = L"(Քառ․ փակագիծ)";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(210, 233);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(132, 20);
			this->label23->TabIndex = 45;
			this->label23->Text = L"(Բաց փակագիծ)";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(210, 203);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(132, 20);
			this->label24->TabIndex = 44;
			this->label24->Text = L"(Ոլոր փակագիծ)";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(210, 173);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(135, 20);
			this->label25->TabIndex = 43;
			this->label25->Text = L"(Փակ փակագիծ)";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(210, 143);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(136, 20);
			this->label26->TabIndex = 42;
			this->label26->Text = L"(Քառ․ փակագիծ)";
			// 
			// Generator_pass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(350, 633);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox21);
			this->Controls->Add(this->checkBox22);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->buttoncopy);
			this->Controls->Add(this->passbox);
			this->Controls->Add(this->buttongenerate);
			this->Controls->Add(this->user_text);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->combolevel);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(350, 500);
			this->Name = L"Generator_pass";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Генератор паролей";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ simbols = "?'""':.*[]{}'\'+=-,()%&$#@!";
		String^ simbol = "";
		String^ lines = "qwertyuiopasdfghjklzxcvbnm";
		String^ ln = "";
		Random^ randans = gcnew Random();
		
		

private: System::Void buttongenerate_Click(System::Object^ sender, System::EventArgs^ e) {
		// Array witch checkboxes
		int countboxes = 0;
		bool noproblem = true;	
		array<CheckBox^>^ checkboxes = gcnew array<CheckBox^> {
			checkBox1,checkBox2,checkBox3,checkBox4,checkBox5,checkBox6,checkBox7,checkBox8,checkBox9,checkBox10, checkBox11,checkBox12,checkBox13,checkBox14,checkBox15,checkBox16,checkBox17,checkBox18,checkBox19,checkBox20,checkBox21,checkBox22};
		// countboxes++
		for each(CheckBox^ check in checkboxes) {
				if (check->Checked) {
					countboxes++;
				}
			} 
		if (combolevel->SelectedIndex == 0 && countboxes != 0) { // Հեշտ
				MessageBox::Show("Для легкого не выберите символы ! ", "Проблема", MessageBoxButtons::OK, MessageBoxIcon::Error);
				noproblem = false; 
				passbox->Text = "";
		} 
		if (combolevel->SelectedIndex == 1 && (countboxes < 2 || countboxes > 5))	{ // Միջին
				MessageBox::Show("Выберите 2 - 5 символы ! ", "Проблема", MessageBoxButtons::OK, MessageBoxIcon::Error);
				noproblem = false; 
				passbox->Text = "";
		} 
		if (combolevel->SelectedIndex == 2 && (countboxes < 10 || countboxes > 15)) { // Դժվար
				MessageBox::Show("Выберите 10 - 15 символы ! ", "Проблема", MessageBoxButtons::OK, MessageBoxIcon::Error);
				noproblem = false; 
				passbox->Text = "";
		} 
		if (combolevel->SelectedIndex == 3 && countboxes < 20) { // Շատ դժվար
			MessageBox::Show("Выберите 20 и больше символы ! ", "Проблема", MessageBoxButtons::OK, MessageBoxIcon::Error);
			noproblem = false;
			passbox->Text = "";
		} 
		/*
		// Scan 1

		// Scan 2

		// Scan 3

		// Scan 4
		*/

		// Progress generate
	if (noproblem) {
		//generate easy
		if (combolevel->SelectedIndex == 0) { // Հեշտ
			for (int j = 0; j < 3; j++) {
					int tiv = randans->Next(0, 10);
					ln += tiv;
				}
				ln += user_text->Text;
				for (int j = 0; j < 5; j++) {
					int line1 = randans->Next(0, 25);
					for (int i = 0; i < lines->Length; i++) {
						if (i == line1) {
							ln += lines[i];
							//1break;
						}
					}
				} passbox->Text = ""; passbox->Text = ln; ln = "";
			//passbox->Text = countboxes.ToString(); 
			}
		//generate middle
		if (combolevel->SelectedIndex == 1) { // Միջին

			int countmij = 0;
			for each(CheckBox ^ check in checkboxes) {
				if (check->Checked) {
					simbol += (check->Text);
					countmij++;
				}
			}
			for (int j = 0; j < 2; j++) {
					int simbols1 = randans->Next(0, countmij);
					for (int i = 0; i < simbol->Length; i++) {
						if (i == simbols1) {
							ln += simbol[i];
							//break;
						}
					}
				}
				for (int j = 0; j < 5; j++) {
					int line1 = randans->Next(0, 25);
					for (int i = 0; i < lines->Length; i++) {
						if (i == line1) {
							ln += lines[i];
							//break;
						}
					}
				}
				ln += user_text->Text;
				for (int j = 0; j < 3; j++) {
					int tiv = randans->Next(0, 10);
					ln += tiv;
				} passbox->Text = ln; simbol = ""; ln = "";
			//passbox->Text = countboxes.ToString(); 
			}
		//generate hard
		if (combolevel->SelectedIndex == 2) { // Դժվար
			int countdjv = 0;
			for each (CheckBox ^ check in checkboxes) {
				if (check->Checked) {
					simbol += (check->Text);
					countdjv++;
				}
			}
			for (int j = 0; j < 5; j++) {
				int tiv = randans->Next(0, 10);
				ln += tiv;
			}
			for (int j = 0; j < 4; j++) {
				int simbols1 = randans->Next(0, countdjv);
				for (int i = 0; i < simbol->Length; i++) {
					if (i == simbols1) {
						ln += simbol[i];
						//break;
					}
				}
			}
			ln += user_text->Text;
			for (int j = 0; j < 4; j++) {
				int line1 = randans->Next(0, 25);
				for (int i = 0; i < lines->Length; i++) {
					if (i == line1) {
						ln += lines[i];
						//break;
					}
				}
			} passbox->Text = ln; simbol = ""; ln = "";
			//passbox->Text = countboxes.ToString();
		}
		//generate very hard
		if (combolevel->SelectedIndex == 3) { // Անկոտրելի

			int countank = 0;
			for each (CheckBox ^ check in checkboxes) {
				if (check->Checked) {
					simbol += (check->Text);
					countank++;
				}
			}
			for (int j = 0; j < 6; j++) {
				int simbols1 = randans->Next(0, countank);
				for (int i = 0; i < simbol->Length; i++) {
					if (i == simbols1) {
						ln += simbol[i];
						//break;
					}
				}
			}
			for (int j = 0; j < 5; j++) {
				int line1 = randans->Next(0, 25);
				for (int i = 0; i < lines->Length; i++) {
					if (i == line1) {
						ln += lines[i];
						//break;
					}
				}
			}
			ln += user_text->Text;
			for (int j = 0; j < 4; j++) {
				int tiv = randans->Next(0, 10);
				ln += tiv;
			}
			for (int j = 0; j < 3; j++) {
				int simbols2 = randans->Next(0, countank);
				for (int i = 0; i < simbol->Length; i++) {
					if (i == simbols2) {
						ln += simbol[i];
						//break;
					}
				}
			} passbox->Text = ln; simbol = ""; ln = ""; 
			//passbox->Text = countboxes.ToString();
		} 
	}
}
private: System::Void buttoncopy_Click(System::Object^ sender, System::EventArgs^ e) {
	Clipboard::SetText(passbox->Text);
}
};
}
