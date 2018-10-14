#include "pch.h"
#include "Task2.h"
#include <iostream>
#include <ctime>

using namespace std;

void StaticArray()
{
	static int arr[40];
	int elt;
	srand(static_cast<unsigned int>(time(NULL))); // automatic randomization
	// Fill array with random elements from -20 to 20
	for (size_t i = 0; i < 40; i++)
	{
		arr[i] = (-20 + rand() % 40);
	}
	cout << endl;
	cout << "----------Array with random elements from -20 to 20----------: " << endl;
	for (int i = 0; i < 40; ++i)
	{
		cout << " " << arr[i] << " ";
		if (i == 9 || i == 19 || i == 29)
			cout << endl;
	}
	cout << endl;
	cout << "-------All elements which > 8 are nullificated---------------: " << endl;
	// Nullificate all elements of the array which > 8
	for (size_t i = 0; i < 40; i++)
	{
		if (arr[i] > 8)
			arr[i] = 0;
	}

	for (int i = 0; i < 40; ++i)
	{
		cout << " " << arr[i] << " ";
		if (i == 9 || i == 19 || i == 29)
			cout << endl;
	}
	cout << endl;
	cout << "---------- Opposite elements are found and replaced by 0----------: " << endl;
	// For each positive element of the array find an oppisite element and replace both for 0 
	for (size_t i = 0; i < 40; i++)
	{
		if (arr[i] > 0)
		{
			elt = arr[i];
			for (size_t j = i + 1; j < 40; j++)
			{
				if (elt == (-arr[j]))
				{
					arr[i] = 0;
					arr[j] = 0;
				}
			}
		}
	}

	for (int i = 0; i < 40; ++i)
	{
		cout << " " << arr[i] << " ";
		if (i == 9 || i == 19 || i == 29)
			cout << endl;
	}
	cout << endl;
}