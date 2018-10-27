// ClientDLL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "MyLib.h"

int main()
{
	DynamicArray();

	DoubleLinkedList lst;
	for (int i = 0; i < 5; ++i)
	{
		lst.PushFront(i);
		lst.PushBack(i);
		lst.Print();
	}
	lst.PushAfterKey(-88, 3);
	lst.Print();
	lst.RemoveKey(3);
	lst.Print();
	while (!lst.Empty())
	{
		lst.RemoveFront();
		lst.Print();
	}
	lst.Clean();

    //std::cout << "Hello World!\n"; 
}
