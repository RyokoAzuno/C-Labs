// MyTask2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Equations.h"
#include "InputOutput.h"

using namespace std;

int main()
{
	float result[2];
	cout << "linear equation: ax + b, a = -2, b = 4" << endl;
	cout << "x := " << linearEquation(-2, 4) << endl;
	cout << "quadratic equation: ax^2 + bx + c, a = 1, b = 1, c = -6" << endl;
	quadraticEquation(result, 1, 1, -6);
	for (size_t i = 0; i < 2; i++)
	{
		cout << "x"<< i + 1 << " := "<< result[i] << endl;
	}
	
	formatIO();
	streamIO();
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
