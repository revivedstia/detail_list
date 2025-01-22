#include "Header.h" 


// 1. ������� �������� �������� ������
PNode CreateNode(PNode Head,String^ Name, String^ Type, int Count, double Weight, String^ Counrtry, String^ Image) {
	if (FindGroup(Head, Name))
		return nullptr;
	PNode NewNode = gcnew Node; // ��������� �� ����� ����
	NewNode->Name = Name;
	NewNode->Type = Type;
	NewNode->Count = Count;
	NewNode->Weight = Weight;
	NewNode->Counrtry = Counrtry;
	NewNode->Image = Image;
	NewNode->next = nullptr; // ���������� ���� ���� ���
	NewNode->prev = nullptr; // ����������� ���� ���� ���

	return NewNode;			 // ������� ������ ����
}

// 2. ������� ���������� ������ ���� � ������ ������
void AddFirst(PNode% Head, PNode% Tail, PNode NewNode) {
	NewNode->next = Head;
	NewNode->prev = nullptr;
	if (Head)
		Head->prev = NewNode;
	Head = NewNode;
	if (!Tail)
		Tail = Head;
}

// 3. ������� ���������� ������ ���� ����� ���������
void AddAfter(PNode% Head, PNode% Tail, PNode p, PNode NewNode) {
	if (!p->next)
		AddLast(Head, Tail, NewNode);	// ������� � ����� ������
	else {
		NewNode->next = p->next;		// ������ ��������� ������ ����
		NewNode->prev = p;
		(p->next)->prev = NewNode;		// ������ ��������� �������� �����
		p->next = NewNode;
	}
}


// 4. ������� ���������� ������ ���� ����� ��������
void AddBefore(PNode% Head, PNode% Tail, PNode p, PNode NewNode) {
	if (!p->prev)
		AddFirst(Head, Tail, NewNode);	// ������� � ������ ������
	else {
		NewNode->prev = p->prev;		// ������ ��������� ������ ����
		NewNode->next = p;
		(p->prev)->next = NewNode;		// ������ ��������� �������� �����
		p->prev = NewNode;
	}
}

// 5. ������� ���������� ������ ���� � ����� ������
void AddLast(PNode% Head, PNode% Tail, PNode NewNode) {
	NewNode->prev = Tail;
	NewNode->next = nullptr;
	if (Tail)
		Tail->next = NewNode;
	Tail = NewNode;
	if (!Head)
		Head = Tail;
}



// 7. ������� ������ ���� � ������
PNode FindGroup(PNode Tail, String^ name) {
	PNode q = Tail;			// �������� � ������ ������
	while (q && q->Name != name) // ���� �� nullptr � �� �����,
		q = q->prev;		// ��������� � ����������� ����.
	return q;				// ������� ��������� �� ��������� ���� ��� nullptr
}

// 8a. ������� ������ ��� ����������
void Swap(PNode % p1, PNode % p2) {
	String^ tempName = p1->Name;
	p1->Name = p2->Name;
	p2->Name = tempName;

	String^ tempType = p1->Type;
	p1->Type = p2->Type;
	p2->Type = tempType;

	int tempCount = p1->Count;
	p1->Count = p2->Count;
	p2->Count = tempCount;

	double tempWeight = p1->Weight;
	p1->Weight = p2->Weight;
	p2->Weight = tempWeight;

	String^ tempCounrtry = p1->Counrtry;
	p1->Counrtry = p2->Counrtry;
	p2->Counrtry = tempCounrtry;

}

// 8.	������� ���������� ������
void SortList(PNode Head, SortSet sort) {
	// ���� ������ ���� ��� �������� ���� ����,  �� ������ ������ �� �����.
	if (!Head || !(Head->next)) return;

	// ���������� � ������������� ����������
	PNode ptr = nullptr; // ��������� �� ������� ����
	bool swapped = true; // ������� ������ �����

	while (swapped) {			// ���� ���������� ����� ����������
		swapped = false;		// ���������� ������� ������.
		ptr = Head;				// �������� �������� ������ � ������,
		while (ptr->next) {		// ���� ���� ��������� ����.
			// ���� ������� �� �����������, ��������� ����� ����������.
			if (CompareNodes(ptr, ptr->next, sort)) {
				Swap(ptr, ptr->next);	// ����� ������� ������
				swapped = true;			// ��������� �������� ������
			}
			ptr = ptr->next;			// ������� � ���������� ����
		}
	}
}

