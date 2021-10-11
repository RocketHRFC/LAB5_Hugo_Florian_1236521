#pragma once
ref struct Node
{
	int Data;
	Node^ Next;
};
ref class List
{
private:
	Node^ Header = nullptr;
public:
	void Add(int item);
	void Clear();
	int Count();
	bool Contains(int item);
	int IndexOf(int item);
	void Insert(int index, int item);
	int GetItem(int index);
	void SetItem(int index, int item);
	//int LastIndexOf(int item);
	//bool Remove(int item);
	void RemoveAt(int index);

};

