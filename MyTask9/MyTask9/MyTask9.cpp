// MyTask9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"

int main()
{
	//------TASK1
	//StackStrReverse();
	//------TASK2
	//Calculator();
	//------TASK3
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
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
