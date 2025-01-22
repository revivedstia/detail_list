#pragma once
#include "Header.h"

namespace Lab3 {

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



	protected:

	private: System::Windows::Forms::SplitContainer^ splitContainer4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ cmdSort;
	private: System::Windows::Forms::ComboBox^ cbSortDir;
	private: System::Windows::Forms::ComboBox^ cbSortKey;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ComboBox^ cbSFilter;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ cbFilter;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::TextBox^ txtMin;
	private: System::Windows::Forms::ComboBox^ cbZ1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtMax;
	private: System::Windows::Forms::ComboBox^ cbZ2;
	private: System::Windows::Forms::GroupBox^ FileCmds;
	private: System::Windows::Forms::Button^ cmd_add_in_file;
	private: System::Windows::Forms::Button^ cmdFileIn;
	private: System::Windows::Forms::Button^ cmdFileOut;
	private: System::Windows::Forms::GroupBox^ mainCmds;
	private: System::Windows::Forms::Button^ cmdAdd;
	private: System::Windows::Forms::Button^ cmdEdit;
	private: System::Windows::Forms::Button^ cmdDelete;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtType;
	private: System::Windows::Forms::TextBox^ txtWeight;
	private: System::Windows::Forms::TextBox^ txtCount;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbCountry;
	private: System::Windows::Forms::GroupBox^ group1Picture;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ cmdAddPic;
	private: System::Windows::Forms::Button^ cmdRePic;
	private: System::Windows::Forms::Button^ cmdDelPic;
	private: System::Windows::Forms::Button^ cmdExit;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cmdSort = (gcnew System::Windows::Forms::Button());
			this->cbSortDir = (gcnew System::Windows::Forms::ComboBox());
			this->cbSortKey = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->cbSFilter = (gcnew System::Windows::Forms::ComboBox());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cbFilter = (gcnew System::Windows::Forms::ComboBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->txtMin = (gcnew System::Windows::Forms::TextBox());
			this->cbZ1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtMax = (gcnew System::Windows::Forms::TextBox());
			this->cbZ2 = (gcnew System::Windows::Forms::ComboBox());
			this->FileCmds = (gcnew System::Windows::Forms::GroupBox());
			this->cmd_add_in_file = (gcnew System::Windows::Forms::Button());
			this->cmdFileIn = (gcnew System::Windows::Forms::Button());
			this->cmdFileOut = (gcnew System::Windows::Forms::Button());
			this->mainCmds = (gcnew System::Windows::Forms::GroupBox());
			this->cmdAdd = (gcnew System::Windows::Forms::Button());
			this->cmdEdit = (gcnew System::Windows::Forms::Button());
			this->cmdDelete = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtType = (gcnew System::Windows::Forms::TextBox());
			this->txtWeight = (gcnew System::Windows::Forms::TextBox());
			this->txtCount = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbCountry = (gcnew System::Windows::Forms::ComboBox());
			this->group1Picture = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cmdAddPic = (gcnew System::Windows::Forms::Button());
			this->cmdRePic = (gcnew System::Windows::Forms::Button());
			this->cmdDelPic = (gcnew System::Windows::Forms::Button());
			this->cmdExit = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->FileCmds->SuspendLayout();
			this->mainCmds->SuspendLayout();
			this->group1Picture->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer4
			// 
			this->splitContainer4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer4->Location = System::Drawing::Point(357, 52);
			this->splitContainer4->Name = L"splitContainer4";
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->groupBox3);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->groupBox4);
			this->splitContainer4->Size = System::Drawing::Size(570, 129);
			this->splitContainer4->SplitterDistance = 261;
			this->splitContainer4->TabIndex = 142;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->cmdSort);
			this->groupBox3->Controls->Add(this->cbSortDir);
			this->groupBox3->Controls->Add(this->cbSortKey);
			this->groupBox3->Location = System::Drawing::Point(3, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(255, 126);
			this->groupBox3->TabIndex = 91;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Сортировка";
			// 
			// cmdSort
			// 
			this->cmdSort->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cmdSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdSort->Location = System::Drawing::Point(6, 87);
			this->cmdSort->Name = L"cmdSort";
			this->cmdSort->Size = System::Drawing::Size(243, 33);
			this->cmdSort->TabIndex = 95;
			this->cmdSort->Text = L"Применить";
			this->cmdSort->UseVisualStyleBackColor = true;
			this->cmdSort->Click += gcnew System::EventHandler(this, &MyForm::cmdSort_Click);
			// 
			// cbSortDir
			// 
			this->cbSortDir->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbSortDir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cbSortDir->FormattingEnabled = true;
			this->cbSortDir->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"По возрастанию", L"По убыванию" });
			this->cbSortDir->Location = System::Drawing::Point(6, 55);
			this->cbSortDir->Name = L"cbSortDir";
			this->cbSortDir->Size = System::Drawing::Size(243, 28);
			this->cbSortDir->TabIndex = 94;
			this->cbSortDir->Text = L"По возрастанию";
			this->cbSortDir->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbSortDir_SelectedIndexChanged);
			this->cbSortDir->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Prohibit);
			// 
			// cbSortKey
			// 
			this->cbSortKey->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbSortKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cbSortKey->FormattingEnabled = true;
			this->cbSortKey->Location = System::Drawing::Point(6, 21);
			this->cbSortKey->Name = L"cbSortKey";
			this->cbSortKey->Size = System::Drawing::Size(243, 28);
			this->cbSortKey->TabIndex = 93;
			this->cbSortKey->Text = L"Выберете поле";
			this->cbSortKey->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbSortKey_SelectedIndexChanged);
			this->cbSortKey->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Prohibit);
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->cbSFilter);
			this->groupBox4->Controls->Add(this->splitContainer3);
			this->groupBox4->Controls->Add(this->cbFilter);
			this->groupBox4->Controls->Add(this->splitContainer1);
			this->groupBox4->Location = System::Drawing::Point(3, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(300, 126);
			this->groupBox4->TabIndex = 92;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Фильтр";
			// 
			// cbSFilter
			// 
			this->cbSFilter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbSFilter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cbSFilter->FormattingEnabled = true;
			this->cbSFilter->Location = System::Drawing::Point(7, 20);
			this->cbSFilter->Name = L"cbSFilter";
			this->cbSFilter->Size = System::Drawing::Size(287, 28);
			this->cbSFilter->TabIndex = 96;
			this->cbSFilter->Text = L"Выберете поле";
			this->cbSFilter->Visible = false;
			this->cbSFilter->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbSFilter_SelectedIndexChanged);
			this->cbSFilter->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Prohibit);
			// 
			// splitContainer3
			// 
			this->splitContainer3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer3->Location = System::Drawing::Point(7, 83);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->button2);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->button3);
			this->splitContainer3->Size = System::Drawing::Size(287, 43);
			this->splitContainer3->SplitterDistance = 141;
			this->splitContainer3->TabIndex = 96;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->Location = System::Drawing::Point(-1, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 35);
			this->button2->TabIndex = 95;
			this->button2->Text = L"Применить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->Location = System::Drawing::Point(0, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 35);
			this->button3->TabIndex = 96;
			this->button3->Text = L"Сбросить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// cbFilter
			// 
			this->cbFilter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbFilter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cbFilter->FormattingEnabled = true;
			this->cbFilter->Location = System::Drawing::Point(7, 20);
			this->cbFilter->Name = L"cbFilter";
			this->cbFilter->Size = System::Drawing::Size(287, 28);
			this->cbFilter->TabIndex = 96;
			this->cbFilter->Text = L"Выберете поле";
			this->cbFilter->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbFilter_SelectedIndexChanged);
			this->cbFilter->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Prohibit);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(7, 49);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->txtMin);
			this->splitContainer1->Panel1->Controls->Add(this->cbZ1);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->txtMax);
			this->splitContainer1->Panel2->Controls->Add(this->cbZ2);
			this->splitContainer1->Size = System::Drawing::Size(287, 34);
			this->splitContainer1->SplitterDistance = 158;
			this->splitContainer1->TabIndex = 93;
			this->splitContainer1->Visible = false;
			// 
			// txtMin
			// 
			this->txtMin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtMin->Location = System::Drawing::Point(0, 5);
			this->txtMin->Name = L"txtMin";
			this->txtMin->Size = System::Drawing::Size(74, 26);
			this->txtMin->TabIndex = 99;
			// 
			// cbZ1
			// 
			this->cbZ1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cbZ1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cbZ1->FormattingEnabled = true;
			this->cbZ1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"<", L"<=" });
			this->cbZ1->Location = System::Drawing::Point(80, 5);
			this->cbZ1->Name = L"cbZ1";
			this->cbZ1->Size = System::Drawing::Size(37, 28);
			this->cbZ1->TabIndex = 96;
			this->cbZ1->Text = L"<";
			this->cbZ1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbZ1_SelectedIndexChanged);
			this->cbZ1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Prohibit);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(124, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 20);
			this->label2->TabIndex = 102;
			this->label2->Text = L"X";
			// 
			// txtMax
			// 
			this->txtMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtMax->Location = System::Drawing::Point(46, 5);
			this->txtMax->Name = L"txtMax";
			this->txtMax->Size = System::Drawing::Size(77, 26);
			this->txtMax->TabIndex = 103;
			this->txtMax->WordWrap = false;
			// 
			// cbZ2
			// 
			this->cbZ2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cbZ2->FormattingEnabled = true;
			this->cbZ2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"<", L"<=" });
			this->cbZ2->Location = System::Drawing::Point(3, 5);
			this->cbZ2->Name = L"cbZ2";
			this->cbZ2->Size = System::Drawing::Size(37, 28);
			this->cbZ2->TabIndex = 101;
			this->cbZ2->Text = L"<";
			this->cbZ2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbZ2_SelectedIndexChanged);
			this->cbZ2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Prohibit);
			// 
			// FileCmds
			// 
			this->FileCmds->Controls->Add(this->cmd_add_in_file);
			this->FileCmds->Controls->Add(this->cmdFileIn);
			this->FileCmds->Controls->Add(this->cmdFileOut);
			this->FileCmds->Location = System::Drawing::Point(20, 119);
			this->FileCmds->Name = L"FileCmds";
			this->FileCmds->Size = System::Drawing::Size(322, 62);
			this->FileCmds->TabIndex = 141;
			this->FileCmds->TabStop = false;
			this->FileCmds->Text = L"Работа с файлами";
			// 
			// cmd_add_in_file
			// 
			this->cmd_add_in_file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmd_add_in_file->Location = System::Drawing::Point(216, 22);
			this->cmd_add_in_file->Margin = System::Windows::Forms::Padding(2);
			this->cmd_add_in_file->Name = L"cmd_add_in_file";
			this->cmd_add_in_file->Size = System::Drawing::Size(94, 35);
			this->cmd_add_in_file->TabIndex = 69;
			this->cmd_add_in_file->Text = L"дозапись";
			this->cmd_add_in_file->UseVisualStyleBackColor = true;
			this->cmd_add_in_file->Click += gcnew System::EventHandler(this, &MyForm::cmd_add_in_file_Click);
			// 
			// cmdFileIn
			// 
			this->cmdFileIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdFileIn->Location = System::Drawing::Point(6, 21);
			this->cmdFileIn->Margin = System::Windows::Forms::Padding(2);
			this->cmdFileIn->Name = L"cmdFileIn";
			this->cmdFileIn->Size = System::Drawing::Size(94, 35);
			this->cmdFileIn->TabIndex = 67;
			this->cmdFileIn->Text = L"импорт";
			this->cmdFileIn->UseVisualStyleBackColor = true;
			this->cmdFileIn->Click += gcnew System::EventHandler(this, &MyForm::cmdFileIn_Click);
			// 
			// cmdFileOut
			// 
			this->cmdFileOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdFileOut->Location = System::Drawing::Point(104, 21);
			this->cmdFileOut->Margin = System::Windows::Forms::Padding(2);
			this->cmdFileOut->Name = L"cmdFileOut";
			this->cmdFileOut->Size = System::Drawing::Size(108, 35);
			this->cmdFileOut->TabIndex = 68;
			this->cmdFileOut->Text = L"экспорт";
			this->cmdFileOut->UseVisualStyleBackColor = true;
			this->cmdFileOut->Click += gcnew System::EventHandler(this, &MyForm::cmdFileOut_Click);
			// 
			// mainCmds
			// 
			this->mainCmds->Controls->Add(this->cmdAdd);
			this->mainCmds->Controls->Add(this->cmdEdit);
			this->mainCmds->Controls->Add(this->cmdDelete);
			this->mainCmds->Location = System::Drawing::Point(20, 52);
			this->mainCmds->Name = L"mainCmds";
			this->mainCmds->Size = System::Drawing::Size(322, 61);
			this->mainCmds->TabIndex = 140;
			this->mainCmds->TabStop = false;
			this->mainCmds->Text = L"Управление элементом";
			// 
			// cmdAdd
			// 
			this->cmdAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdAdd->Location = System::Drawing::Point(8, 21);
			this->cmdAdd->Margin = System::Windows::Forms::Padding(2);
			this->cmdAdd->Name = L"cmdAdd";
			this->cmdAdd->Size = System::Drawing::Size(92, 35);
			this->cmdAdd->TabIndex = 69;
			this->cmdAdd->Text = L"добавить";
			this->cmdAdd->UseVisualStyleBackColor = true;
			this->cmdAdd->Click += gcnew System::EventHandler(this, &MyForm::cmdAdd_Click);
			this->cmdAdd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::cmdAdd_KeyPress);
			this->cmdAdd->MouseHover += gcnew System::EventHandler(this, &MyForm::cmdAdd_MouseHover);
			// 
			// cmdEdit
			// 
			this->cmdEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdEdit->Location = System::Drawing::Point(103, 21);
			this->cmdEdit->Margin = System::Windows::Forms::Padding(2);
			this->cmdEdit->Name = L"cmdEdit";
			this->cmdEdit->Size = System::Drawing::Size(109, 35);
			this->cmdEdit->TabIndex = 75;
			this->cmdEdit->Text = L"измененить";
			this->cmdEdit->UseVisualStyleBackColor = true;
			this->cmdEdit->Click += gcnew System::EventHandler(this, &MyForm::cmdEdit_Click);
			// 
			// cmdDelete
			// 
			this->cmdDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdDelete->Location = System::Drawing::Point(215, 21);
			this->cmdDelete->Margin = System::Windows::Forms::Padding(2);
			this->cmdDelete->Name = L"cmdDelete";
			this->cmdDelete->Size = System::Drawing::Size(95, 35);
			this->cmdDelete->TabIndex = 74;
			this->cmdDelete->Text = L"удалить";
			this->cmdDelete->UseVisualStyleBackColor = true;
			this->cmdDelete->Click += gcnew System::EventHandler(this, &MyForm::cmdDelete_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(20, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(191, 24);
			this->label6->TabIndex = 139;
			this->label6->Text = L"Ведомость деталей";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(235, 203);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(692, 308);
			this->listBox1->TabIndex = 138;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(20, 424);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 20);
			this->label4->TabIndex = 137;
			this->label4->Text = L"Страна производитель";
			// 
			// txtType
			// 
			this->txtType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtType->Location = System::Drawing::Point(20, 281);
			this->txtType->Margin = System::Windows::Forms::Padding(2);
			this->txtType->Name = L"txtType";
			this->txtType->Size = System::Drawing::Size(188, 29);
			this->txtType->TabIndex = 136;
			// 
			// txtWeight
			// 
			this->txtWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtWeight->Location = System::Drawing::Point(20, 393);
			this->txtWeight->Margin = System::Windows::Forms::Padding(2);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(188, 29);
			this->txtWeight->TabIndex = 135;
			this->txtWeight->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::HandledW);
			// 
			// txtCount
			// 
			this->txtCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtCount->Location = System::Drawing::Point(20, 337);
			this->txtCount->Margin = System::Windows::Forms::Padding(2);
			this->txtCount->Name = L"txtCount";
			this->txtCount->Size = System::Drawing::Size(188, 29);
			this->txtCount->TabIndex = 134;
			this->txtCount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::HandledC);
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtName->Location = System::Drawing::Point(20, 224);
			this->txtName->Margin = System::Windows::Forms::Padding(2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(184, 29);
			this->txtName->TabIndex = 133;
			this->txtName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::HandledT);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(20, 371);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 20);
			this->label7->TabIndex = 132;
			this->label7->Text = L"Вес 1 детали (г)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(20, 259);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 20);
			this->label5->TabIndex = 130;
			this->label5->Text = L"Материал";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(20, 315);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 20);
			this->label3->TabIndex = 131;
			this->label3->Text = L"Количество";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(20, 203);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 20);
			this->label1->TabIndex = 129;
			this->label1->Text = L"Наименование";
			// 
			// cbCountry
			// 
			this->cbCountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cbCountry->FormattingEnabled = true;
			this->cbCountry->Location = System::Drawing::Point(20, 447);
			this->cbCountry->Name = L"cbCountry";
			this->cbCountry->Size = System::Drawing::Size(188, 28);
			this->cbCountry->TabIndex = 143;
			this->cbCountry->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::HandledT);
			// 
			// group1Picture
			// 
			this->group1Picture->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->group1Picture->Controls->Add(this->pictureBox1);
			this->group1Picture->Controls->Add(this->cmdAddPic);
			this->group1Picture->Controls->Add(this->cmdRePic);
			this->group1Picture->Controls->Add(this->cmdDelPic);
			this->group1Picture->Location = System::Drawing::Point(948, 203);
			this->group1Picture->Name = L"group1Picture";
			this->group1Picture->Size = System::Drawing::Size(196, 308);
			this->group1Picture->TabIndex = 144;
			this->group1Picture->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(3, 8);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(191, 233);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 84;
			this->pictureBox1->TabStop = false;
			// 
			// cmdAddPic
			// 
			this->cmdAddPic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cmdAddPic->Enabled = false;
			this->cmdAddPic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->cmdAddPic->Location = System::Drawing::Point(0, 274);
			this->cmdAddPic->Margin = System::Windows::Forms::Padding(2);
			this->cmdAddPic->Name = L"cmdAddPic";
			this->cmdAddPic->Size = System::Drawing::Size(56, 34);
			this->cmdAddPic->TabIndex = 87;
			this->cmdAddPic->Tag = L"";
			this->cmdAddPic->Text = L"+";
			this->cmdAddPic->UseVisualStyleBackColor = true;
			this->cmdAddPic->Click += gcnew System::EventHandler(this, &MyForm::cmdAddPic_Click);
			this->cmdAddPic->MouseHover += gcnew System::EventHandler(this, &MyForm::cmdAddPic_MouseHover);
			// 
			// cmdRePic
			// 
			this->cmdRePic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cmdRePic->Enabled = false;
			this->cmdRePic->Font = (gcnew System::Drawing::Font(L"Cooper Black", 8, System::Drawing::FontStyle::Bold));
			this->cmdRePic->Location = System::Drawing::Point(70, 274);
			this->cmdRePic->Margin = System::Windows::Forms::Padding(2);
			this->cmdRePic->Name = L"cmdRePic";
			this->cmdRePic->Size = System::Drawing::Size(56, 34);
			this->cmdRePic->TabIndex = 85;
			this->cmdRePic->Text = L"   /\r\n\'";
			this->cmdRePic->UseVisualStyleBackColor = true;
			this->cmdRePic->Click += gcnew System::EventHandler(this, &MyForm::cmdRePic_Click);
			this->cmdRePic->MouseHover += gcnew System::EventHandler(this, &MyForm::cmdRePic_MouseHover);
			// 
			// cmdDelPic
			// 
			this->cmdDelPic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cmdDelPic->Enabled = false;
			this->cmdDelPic->Font = (gcnew System::Drawing::Font(L"Cooper Black", 8));
			this->cmdDelPic->Location = System::Drawing::Point(140, 274);
			this->cmdDelPic->Margin = System::Windows::Forms::Padding(2);
			this->cmdDelPic->Name = L"cmdDelPic";
			this->cmdDelPic->Size = System::Drawing::Size(56, 34);
			this->cmdDelPic->TabIndex = 86;
			this->cmdDelPic->Text = L"_._\r\nU";
			this->cmdDelPic->UseVisualStyleBackColor = true;
			this->cmdDelPic->Click += gcnew System::EventHandler(this, &MyForm::cmdDelPic_Click);
			this->cmdDelPic->MouseHover += gcnew System::EventHandler(this, &MyForm::cmdDelPic_MouseHover);
			// 
			// cmdExit
			// 
			this->cmdExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cmdExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdExit->Location = System::Drawing::Point(1029, 11);
			this->cmdExit->Margin = System::Windows::Forms::Padding(2);
			this->cmdExit->Name = L"cmdExit";
			this->cmdExit->Size = System::Drawing::Size(115, 35);
			this->cmdExit->TabIndex = 145;
			this->cmdExit->Text = L"выход";
			this->cmdExit->UseVisualStyleBackColor = true;
			this->cmdExit->Click += gcnew System::EventHandler(this, &MyForm::cmdExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1156, 547);
			this->Controls->Add(this->cmdExit);
			this->Controls->Add(this->group1Picture);
			this->Controls->Add(this->cbCountry);
			this->Controls->Add(this->splitContainer4);
			this->Controls->Add(this->FileCmds);
			this->Controls->Add(this->mainCmds);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtType);
			this->Controls->Add(this->txtWeight);
			this->Controls->Add(this->txtCount);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №4 Василец А. БЭИ2301 - односвязные списки";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Click);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->FileCmds->ResumeLayout(false);
			this->mainCmds->ResumeLayout(false);
			this->group1Picture->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
