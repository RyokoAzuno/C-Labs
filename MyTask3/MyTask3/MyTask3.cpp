// MyTask3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"

using namespace std;

int main()
{
	cout << "---------Task1------------" << endl;
	Task1();

	cout << "---------Task2------------" << endl;
	cout << "a = 2, b = 5, c = 8" << endl;
	double y = Task2(2, 5, 8);
	cout << "y: = " << y << endl;

	cout << "---------Task2------------" << endl;
	Task3('+', 8);
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
