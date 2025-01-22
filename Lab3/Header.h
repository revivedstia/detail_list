#pragma once
#include<windows.h>					// ��� ������������� ������� system("cls")
using namespace System;
using namespace System::IO;			// ��� ������ � �������
using namespace System::Threading;	// ��� ������������� Sleep()
using namespace System::Windows::Forms;


value struct Node {
	String^ Name;				// ������������			� ������
	String^ Type;				// ���					� ������
	int Count;					// ����������			� ����������� �����
	double Weight;				// ���					- double 	
	String^ Counrtry;			// ������-�������������	� ������
	String^ Image;				// ����� ��������		� ������
	Node^ next;					// ��������� �� ��������� ����
	Node^ prev;					// ��������� �� ���������� ����

};
typedef Node^ PNode;			// ��� ������: ��������� �� ����

value struct SortSet {			// ���������� ��������� "��������� ����������"
	int Column;					// �������������� 0-empty; 1-name; 2-type; 3-count; 4-weight; 5-country
	bool Rise;					// ������� �� �����������				
};

value struct FilterSet {		// ���������� ��������� "��������� �������"
	int Column;					// �������������� 0-empty; 1-name; 2-type; 3-count; 4-weight; 5-country
	double MaxValue;			// ������������ �������� - double 					
	double MinValue;			// ����������� ��������  - double 	
	String^ Sign1;				// ������� ����			 � ������
	String^ Sign2;				// ������ ����			 � ������
	String^ Value;				// ��������� �������	 � ������
};

// ��������� �������
PNode CreateNode(PNode Head, String^ Name, String^ Type, int Count, double Weight, String^ Counrtry, String^ Image);

//PNode CreateNode(String^ Name, String^ Type, int Count, double Weight, String^ Counrtry, String^ Image);
void AddFirst(PNode% Head, PNode% Tail, PNode NewNode);
void AddAfter(PNode% Head, PNode% Tail, PNode p, PNode NewNode);
void AddBefore(PNode% Head, PNode% Tail, PNode p, PNode NewNode);
void AddLast(PNode% Head, PNode% Tail, PNode NewNode);
PNode FindGroup(PNode Tail, String^ name);
void DeleteNode(PNode% Head, PNode% Tail, PNode OldNode);

void SortList(PNode Head, SortSet filter);
void Swap(PNode% p1, PNode% p2);


//void ClearList(PNode % Head, PNode % Curr);
void Print(ListBox^ lb, PNode% Head, FilterSet FilterKeys);
bool Filter(PNode% detail, FilterSet FilterKeys);
bool CompareNodes(PNode p1, PNode p2, SortSet filter);
FilterSet defilter(FilterSet FilterKeys);

	
String^ DelSpace(String ^ str);
String^ mul(String^ st, int c);
String^ split(String^ s, int ind);

//bool ProcString(String ^ Line, PNode % Head);
bool WriteFile(String^ fileName, PNode% Head, FilterSet filter);
bool ReadFile(String^ fileName, PNode% Head, PNode% Tail);

String^ OpenTxtFile();
String^ OpenPicture();

