#pragma once

#ifdef MYDLLLOADLIB_EXPORTS
#define MYDLLLOADLIB_API __declspec(dllexport)
#else
#define MYDLLLOADLIB_API __declspec(dllimport)
#endif

extern "C" MYDLLLOADLIB_API void DynamicArray();
extern "C" MYDLLLOADLIB_API bool IsEven(int num);

class IDoubleLinkedList
{
public:
	virtual ~IDoubleLinkedList() { ; }
	virtual void Clean() = 0;

	virtual bool Empty() = 0;

	// Add a new element at the head of the list
	virtual void PushFront(int item) = 0;
	// Add a new element at the tail of the list
	virtual void PushBack(int item) = 0;
	// Add a new element after an element with key value
	virtual bool PushAfterKey(int item, int key) = 0;

	// Remove an element from the head
	virtual int RemoveFront() = 0;
	// Remove an element from the tail
	virtual int RemoveBack() = 0;
	// Remove an element with key value from the list
	virtual bool RemoveKey(int key) = 0;

	virtual bool Find(int item) = 0;

	virtual int Size() = 0;

	virtual void Print() = 0;
};

struct Node
{
public:
	Node *prev;
	Node *next;
	int data;

	Node();

	Node(int item);

	void Print();
};

struct DoubleLinkedList : public IDoubleLinkedList
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

extern "C" MYDLLLOADLIB_API IDoubleLinkedList* _cdecl Create();
typedef IDoubleLinkedList* (*CREATE_LIST) ();