PNode Head = nullptr, Tail = nullptr; // Указатели на голову и хвост списка
FilterSet filter;
SortSet sort;
bool AddMode = true;

//Защита от дурака, вещественное число
private:System::Void HandledW(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true; // Запрет ввода

	if (Char::IsDigit(e->KeyChar))
		e->Handled = false;

	if (e->KeyChar == (char)Keys::Back)
		e->Handled = false;

	if (e->KeyChar == ',' && txtWeight->Text != "" && txtWeight->Text->IndexOf(',') == -1)
		e->Handled = false;
}
	   // натуральное число
private:System::Void HandledC(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true; // Запрет ввода

	if (Char::IsDigit(e->KeyChar) && txtCount->Text->Length <= 3)
		e->Handled = false;

	if (e->KeyChar == (char)Keys::Back)
		e->Handled = false;
}
	   // текст
private:System::Void HandledT(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true; // Запрет ввода

	if (Char::IsLetter(e->KeyChar))
		e->Handled = false;

	if (e->KeyChar == (char)Keys::Back)
		e->Handled = false;
}
private: System::Void Prohibit(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true; // Запрет ввода
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	filter.Column = 0;
	filter.Sign1 = "<";
	filter.Sign2 = "<";
	sort.Column = 0;
	sort.Rise = true;

	array <String^>^ contries = { "Россия", "США", "КНР" };
	for (int i = 0; i < contries->Length; i++)
		this->cbCountry->Items->Add(contries[i]);

	array <String^>^ cb = { "По наименованию", "По материалу", "По количеству", 
		"По весу", "По стране - производителю" };
	for (int i = 0; i < cb->Length; i++) {
		this->cbFilter->Items->Add(cb[i]);
		this->cbSortKey->Items->Add(cb[i]);
	}
		
	this->cmdAddPic->Enabled = false;
	this->cmdRePic->Enabled = false;
	this->cmdDelPic->Enabled = false;
	this->pictureBox1->ImageLocation = "default.jpg";
	filter.Column = 0;
}

