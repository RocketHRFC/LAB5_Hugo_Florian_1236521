#include "pch.h"
#include "List.h"

using namespace System;

int main()
{

	List^ MyList = gcnew List();
	MyList->Add(5);
	MyList->Add(7);
	MyList->Add(6);
	MyList->Insert(2, 1);
	MyList->SetItem(2, 4);
	MyList->RemoveAt(0);


	//Console::WriteLine(MyList->GetItem(0));
	//Console::WriteLine(MyList->Count());
	//Console::WriteLine(MyList->Contains(7));
	//Console::WriteLine(MyList->Contains(9));
	//Console::WriteLine(MyList->IndexOf(6));
	//Console::WriteLine(MyList->IndexOf(9));
	//MyList->Clear();
	//Console::WriteLine(MyList->Count());

    return 0;
}
