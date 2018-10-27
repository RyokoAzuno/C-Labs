#pragma once

#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

extern "C" MYDLL_API void DynamicArray();
extern "C" MYDLL_API bool IsEven(int num);

struct MYDLL_API Node
{
public:
	Node *prev;
	Node *next;
	int data;

	Node();

	Node(int item);

	void Print();
};

struct MYDLL_API DoubleLinkedList
{
private:
	Node *head;
	Node *tail;

public:
	DoubleLinkedList();

	DoubleLinkedList(int item);
	// Remove all elements in our list
	void Clean();

	bool Empty();

	// Add a new element at the head of the list
	void PushFront(int item);
	// Add a new element at the tail of the list
	void PushBack(int item);
	// Add a new element after an element with key value
	bool PushAfterKey(int item, int key);

	// Remove an element from the head
	int RemoveFront();
	// Remove an element from the tail
	int RemoveBack();
	// Remove an element with key value from the list
	bool RemoveKey(int key);

	bool Find(int item);

	int Size();

	void Print();
};

extern "C" MYDLL_API DoubleLinkedList *Create();