// выход
private: System::Void cmdExit_Click(System::Object^ sender, System::EventArgs^ e) {
	//delete[]base;
	this->Close();
}

// масштаб
private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	Print(listBox1, Head, filter);
}

// импорт 
private: System::Void cmdFileIn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = OpenTxtFile();
	if (ReadFile(file, Head, Tail)) Print(listBox1, Head, filter);
}

// добавление элемента 
private: System::Void cmdAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		//int SelectedIndex = listBox1->SelectedIndex;
	if (txtName->Text == "" || txtType->Text == "" || txtCount->Text == "" ||
		txtWeight->Text == "" || cbCountry->Text == "") {
		MessageBox::Show("Заполните все поля", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
	String^ name = txtName->Text;
	String^ type = txtType->Text;
	int count = Convert::ToInt32(txtCount->Text);
	double weight = Convert::ToDouble(txtWeight->Text);
	String^ country = cbCountry->Text;
	PNode nnode = CreateNode(Head, name, type, count, weight, country, "");
	if (!nnode) {
		MessageBox::Show("Элемент с таким именемм уже существует", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}

	if (listBox1->SelectedIndex == -1) AddLast(Head, Tail, nnode);
	else if (listBox1->SelectedIndex == 0) AddFirst(Head, Tail, nnode);
	else {
		String^ name = split(listBox1->SelectedItem->ToString(), 0);
		PNode ptr = FindGroup(Tail, name); // "выделеный" узел
		/*if (cbAddMode->SelectedIndex == 0) AddAfter(ptr, nnode);
		if (cbAddMode->SelectedIndex == 1) AddBefore(Head, ptr, nnode);*/
		if (AddMode) AddAfter(Head, Tail, ptr, nnode);
		else AddBefore(Head, Tail, ptr, nnode);
	}
	listBox1->SelectedIndex = -1;
	Print(listBox1, Head, filter);
}

// выделение строки листбокса
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//int str = Convert::ToInt32(split(listBox1->SelectedItem->ToString(), 5));			// номер строки на которую нажали
	//int SelectedIndex = listBox1->SelectedIndex;
	if (listBox1->SelectedIndex == 0 || listBox1->SelectedIndex == -1) {
		this->cmdAddPic->Enabled = false;
		this->cmdRePic->Enabled = false;
		this->cmdDelPic->Enabled = false;
		txtName->Text = "";
		txtType->Text = "";
		txtCount->Text = "";
		txtWeight->Text = "";
		cbCountry->Text = "";
		return;
	}
	String^ name = split(listBox1->SelectedItem->ToString(), 0);		
	PNode ptr = FindGroup(Tail, name); // "выделеный" узел
	try {
		txtName->Text = ptr->Name;
		txtType->Text = ptr->Type;
		txtCount->Text = Convert::ToString(ptr->Count);
		txtWeight->Text = Convert::ToString(ptr->Weight);
		cbCountry->Text = ptr->Counrtry;
	}
	catch (Exception^ ex) { return; }

	this->cmdAddPic->Enabled = true;
	this->cmdRePic->Enabled = true;
	this->cmdDelPic->Enabled = true;


	if (ptr->Image != "") this->pictureBox1->ImageLocation = ptr->Image;
	else this->pictureBox1->ImageLocation = "default.jpg";
}
private: System::Void MyForm_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->SelectedIndex = -1;
}