// 9. ������� �������� ���� �� ������
void DeleteNode(PNode% Head, PNode% Tail, PNode OldNode) {
	if (OldNode == Head) {
		Head = OldNode->next;	// ������� ������ �������
		if (Head)
			Head->prev = nullptr;
		else
			Tail = nullptr;		// ������� ������������ �������
	}
	else {
		(OldNode->prev)->next = OldNode->next;
		if (OldNode->next)
			(OldNode->next)->prev = OldNode->prev;
		else
			Tail = nullptr;		// ������� ��������� �������
	}
	delete OldNode;
}


// 12. ������� ���������� ������ � ����
bool WriteFile(String^ fileName, PNode% Head, FilterSet filter) {
	String^ Buffer = "";	// ���������� � ������������� ������
	PNode q = Head;			// ��������� q - �� ������ ������
	try { 
		StreamWriter^ sw = gcnew StreamWriter(fileName, true);	// �������� ������ ��� ������ � ����
		sw->WriteLine("\n������������  ��������     ��� - ��  ��� ������(�) 	������ - ������������� �����������");
		while (q) {				
			if (Filter(q, filter)) {
				sw->Write(String::Format("{0,-14}", q->Name));
				sw->Write(String::Format("{0,-12}", q->Type));
				sw->Write(String::Format("{0,8}", Convert::ToString(q->Count)));
				sw->Write(String::Format("{0,13:f2}", Convert::ToString(q->Weight)) + "\t\t");
				sw->Write(String::Format("{0,-23}", q->Counrtry));
				sw->WriteLine(String::Format("{0,-10}", q->Image));
			}
	
			q = q->next;		// ������� � ���������� ���� ������
		}
		if (sw) sw->Close();	// �������� ������ ������ � ����
		return true;			// ��� ������ ���������� ��� ������
	}
	catch (Exception^ ex) {		// ��������� ������ ������ � ����
		MessageBox::Show("������ ������ � ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}


bool ProcString(String^ Line, PNode% Head, PNode% Tail) {
	Line = DelSpace(Line);				
	array <TCHAR>^ dlm = { ' ' };		
	array <String^>^ words = Line->Split(dlm);
	if (!(words->Length == 5 || words->Length == 6)) {
		MessageBox::Show("������ - ������������ ���������� ���� � ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);

		return false;
	}

	if (Convert::ToInt32(words[2]) <= 0 || Convert::ToDouble(words[3]) <= 0) {
		MessageBox::Show("������ - ������������ ������ �����", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);

		return false;
	}
	PNode NextNode = nullptr;
	if (words->Length == 5)
		NextNode = CreateNode(Head, words[0], words[1], Convert::ToInt32(words[2]), 
			Convert::ToDouble(words[3]), words[4], "");
	if (words->Length == 6)
		NextNode = CreateNode(Head, words[0], words[1], Convert::ToInt32(words[2]),
			Convert::ToDouble(words[3]), words[4], words[5]);
	if (!NextNode) return false;
	AddLast(Head, Tail, NextNode);		// ���������� ���������� ���� � ����� �������
	return true;
}

// 13. ������� ����� ������ �� �����
bool ReadFile(String^ fileName, PNode% Head, PNode% Tail) {
	String^ Buffer = ""; // ���������� � ������������� ������
	try {
		StreamReader^ sr = gcnew StreamReader(fileName);	// �������� ������ ��� ������ �����
		while (Buffer = sr->ReadLine()) {					// ������ ������ �� �����
			if (Buffer->Length == 0) continue;				// ������� ������ �����
			
			if (!ProcString(Buffer, Head, Tail))	// ����� ������� ��������� ������
				return false;						// ������ ��������� ������
		}
		if (sr) sr->Close();		// �������� ������ ������ �����
		return true;				// ��� ������ ����� ���������� ��� ������
	}
	catch (Exception^ ex) {			// ��������� ������ ������ �� �����
		MessageBox::Show("������ ������ � ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);

		return false;				// ������ ��������� ����� � �����
	}
}


// ��������� ����� �� ���������� �������; p1>p2
bool CompareNodes(PNode p1, PNode p2, SortSet sort) { 
	bool f = false;
	if (sort.Column == 1 && ((sort.Rise && p1->Name->Compare(p1->Name, p2->Name) > 0) ||
		(!sort.Rise && p1->Name->Compare(p1->Name, p2->Name) < 0)))
		f = true;
	if (sort.Column == 2 && ((sort.Rise && p1->Name->Compare(p1->Type, p2->Type) > 0) ||
		(!sort.Rise && p1->Name->Compare(p1->Type, p2->Type) < 0)))
		f = true;
	if (sort.Column == 3 && ((sort.Rise && p1->Count > p2->Count) ||
		(!sort.Rise && p1->Count < p2->Count)))
		f = true;
	if (sort.Column == 4 && ((sort.Rise && p1->Weight > p2->Weight) || 
		(!sort.Rise && p1->Weight < p2->Weight)))
		f = true;
	if (sort.Column == 5 && ((sort.Rise && p1->Counrtry->Compare(p1->Counrtry, p2->Counrtry) > 0) ||
		(!sort.Rise && p1->Counrtry->Compare(p1->Counrtry, p2->Counrtry) < 0)))
		f = true;
	return f;		
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

//�������� ��������
String^ OpenPicture() {
	// �������� ������� ����������� ���� OpenFileDialog ��� �������� �����
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	// ��������� ������� ����������� ����
	openFileDialog->Title = "����� �����������";
	openFileDialog->InitialDirectory = "d:\\";
	openFileDialog->Filter = "����������� (*.jpg)|*.jpg|(*.png)|*.png|(*.jpeg)|*.jpeg";
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


void Print(ListBox^ lb, PNode% Head, FilterSet FilterKeys) {
	lb->Items->Clear();
	int n = (lb->Width / 9 - 67) / 4 - 2;	
	String^ p = mul(" ", n);
	// -14 -12 5 14:f2 -22
	lb->Items->Add("������������  " + p + "��������    " + p + "���-��  " + p + "��� ������(�)  " + p + "������ - �������������" + "\n");
	
	PNode ptr = Head;
	while (ptr) {		// ���� ���� ��������� ����.
		if (Filter(ptr, FilterKeys)) {
			String^ str = String::Format("{0," + (-14 - n) + " }", ptr->Name) +
				String::Format("{0," + (-10 - n) + " }", ptr->Type) +
				String::Format("{0," + (8) + " }", ptr->Count) +
				String::Format("{0," + (13 + n) + ":f2}", ptr->Weight) + mul(" ", n + 4) +
				String::Format("{0," + (-22 - n) + " }", ptr->Counrtry) + "\n";
			lb->Items->Add(str);
		}
		ptr = ptr->next;
	}
}

bool Filter(PNode% detail, FilterSet FilterKeys) {
	if (FilterKeys.Column == 0) return true;
	else if (FilterKeys.Column == 1 && detail->Name == FilterKeys.Value ||
		FilterKeys.Column == 2 && detail->Type == FilterKeys.Value ||
		FilterKeys.Column == 5 && detail->Counrtry == FilterKeys.Value) {
		return true;
	}
	else {
		String^ z1 = FilterKeys.Sign1;
		String^ z2 = FilterKeys.Sign2;
		double min = FilterKeys.MinValue;
		double max = FilterKeys.MaxValue;
		double Value = 0;
		if (FilterKeys.Column == 3)
			Value = detail->Count;
		if (FilterKeys.Column == 4)
			Value = detail->Weight;
		if (z1 == "<" && z2 == "<" && min < Value && Value < max ||
			z1 == "<" && z2 == "<=" && min < Value && Value <= max ||
			z1 == "<=" && z2 == "<" && min <= Value && Value < max ||
			z1 == "<=" && z2 == "<=" && min <= Value && Value <= max)
			return true;
	}
	return false;
}

FilterSet defilter(FilterSet FilterKeys) {
	FilterKeys.Column = 0;
	FilterKeys.Value = "";
	FilterKeys.MaxValue = 0;
	FilterKeys.MinValue = 0;
	FilterKeys.Sign1 = "";
	FilterKeys.Sign2 = "";

	return FilterKeys;
}

// ��������������� �������
String^ mul(String ^ st, int c) {
	String^ s = "";
	for (int i = 0; i < c; i++)
		s += st;
	return s;
}
String^ DelSpace(String ^ str) {
	while (str->IndexOf("\t") >= 0)
		str = str->Replace("\t", " ");
	while (str->IndexOf("  ") >= 0)
		str = str->Replace("  ", " ");
	str = str->Trim();
	return str;
}
String^ split(String^ s, int ind) {
	s = DelSpace(s);

	array <TCHAR>^ dlm = { ' ' };
	array <String^>^ words = s->Split(dlm);

	return (words[ind]);
}