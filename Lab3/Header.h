#pragma once
#include<windows.h>					// ƒл€ использовани€ функции system("cls")
using namespace System;
using namespace System::IO;			// ƒл€ работы с файлами
using namespace System::Threading;	// ƒл€ использовани€ Sleep()
using namespace System::Windows::Forms;


value struct Node {
	String^ Name;				// Ќаименование			Ц строка
	String^ Type;				// “ип					Ц строка
	int Count;					//  оличество			Ц беззнаковое целое
	double Weight;				// ¬ес					- double 	
	String^ Counrtry;			// —трана-производитель	Ц строка
	String^ Image;				// јдрес картинки		Ц строка
	Node^ next;					// ”казатель на следующий узел
	Node^ prev;					// ”казатель на предыдущий узел

};
typedef Node^ PNode;			// “ип данных: указатель на узел

value struct SortSet {			// ќбъ€вление структуры "настройки сотрировки"
	int Column;					// характеристика 0-empty; 1-name; 2-type; 3-count; 4-weight; 5-country
	bool Rise;					// пор€док по возрастанию				
};

value struct FilterSet {		// ќбъ€вление структуры "настройки фильтра"
	int Column;					// характеристика 0-empty; 1-name; 2-type; 3-count; 4-weight; 5-country
	double MaxValue;			// ћаксимальное значение - double 					
	double MinValue;			// ћинимальное значение  - double 	
	String^ Sign1;				// перывый знак			 Ц строка
	String^ Sign2;				// второй знак			 Ц строка
	String^ Value;				// текстовое зачение	 Ц строка
};

// прототипы функций
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