private: System::Void cmdAdd_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == 1100 || e->KeyChar == 'm') {
		if (AddMode) {
			AddMode = false;
			MessageBox::Show("Режимм добавление элемента изменен\nна <добавление до>", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			AddMode = true;
			MessageBox::Show("Режимм добавление элемента изменен\nна <добавление после>", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
}

// удаление элемента
private: System::Void cmdDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0 || listBox1->SelectedIndex == -1) {
		MessageBox::Show("Выделите строку листбокса", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
	String^ name = split(listBox1->SelectedItem->ToString(), 0);
	PNode ptr = FindGroup(Tail, name); // "выделеный" узел
	DeleteNode(Head, Tail, ptr);
	Print(listBox1, Head, filter);

	txtName->Text = "";
	txtType->Text = "";
	txtWeight->Text = "";
	txtCount->Text = "";
	cbCountry->Text = "";
	this->pictureBox1->ImageLocation = "default.jpg";

}

// сортировка
private: System::Void cmdSort_Click(System::Object^ sender, System::EventArgs^ e) {
	SortList(Head, sort);
	Print(listBox1, Head, filter);
}

	   // Подсказки к кнопкам 
private: System::Void cmdAddPic_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->SetToolTip(cmdAddPic, "Добавить картинку");
}
private: System::Void cmdRePic_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->SetToolTip(cmdRePic, "Заменить картинку");
}
private: System::Void cmdDelPic_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->SetToolTip(cmdDelPic, "Удалить картинку");
}
private: System::Void cmdAdd_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->SetToolTip(cmdAdd, "Для переключения режима добавления нажмите клавишу <M>");
}

