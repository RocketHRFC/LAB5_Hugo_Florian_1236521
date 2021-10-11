#include "pch.h"
#include "List.h"

void List::Add(int item)
{
	Node^ New = gcnew Node();

	New->Data = item;
	Node^ Currently = Header;
	if (Header == nullptr)
	{
		Header = New;
	}
	else
	{
		while (Currently->Next != nullptr)
		{
			Currently = Currently->Next;
		}

		Currently->Next = New;
	}
}

void List::Clear()
{
	while(Header != nullptr)
	{
		Node^ Currently = Header;
		Header = Header->Next;
		delete(Currently);
	}
}

int List::Count()
{
	int counter = 0;

	Node^ Currently = Header;

	while (Currently != nullptr)
	{
		counter++;
		Currently = Currently->Next;
	}

	return counter;
}

bool List::Contains(int item)
{
	Node^ Currently = Header;

	while (Currently != nullptr)
	{
		if (Currently->Data == item)
		{
			return true;
		}

		Currently = Currently->Next;
	}
	return false;
}

int List::IndexOf(int item) 
{
	int index = 0;

	Node^ Currently = Header;

	while (Currently != nullptr)
	{
		if (Currently->Data == item)
		{
			return index;
		}

		index++;

		Currently = Currently->Next;
	}
	return -1;
}

void List::Insert(int index, int item)
{
	Node^ New = gcnew Node();
	New->Data = item;
	int ActualIndex = 0;
	Node^ Currently = Header;
	Node^ Previous = Header;
	if (index == 0)
	{
		New->Next = Currently;
		Header = New;
	}
	else
	{
		while (ActualIndex < index)
		{
			Previous = Currently;
			Currently = Currently->Next;
			ActualIndex++;
		}
		New->Next = Currently;
		Previous->Next = New;
	}
}

int List::GetItem(int index)
{
	Node^ Currently = Header;

	for(int i = 0; i < index; i++)
	{
		Currently = Currently->Next;
	}

	return (Currently->Data);
}

void List::SetItem(int index, int item)
{
	Node^ Currently = Header;

	for (int i = 0; i < index; i++)
	{
		Currently = Currently->Next;
	}

	Currently->Data = item;

}

void List::RemoveAt(int index)
{
	Node^ Currently = Header;
	Node^ Previous = Header;

	if (index == 0)
	{	
		Header = Header->Next;
		delete(Currently);
		delete(Previous);
	}
	else
	{
		for (int i = 0; i < index; i++)
		{
			Previous = Currently;
			Currently = Currently->Next;
		}

		Previous->Next = Currently->Next;

		delete(Currently);
	}	
}