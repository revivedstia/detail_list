#pragma once
#include<windows.h>					// ��� ������������� ������� system("cls")
using namespace System;
using namespace System::IO;			// ��� ������ � �������
using namespace System::Threading;	// ��� ������������� Sleep()
using namespace System::Windows::Forms;


struct Node {
	int key;				// �������� ������ (����)
	Node* left, * right;	// ��������� �� �������
};
typedef Node* PNode;		// ��������� �� �������



// ��������� �������
bool GetInt(const int MinVal, const int MaxVal, String^ txt, String^ s, int& x);
void EnterMas(int* mas, int len, int a, int b);
void OutPutTB(int* mas, int len, TextBox^ tb);

void AddToTree(PNode& pTree, int insKey);
void MakeTree(PNode& Tree, int* mas, int len);

int* input(int& n, TextBox^ tb);


String^ OpenTxtFile();
bool ReadFile(String^ fileName, TextBox^ tb);

void WriteInFile(String^ fileName, String^ str);
void OutputGen(PNode pTree, String^% buff, int level, bool flag);
void PrintTree(PNode pTree, TextBox^ tb, bool flag);
void WriteTrees(String^ fileName, PNode pTree, bool flag);


void Reshenie(PNode& pTree);
int Heigh(PNode& pTree);
void DeleteInTree(PNode& pTree);
PNode SearchMin(PNode pTree);
PNode InitTree(PNode& Tree, int key);