// настройки сортировки
private: System::Void cbSortKey_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	sort.Column = cbSortKey->SelectedIndex + 1;
}
private: System::Void cbSortDir_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbSortDir->SelectedIndex == 0) sort.Rise = true;
	else sort.Rise = false;
}

// настройки фильтра
private: System::Void cbSFilter_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	filter.Value = cbSFilter->Text;
}
private: System::Void cbFilter_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	filter.Column = cbFilter->SelectedIndex + 1;
	if (filter.Column == 0) {
		MessageBox::Show("Выделите метод сортировка", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
	cbSFilter->Items->Clear();

	//отчищение полей ввода данных
	txtMin->Text = "";
	txtMax->Text = "";
	cbSFilter->Text = "Веберете поле";

	//перемещение элкментов форм
	if (filter.Column == 1 || filter.Column == 2 || filter.Column == 5) {
		cbSFilter->Visible = true;
		cbSFilter->Top = 52;
		splitContainer1->Visible = false;
		splitContainer1->Top = 90;
	}
	else {
		cbSFilter->Visible = false;
		cbSFilter->Top = 90;
		splitContainer1->Visible = true;
		splitContainer1->Top = 49;
	}

	// заполнение combobox
	PNode q = Head;
	String^ value = "";
	
	while (q) {
		if (filter.Column == 1) value = q->Name;
		if (filter.Column == 2) value = q->Type;
		if (filter.Column == 3) value = Convert::ToString(q->Count);
		if (filter.Column == 4) value = Convert::ToString(q->Weight);
		if (filter.Column == 5) value = q->Counrtry;
		bool povtor = false;
		for (int j = 0; j < cbSFilter->Items->Count; j++)
			if (Convert::ToString(cbSFilter->Items[j]) == value)
				povtor = true;
		if (!povtor)
			cbSFilter->Items->Add(value);
		q = q->next;
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (filter.Column == 3 || filter.Column == 4) {
		if (txtMin->Text == "" || txtMin->Text == "-") {
			filter.MinValue = 0;
			txtMin->Text = "-";
		}
		else filter.MinValue = Convert::ToDouble(txtMin->Text);
		if (txtMax->Text == "" || txtMax->Text == "-") {
			filter.MaxValue = 10 ^ 9;
			txtMax->Text = "-";
		}
		else filter.MaxValue = Convert::ToDouble(txtMax->Text);
		if (txtMin->Text != "-" && txtMax->Text != "-" && (Convert::ToDouble(txtMin->Text) > Convert::ToDouble(txtMax->Text)))
		{
			MessageBox::Show("Минимальное значение больше максимального, проверьте правильность ввода данных", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		filter.Sign1 = cbZ1->Text;
		filter.Sign2 = cbZ2->Text;
	}
	Print(listBox1, Head, filter);
	if (filter.Column != 0) {
		mainCmds->Enabled = false;
		FileCmds->Enabled = false;
	}
	else {
		mainCmds->Enabled = true;
		FileCmds->Enabled = true;
	}
}
private: System::Void cbZ1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	filter.Sign1 = cbZ1->Text;
}
private: System::Void cbZ2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	filter.Sign2 = cbZ2->Text;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	filter = defilter(filter);

	cbFilter->Text = "Выберете поле";
	cbSFilter->Text = "";
	txtMin->Text = "";
	txtMax->Text = "";
	cbZ1->Text = "<";
	cbZ2->Text = "<";

	Print(listBox1, Head, filter);
	if (filter.Column != 0) {
		mainCmds->Enabled = false;
		FileCmds->Enabled = false;
	}
	else {
		mainCmds->Enabled = true;
		FileCmds->Enabled = true;
	}

}
private: System::Void cmdEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0 || listBox1->SelectedIndex == -1) {
		MessageBox::Show("Выделите строку листбокса", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
	String^ str = listBox1->SelectedItem->ToString();
	PNode q = FindGroup(Tail, split(str, 0));
	q->Name = txtName->Text;
	q->Type = txtType->Text;
	q->Count = Convert::ToInt32(txtCount->Text);
	q->Weight = Convert::ToDouble(txtWeight->Text);
	q->Counrtry = cbCountry->Text;
	Print(listBox1, Head, filter);
}

//добавить картинку
private: System::Void cmdAddPic_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = split(listBox1->SelectedItem->ToString(), 0);
	PNode q = FindGroup(Tail, name);
	q->Image = OpenPicture();
	this->pictureBox1->ImageLocation = q->Image;
}
//заменить картинку
private: System::Void cmdRePic_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = split(listBox1->SelectedItem->ToString(), 0);
	PNode q = FindGroup(Tail, name);
	q->Image = OpenPicture();
	this->pictureBox1->ImageLocation = q->Image;
}
//удалить картинку
private: System::Void cmdDelPic_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = split(listBox1->SelectedItem->ToString(), 0);
	PNode q = FindGroup(Tail, name);
	q->Image = "";
	this->pictureBox1->ImageLocation = "default.jpg";
}

// экспорт
private: System::Void cmdFileOut_Click(System::Object^ sender, System::EventArgs^ e) {
	WriteFile(OpenTxtFile(), Head, filter);
}
// дозапись
private: System::Void cmd_add_in_file_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = split(listBox1->SelectedItem->ToString(), 0);
	PNode q = FindGroup(Tail, name);

	StreamWriter^ sw = nullptr;
	try
	{
		StreamWriter^ sw = gcnew StreamWriter(OpenTxtFile(), true);
		sw->Write(String::Format("{0,-14}", q->Name));
		sw->Write(String::Format("{0,-12}", q->Type));
		sw->Write(String::Format("{0,8}", Convert::ToString(q->Count)));
		sw->Write(String::Format("{0,13:f2}", Convert::ToString(q->Weight)) + "\t\t");
		sw->Write(String::Format("{0,-16}", q->Counrtry));
		sw->WriteLine(String::Format("{0,-3}", q->Image));

		sw->Close();	// Закрытие потоков
	}
	// Обработка ошибок создания потоков ввода-вывода
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (sw) sw->Close();
	}
}
};
}
