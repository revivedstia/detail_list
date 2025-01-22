#pragma once
#include "Header.h"
#include <iostream>
#include <fstream>

namespace Lab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	using namespace std;
	using namespace Microsoft::VisualBasic;

	int f = 0;  // последняя клавиша: 0 - Enter,  1 - "-", 2 - цифра


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


















	private: System::Windows::Forms::GroupBox^ FileCmds;

	private: System::Windows::Forms::Button^ cmdFileIn;
	private: System::Windows::Forms::Button^ cmdFileOut;





















	private: System::Windows::Forms::Button^ cmdExit;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ cmdCreatMass;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ cmdRun;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtBefore;
	private: System::Windows::Forms::TextBox^ txtAfter;
	private: System::Windows::Forms::TextBox^ txtMas;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ cmdClear;







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
			this->FileCmds = (gcnew System::Windows::Forms::GroupBox());
			this->cmdFileIn = (gcnew System::Windows::Forms::Button());
			this->cmdFileOut = (gcnew System::Windows::Forms::Button());
			this->cmdExit = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->cmdCreatMass = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmdRun = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtBefore = (gcnew System::Windows::Forms::TextBox());
			this->txtAfter = (gcnew System::Windows::Forms::TextBox());
			this->txtMas = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->cmdClear = (gcnew System::Windows::Forms::Button());
			this->FileCmds->SuspendLayout();
			this->SuspendLayout();
			// 
			// FileCmds
			// 
			this->FileCmds->Controls->Add(this->cmdFileIn);
			this->FileCmds->Controls->Add(this->cmdFileOut);
			this->FileCmds->Location = System::Drawing::Point(25, 81);
			this->FileCmds->Name = L"FileCmds";
			this->FileCmds->Size = System::Drawing::Size(127, 103);
			this->FileCmds->TabIndex = 141;
			this->FileCmds->TabStop = false;
			this->FileCmds->Text = L"Работа с файлами";
			// 
			// cmdFileIn
			// 
			this->cmdFileIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdFileIn->Location = System::Drawing::Point(6, 21);
			this->cmdFileIn->Margin = System::Windows::Forms::Padding(2);
			this->cmdFileIn->Name = L"cmdFileIn";
			this->cmdFileIn->Size = System::Drawing::Size(108, 35);
			this->cmdFileIn->TabIndex = 67;
			this->cmdFileIn->Text = L"Импорт";
			this->cmdFileIn->UseVisualStyleBackColor = true;
			this->cmdFileIn->Click += gcnew System::EventHandler(this, &MyForm::cmdFileIn_Click);
			// 
			// cmdFileOut
			// 
			this->cmdFileOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdFileOut->Location = System::Drawing::Point(6, 60);
			this->cmdFileOut->Margin = System::Windows::Forms::Padding(2);
			this->cmdFileOut->Name = L"cmdFileOut";
			this->cmdFileOut->Size = System::Drawing::Size(108, 35);
			this->cmdFileOut->TabIndex = 68;
			this->cmdFileOut->Text = L"Экспорт";
			this->cmdFileOut->UseVisualStyleBackColor = true;
			this->cmdFileOut->Click += gcnew System::EventHandler(this, &MyForm::cmdFileOut_Click);
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
			// cmdCreatMass
			// 
			this->cmdCreatMass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdCreatMass->Location = System::Drawing::Point(169, 102);
			this->cmdCreatMass->Margin = System::Windows::Forms::Padding(2);
			this->cmdCreatMass->Name = L"cmdCreatMass";
			this->cmdCreatMass->Size = System::Drawing::Size(206, 35);
			this->cmdCreatMass->TabIndex = 69;
			this->cmdCreatMass->Text = L"Генерация массива";
			this->cmdCreatMass->UseVisualStyleBackColor = true;
			this->cmdCreatMass->Click += gcnew System::EventHandler(this, &MyForm::cmdCreatMass_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(26, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(750, 48);
			this->label1->TabIndex = 147;
			this->label1->Text = L"Задание: удалить все вершины, у которых высота левого поддерева отличается \r\nот в"
				L"ысоты правого поддерева на 2.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(39, 225);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 24);
			this->label2->TabIndex = 148;
			this->label2->Text = L"Исходный массив";
			// 
			// cmdRun
			// 
			this->cmdRun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdRun->Location = System::Drawing::Point(169, 141);
			this->cmdRun->Margin = System::Windows::Forms::Padding(2);
			this->cmdRun->Name = L"cmdRun";
			this->cmdRun->Size = System::Drawing::Size(206, 35);
			this->cmdRun->TabIndex = 149;
			this->cmdRun->Text = L"Обработка массива";
			this->cmdRun->UseVisualStyleBackColor = true;
			this->cmdRun->Click += gcnew System::EventHandler(this, &MyForm::cmdRun_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(298, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 24);
			this->label3->TabIndex = 150;
			this->label3->Text = L"Исходное дерево";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(698, 225);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 24);
			this->label4->TabIndex = 151;
			this->label4->Text = L"Дерево после обработки";
			// 
			// txtBefore
			// 
			this->txtBefore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtBefore->Location = System::Drawing::Point(297, 252);
			this->txtBefore->Multiline = true;
			this->txtBefore->Name = L"txtBefore";
			this->txtBefore->Size = System::Drawing::Size(317, 261);
			this->txtBefore->TabIndex = 152;
			// 
			// txtAfter
			// 
			this->txtAfter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtAfter->Location = System::Drawing::Point(701, 254);
			this->txtAfter->Multiline = true;
			this->txtAfter->Name = L"txtAfter";
			this->txtAfter->Size = System::Drawing::Size(317, 259);
			this->txtAfter->TabIndex = 153;
			// 
			// txtMas
			// 
			this->txtMas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->txtMas->Location = System::Drawing::Point(38, 252);
			this->txtMas->Multiline = true;
			this->txtMas->Name = L"txtMas";
			this->txtMas->Size = System::Drawing::Size(172, 261);
			this->txtMas->TabIndex = 154;
			this->txtMas->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Handled);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->checkBox1->Location = System::Drawing::Point(397, 105);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(314, 28);
			this->checkBox1->TabIndex = 155;
			this->checkBox1->Text = L"Показать высоты поддеревьев";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// cmdClear
			// 
			this->cmdClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cmdClear->Location = System::Drawing::Point(397, 141);
			this->cmdClear->Margin = System::Windows::Forms::Padding(2);
			this->cmdClear->Name = L"cmdClear";
			this->cmdClear->Size = System::Drawing::Size(206, 35);
			this->cmdClear->TabIndex = 156;
			this->cmdClear->Text = L"Отчистить формы";
			this->cmdClear->UseVisualStyleBackColor = true;
			this->cmdClear->Click += gcnew System::EventHandler(this, &MyForm::cmdClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1156, 554);
			this->Controls->Add(this->cmdClear);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->txtMas);
			this->Controls->Add(this->txtAfter);
			this->Controls->Add(this->txtBefore);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmdRun);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmdCreatMass);
			this->Controls->Add(this->cmdExit);
			this->Controls->Add(this->FileCmds);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №5 Василец А. БЭИ2301 - деревья";
			this->FileCmds->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
