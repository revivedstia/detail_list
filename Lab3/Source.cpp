#pragma once
#include "Header.h" 

//������������ �������
void EnterMas(int* mas, int len, int a, int b)
{
	Random^ rand = gcnew Random;
	for (int i = 0; i < len; i++)
		mas[i] = rand->Next(a, b + 1);
	//mas[i] = (i + 4 + a) % b + a;
}

//���� ������ ����
bool GetInt(const int MinVal, const int MaxVal, String^ txt, String^ s, int& x)
{
	if (txt->Length == 0)
	{
		MessageBox::Show(s, "������ �����", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	try {
		x = Convert::ToInt32(txt);
	}
	catch (Exception^ ex) {
		MessageBox::Show(s + ex->Message, "������ �����", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	if (x < MinVal)
	{
		String^ error = "\n�������� ������ ���� ������ " + Convert::ToString(MinVal);
		MessageBox::Show(s + error, "������ �����", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	if (x > MaxVal)
	{
		String^ error = "\n�������� ������ ���� ������ " + Convert::ToString(MaxVal);
		MessageBox::Show(s + error, "������ �����", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	return true;
}

bool Chislo(String^ str) {
	try { Convert::ToInt32(str); return true; }
	catch (Exception^ ex) { return false; }
}

//����� ������� � TextBox
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

// ������ ������ � ��������� ����������
const int indent = 6;
void OutputGen(PNode pTree, String^% buff, int level, bool flag)
{
	// ������ ������ � ������ pTree, ���� pTree != NULL.
	if (pTree != NULL) {
		
		OutputGen(pTree->right, buff, level + 1, flag);	// ������ ������� ��������� ���� pTree.
		int n = 6 * level;				// ������ ������� � ������� ������
		
		for (int i = 0; i < n; i++)			// ������� ������� (�� n ��������) � ������� ������.
			buff += " ";				// ����� ������ �������
		buff += Convert::ToString(pTree->key);
		if (flag) 
			buff += "(" + Convert::ToString(Heigh(pTree)) + ")";
		buff += "\r\n"; // ����� ���� ������
		
		OutputGen(pTree->left, buff,  level + 1, flag);	// ������ ������ ��������� ���� pTree.
	}	
}

// ����� ������ � ���������
void PrintTree(PNode pTree, TextBox^ tb, bool flag) {
	String^ res = "";
	OutputGen(pTree, res, 0, flag);
	tb->Text += res;
}

// ����� �������� � ����
void WriteTrees(String^ fileName, PNode pTree, bool flag) {
	String^ res = "";
	OutputGen(pTree, res, 0, flag);
	WriteInFile(fileName, "\n�������� ������:\n" + res + "\n");
	Reshenie(pTree);
	res = "";
	OutputGen(pTree, res, 0, flag);
	WriteInFile(fileName, "������ ����� ���������:\n" + res + "\n");
}

// ������ ������ � ����
void WriteInFile(String^ fileName, String^ str) {
	// ���������� � ������������ ���������� �� ������
	StreamWriter^ sw = nullptr;
	try
	{
		sw = gcnew StreamWriter(fileName, true);
		sw->Write(str);
		sw->Close();
	}
	// ��������� ������ �������� ������� �����-������
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		/*return;*/
	}
	if (sw) sw->Close();
}




//���� ������� 
int* input(int& n, TextBox^ tb)
{
	n = tb->Lines->Length - 1;
	if (n == 0)
	{
		MessageBox::Show("��������� ������� ��������� ����", "������",
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


//  ������� ����� ������ �� �����
bool ReadFile(String^ fileName, TextBox^ tb) {
	String^ Buffer = ""; // ���������� � ������������� ������
	try {
		StreamReader^ sr = gcnew StreamReader(fileName);	// �������� ������ ��� ������ �����
		while (Buffer = sr->ReadLine()) {					// ������ ������ �� �����
			// ���������� ������ ������
			if (Buffer->Length == 0)
				continue;
			// ���������� �� �������� ������ ������
			if (!Chislo(Buffer))
				continue;
			// ���������� ������� ������ � ������ �����
			tb->Text += Buffer + "\r\n";
		}
		if (sr) sr->Close();		// �������� ������ ������ �����
		return true;				// ��� ������ ����� ���������� ��� ������
	}
	catch (Exception^ ex) {			// ��������� ������ ������ �� �����
		MessageBox::Show("������ ������ � ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);

		return false;				// ������ ��������� ����� � �����
	}
}


// �������� txt �����
String^ OpenTxtFile() {
	// �������� ������� ����������� ���� OpenFileDialog ��� �������� �����
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	// ��������� ������� ����������� ����
	openFileDialog->Title = "�������� �������� �����";
	openFileDialog->InitialDirectory = "d:\\";
	openFileDialog->Filter = "��������� ����� (*.txt)|*.txt";
	openFileDialog->FilterIndex = 1;
	openFileDialog->ShowReadOnly = true;
	openFileDialog->ReadOnlyChecked = true;
	openFileDialog->RestoreDirectory = true;
	// �������� ����������� ���� � ������ ������� ���� � ���������� � ���� ����� � ��������� ����
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		return openFileDialog->FileName;
	else
		return "";
}

// ���������� ���� � ������
void AddToTree(PNode& pTree, int insKey) { 
	if (!pTree) {				// ���� ������ ����� ����, ��:
		InitTree(pTree, insKey);
		return;
	}
	if (insKey < pTree->key) // ���������� ����� � ���������:
		AddToTree(pTree->left, insKey); // � � �����;
	else
		AddToTree(pTree->right, insKey); // � � ������.
}

// ���������� ������ ���������� �� �������
void MakeTree(PNode& pTree, int* mas, int len) {
	for (int i = 1; i < len; i++) 
		AddToTree(pTree, mas[i]); 
}


// �������� ����� ������
void Reshenie(PNode& pTree) {
	if (!pTree) return;		
	if (abs(Heigh(pTree->left) - Heigh(pTree->right)) == 2)
		DeleteInTree(pTree);
	Reshenie(pTree->left);	
	Reshenie(pTree->right);

}


// ������ ������
int Heigh(PNode& pTree) {
	if (pTree == NULL || (pTree->left == NULL && pTree->right == NULL)) 
		return 0;
	else if (Heigh(pTree->left) > Heigh(pTree->right))
		return Heigh(pTree->left) + 1;
	else
		return Heigh(pTree->right) + 1;
}

// �������� ���� �� ������
void DeleteInTree(PNode& pTree) {
	if (pTree->left != NULL && pTree->right != NULL) {
		pTree->key = SearchMin(pTree->right)->key;
		DeleteInTree(pTree->right);
	}
	else {
		if (pTree->left != NULL)		// ����  ����� ������ ������ �������.
			pTree = pTree->left;
		else if (pTree->right != NULL)	// ����  ����� ������ ������� �������.
			pTree = pTree->right;
		else
			pTree = NULL;
	}
}

// ����� ������������ ��������.
PNode SearchMin(PNode pTree) { 
	if (pTree->left == NULL) return pTree;
	return SearchMin(pTree->left);
}

PNode InitTree(PNode& Tree, int key) {
	Tree = new Node;		// ��������� ������ ��� �������.
	Tree->key = key;		// ������ ������ (�����).
	Tree->left = NULL;
	Tree->right = NULL;

	return Tree;
}

