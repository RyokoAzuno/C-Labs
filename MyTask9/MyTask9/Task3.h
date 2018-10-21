#pragma once
#include <iostream>

using namespace std;



struct DoubleLinkedList
{
	private:
		struct Node
		{
			public:
				Node *prev; 
				Node *next;
				int data;

				Node()
				{
					prev = nullptr;
					next = nullptr;
					data = 0;
				}
				Node(int item)
				{
					prev = nullptr;
					next = nullptr;
					data = item;
				}

				void Print()
				{
					cout << data << " ";
				}
		};
		Node *head;
		Node *tail;

	public:
		DoubleLinkedList()
		{
			head = tail = new Node();
			tail->next = nullptr;
			tail->prev = nullptr;
		}

		DoubleLinkedList(int item)
		{
			head = tail = new Node();
			tail->next = nullptr;
			tail->prev = nullptr;
			PushFront(item);
		}
		// Remove all elements in our list
		void Clean()
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

		bool Empty() { return head == tail; }

		// Add a new element at the head of the list
		void PushFront(int item)
		{
			Node *node = new Node(item);
			node->next = head;
			node->prev = nullptr;
			head->prev = node;
			head = node;
		}
		// Add a new element at the tail of the list
		void PushBack(int item)
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
		bool PushAfterKey(int item, int key)
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
		int RemoveFront()
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
		int RemoveBack()
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
		bool RemoveKey(int key)
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

		bool Find(int item)
		{
			for (Node *p = head; p != tail; p = p->next)
			{
				if (p->data == item)
					return true;
			}
			return false;
		}

		int Size()
		{
			int size = 0;
			for (Node *p = head; p != tail; p = p->next)
				++size;
			return size;
		}

		void Print()
		{
			for (Node *p = head; p != tail; p = p->next)
				p->Print();
			cout << endl;
		}
};


