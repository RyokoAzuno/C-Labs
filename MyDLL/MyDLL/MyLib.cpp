#include "stdafx.h"
#include <iostream>
#include "MyLib.h"

using namespace std;

bool IsEven(int num)
{
	return (num % 2) == 0;
}

void DynamicArray(void)
{
	int size;
	int m_size = 0;
	int l_size = 0;
	cout << "Enter size of the array: ";
	cin >> size;

	int *arr = new int[size];

	cout << "Enter elements of the array: " << endl;
	for (int *p = arr; p != arr + size; ++p)
	{
		cin >> *p;
		if (IsEven(*p))
			++l_size;
		else
			++m_size;
	}
	cout << "Initial array: " << endl;
	for (int *p = arr; p != arr + size; ++p)
		cout << " " << *p << " ";

	int *L = new int[l_size]; // Even numbers array
	int *M = new int[m_size]; // Odd numbers array
	for (int *p = arr, *l = L, *m = M; p != arr + size; ++p)
	{
		if (IsEven(*p))
		{
			*l++ = *p;
		}
		else
		{
			*m++ = *p;
		}
	}
	cout << endl;
	cout << "L array: " << endl;
	for (int *p = L; p != L + l_size; ++p)
		cout << " " << *p << " ";

	cout << endl;
	cout << "M array: " << endl;
	for (int *p = M; p != M + m_size; ++p)
		cout << " " << *p << " ";

	delete[] arr;
	delete[] L;
	delete[] M;
}

//////////////////Node/////////////////////
Node::Node()
{
	prev = nullptr;
	next = nullptr;
	data = 0;
}
Node::Node(int item)
{
	prev = nullptr;
	next = nullptr;
	data = item;
}

void Node::Print()
{
	cout << data << " ";
}
//////////////DoubleLinkedList/////////////////
DoubleLinkedList::DoubleLinkedList()
{
	head = tail = new Node();
	tail->next = nullptr;
	tail->prev = nullptr;
}

DoubleLinkedList::DoubleLinkedList(int item)
{
	head = tail = new Node();
	tail->next = nullptr;
	tail->prev = nullptr;
	PushFront(item);
}
// Remove all elements in our list
void DoubleLinkedList::Clean()
{
	Node *node = head;
	for (Node *p = head; p != tail;)
	{
		p = p->next;
		delete node;
		node = p;
	}
	delete node;
}

bool DoubleLinkedList::Empty() { return head == tail; }

// Add a new element at the head of the list
void DoubleLinkedList::PushFront(int item)
{
	Node *node = new Node(item);
	node->next = head;
	node->prev = nullptr;
	head->prev = node;
	head = node;
}
// Add a new element at the tail of the list
void DoubleLinkedList::PushBack(int item)
{
	if (Empty())
		PushFront(item);
	else
	{
		Node *node = new Node(item);
		node->next = tail;
		node->prev = tail->prev;
		tail->prev->next = node;
		tail->prev = node;
	}
}
// Add a new element after an element with key value
bool DoubleLinkedList::PushAfterKey(int item, int key)
{
	for (Node *p = head; p != tail; p = p->next)
	{
		if (p->data == key)
		{
			Node *node = new Node(item);
			node->prev = p;
			node->next = p->next;
			p->next->prev = node;
			p->next = node;
			return true;
		}
	}
	return false;
}

// Remove an element from the head
int DoubleLinkedList::RemoveFront()
{
	if (Empty())
		throw "dont even try to remove from an empty list, bro!!!";
	Node *node = head;
	int result = node->data;
	head = node->next;
	head->prev = nullptr;
	delete node;
	return result;
}
// Remove an element from the tail
int DoubleLinkedList::RemoveBack()
{
	if (Empty())
		throw "dont even try to remove from an empty list, bro!!!";
	Node *node = tail->prev;
	if (node->prev == nullptr)
		return RemoveFront();
	else
	{
		int result = node->data;
		node->prev->next = tail;
		tail->prev = node->prev;
		delete node;
		return result;
	}
}
// Remove an element with key value from the list
bool DoubleLinkedList::RemoveKey(int key)
{
	for (Node *p = head; p != tail; p = p->next)
	{
		if (p->data == key)
		{
			p->prev->next = p->next;
			p->next->prev = p->prev;
			delete p;
			return true;
		}
	}
	return false;
}

bool DoubleLinkedList::Find(int item)
{
	for (Node *p = head; p != tail; p = p->next)
	{
		if (p->data == item)
			return true;
	}
	return false;
}

int DoubleLinkedList::Size()
{
	int size = 0;
	for (Node *p = head; p != tail; p = p->next)
		++size;
	return size;
}

void DoubleLinkedList::Print()
{
	for (Node *p = head; p != tail; p = p->next)
		p->Print();
	cout << endl;
}