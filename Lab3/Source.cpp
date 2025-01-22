#pragma once
#include "Header.h" 

//Формирование массива
void EnterMas(int* mas, int len, int a, int b)
{
	Random^ rand = gcnew Random;
	for (int i = 0; i < len; i++)
		mas[i] = rand->Next(a, b + 1);
	//mas[i] = (i + 4 + a) % b + a;
}

//Ввод целого чила
bool GetInt(const int MinVal, const int MaxVal, String^ txt, String^ s, int& x)
{
	if (txt->Length == 0)
	{
		MessageBox::Show(s, "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	try {
		x = Convert::ToInt32(txt);
	}
	catch (Exception^ ex) {
		MessageBox::Show(s + ex->Message, "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	if (x < MinVal)
	{
		String^ error = "\nЗначение должно быть больше " + Convert::ToString(MinVal);
		MessageBox::Show(s + error, "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	if (x > MaxVal)
	{
		String^ error = "\nЗначение должно быть меньше " + Convert::ToString(MaxVal);
		MessageBox::Show(s + error, "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	return true;
}

bool Chislo(String^ str) {
	try { Convert::ToInt32(str); return true; }
	catch (Exception^ ex) { return false; }
}

//Вывод массива в TextBox
void OutPutTB(int* mas, int len, TextBox^ tb)
{
	tb->Clear();
	for (int i = 0; i < len; i++)
	{
		String^ s = mas[i].ToString();
		//String^ s = String::Format("{0,10:D7}", mas[i]);
		tb->Text += s + "\r\n";
	}
}

// Запись дерева в строковую переменную
const int indent = 6;
void OutputGen(PNode pTree, String^% buff, int level, bool flag)
{
	// Печать дерева с корнем pTree, пока pTree != NULL.
	if (pTree != NULL) {
		
		OutputGen(pTree->right, buff, level + 1, flag);	// Печать правого поддерева узла pTree.
		int n = 6 * level;				// Размер отступа в текущей строке
		
		for (int i = 0; i < n; i++)			// Вставка отступа (из n пробелов) в текущей строке.
			buff += " ";				// Вывод одного пробела
		buff += Convert::ToString(pTree->key);
		if (flag) 
			buff += "(" + Convert::ToString(Heigh(pTree)) + ")";
		buff += "\r\n"; // Вывод поля данных
		
		OutputGen(pTree->left, buff,  level + 1, flag);	// Печать левого поддерева узла pTree.
	}	
}

// Вывод дерева в текстбокс
void PrintTree(PNode pTree, TextBox^ tb, bool flag) {
	String^ res = "";
	OutputGen(pTree, res, 0, flag);
	tb->Text += res;
}

// Вывод деревьев в файл
void WriteTrees(String^ fileName, PNode pTree, bool flag) {
	String^ res = "";
	OutputGen(pTree, res, 0, flag);
	WriteInFile(fileName, "\nИсходное дерево:\n" + res + "\n");
	Reshenie(pTree);
	res = "";
	OutputGen(pTree, res, 0, flag);
	WriteInFile(fileName, "Дерево после обработки:\n" + res + "\n");
}

// запись строки в файл
void WriteInFile(String^ fileName, String^ str) {
	// Объявление и иницализация указателей на потоки
	StreamWriter^ sw = nullptr;
	try
	{
		sw = gcnew StreamWriter(fileName, true);
		sw->Write(str);
		sw->Close();
	}
	// Обработка ошибок создания потоков ввода-вывода
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		/*return;*/
	}
	if (sw) sw->Close();
}




//Ввод массива 
int* input(int& n, TextBox^ tb)
{
	n = tb->Lines->Length - 1;
	if (n == 0)
	{
		MessageBox::Show("Заполните числами текстовое поле", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		tb->Focus();
		return 0;
	}
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		String^ s = tb->Lines[i];
		if (s->Length != 0) *(mas + i) = Convert::ToInt32(s);
	}
	return mas;
}


//  Функция ввода списка из файла
bool ReadFile(String^ fileName, TextBox^ tb) {
	String^ Buffer = ""; // Объявление и инициализация буфера
	try {
		StreamReader^ sr = gcnew StreamReader(fileName);	// Создание потока для чтения файла
		while (Buffer = sr->ReadLine()) {					// Чтение строки из файла
			// Пропускаем пустые строки
			if (Buffer->Length == 0)
				continue;
			// Пропускаем не числовые строки строки
			if (!Chislo(Buffer))
				continue;
			// Добавление входной строки в список формы
			tb->Text += Buffer + "\r\n";
		}
		if (sr) sr->Close();		// Закрытие потока чтения файла
		return true;				// Все строки файла обработаны без ошибок
	}
	catch (Exception^ ex) {			// Обработка ошибок чтения из файла
		MessageBox::Show("Ошибка работы с файлом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		return false;				// Ошибка обработки строк в файле
	}
}


// Открытие txt файла
String^ OpenTxtFile() {
	// Создание объекта диалогового окна OpenFileDialog для входного файла
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	// Настройка свойств диалогового окна
	openFileDialog->Title = "Открытие входного файла";
	openFileDialog->InitialDirectory = "d:\\";
	openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt";
	openFileDialog->FilterIndex = 1;
	openFileDialog->ShowReadOnly = true;
	openFileDialog->ReadOnlyChecked = true;
	openFileDialog->RestoreDirectory = true;
	// Открытие диалогового окна и запись полного пути к выбранному в окне файлу в текстовое поле
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		return openFileDialog->FileName;
	else
		return "";
}

// Добавление узла в дерево
void AddToTree(PNode& pTree, int insKey) { 
	if (!pTree) {				// Если корень равен нулю, то:
		InitTree(pTree, insKey);
		return;
	}
	if (insKey < pTree->key) // Добавление ключа в поддерево:
		AddToTree(pTree->left, insKey); // – в левое;
	else
		AddToTree(pTree->right, insKey); // – в правое.
}

// Заполнение дерева значениями из массива
void MakeTree(PNode& pTree, int* mas, int len) {
	for (int i = 1; i < len; i++) 
		AddToTree(pTree, mas[i]); 
}


// Основной обход дерева
void Reshenie(PNode& pTree) {
	if (!pTree) return;		
	if (abs(Heigh(pTree->left) - Heigh(pTree->right)) == 2)
		DeleteInTree(pTree);
	Reshenie(pTree->left);	
	Reshenie(pTree->right);

}


// Высота дерева
int Heigh(PNode& pTree) {
	if (pTree == NULL || (pTree->left == NULL && pTree->right == NULL)) 
		return 0;
	else if (Heigh(pTree->left) > Heigh(pTree->right))
		return Heigh(pTree->left) + 1;
	else
		return Heigh(pTree->right) + 1;
}

// Удаление узла из дерева
void DeleteInTree(PNode& pTree) {
	if (pTree->left != NULL && pTree->right != NULL) {
		pTree->key = SearchMin(pTree->right)->key;
		DeleteInTree(pTree->right);
	}
	else {
		if (pTree->left != NULL)		// Узел  имеет только левого потомка.
			pTree = pTree->left;
		else if (pTree->right != NULL)	// Узел  имеет только правого потомка.
			pTree = pTree->right;
		else
			pTree = NULL;
	}
}

// Поиск минимального элемента.
PNode SearchMin(PNode pTree) { 
	if (pTree->left == NULL) return pTree;
	return SearchMin(pTree->left);
}

PNode InitTree(PNode& Tree, int key) {
	Tree = new Node;		// Выделение памяти под вершину.
	Tree->key = key;		// Запись данных (ключа).
	Tree->left = NULL;
	Tree->right = NULL;

	return Tree;
}