bool ShowHeigh = false;

private: System::Void cmdExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private:System::Void Handled(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true; // Запрет ввода
	String^ s = "";

	int line = txtMas->Lines->Length - 1;
	if (f != 0)
		s = txtMas->Lines[line];

	if (e->KeyChar == (char)Keys::Back)
	{
		e->Handled = false;
	}
	if (Char::IsDigit(e->KeyChar))
	{
		e->Handled = false;
		f = 2;
	}
	if (e->KeyChar == (char)Keys::Enter && f == 2)
	{
		e->Handled = false;
		f = 0;
	}
	if (e->KeyChar == '-' && s == "")
	{
		e->Handled = false;
		f = 1;
	}
}

private: System::Void cmdCreatMass_Click(System::Object^ sender, System::EventArgs^ e) {
	txtMas->Clear();

	int const n = pow(10, 5);
	int len, a, b;

	String^ ls = Interaction::InputBox("Введите количество элементов в массиве", "Ввод", "", -1, -1);
	if (!GetInt(1, n, ls, "Введите количество элементов массива (больше нуля)", len))return;

	String^ as = Interaction::InputBox("Введите нижнюю границу значений массива", "Ввод", "", -1, -1);
	if (!GetInt(-n, n, as, "Введите нижнюю границу значений массива", a))return;

	String^ bs = Interaction::InputBox("Введите верхнюю границу значений массива a<=b", "Ввод", "", -1, -1);
	if (!GetInt(a, n, bs, "Введите верхнюю границу значений массива (меньше нижней границы)", b))return;

	int* mas = new int[len];

	EnterMas(mas, len, a, b);
	OutPutTB(mas, len, txtMas);
	cmdRun_Click(sender, e);
}

private: System::Void cmdFileIn_Click(System::Object^ sender, System::EventArgs^ e) {
	txtMas->Clear();
	txtBefore->Clear();
	txtAfter->Clear();
	String^ file = OpenTxtFile();
	if (ReadFile(file, txtMas))
		cmdRun_Click(sender, e);
}

private: System::Void cmdRun_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtMas->Text == "") {
		MessageBox::Show("Введите массив числе", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	txtBefore->Clear();
	txtAfter->Clear();
	
	int len = 0;
	int* mas = input(len, txtMas);
	if (!mas) return;

	PNode Tree;
	InitTree(Tree, mas[0]);

	for (int i = 1; i < len; i++)	// Добавление ключа из массива.
		AddToTree(Tree, mas[i]);	

	PrintTree(Tree, txtBefore, ShowHeigh);
	Reshenie(Tree);
	PrintTree(Tree, txtAfter, ShowHeigh);

}


private: System::Void cmdFileOut_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = OpenTxtFile();

	int len = 0;
	int* mas = input(len, txtMas);
	if (!mas) return;

	PNode Tree;
	InitTree(Tree, mas[0]);

	for (int i = 1; i < len; i++)	// Добавление ключа из массива.
		AddToTree(Tree, mas[i]);	

	// вывод массива
	WriteInFile(fileName, "Исхоный массив: \n");
	for (int i = 0; i < len; i++)
		WriteInFile(fileName, Convert::ToString(mas[i]) + "  ");
	// вывод деревьев
	WriteTrees(fileName, Tree, ShowHeigh);

}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)  ShowHeigh = true;
	else ShowHeigh = false;
	cmdRun_Click(sender, e);
}
private: System::Void cmdClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtMas->Clear();
	txtBefore->Clear();
	txtAfter->Clear();
}
};
}
