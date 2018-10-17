#include "pch.h"
#include "Task2.h"
#include <iostream>
#include <ctime>

using namespace std;

void DynamicArrayRnd()
{
	const int SIZE = 40;
	int *arr = new int[40](); // array filled with zero
	srand(static_cast<unsigned int>(time(NULL))); // automatic randomization

	// Filled array with random numbers
	for (int *p = arr; p != arr + SIZE; ++p)
	{
		*p = (-20 + rand() % 40);
	}
	cout << endl;
	cout << "-------Array filled with random elements from -20 to 20------: " << endl;
	for (int *p = arr, count = 0; p != arr + SIZE; ++p, ++count)
	{
		cout << " " << *p << " ";
		if (count == 9 || count == 19 || count == 29)
			cout << endl;
	}

	// If a value of the array item > 8 => value equals zero
	for (int *p = arr; p != arr + SIZE; ++p)
	{
		if (*p > 8)
			*p = 0;
	}
	cout << "\n\n";
	cout << "-------All elements which > 8 equals zero---------------------: " << endl;
	for (int *p = arr, count = 0; p != arr + SIZE; ++p, ++count)
	{
		cout << " " << *p << " ";
		if (count == 9 || count == 19 || count == 29)
			cout << endl;
	}

	// For each positive element of the array find an oppisite element and replace both by 0 
	for (int *p = arr; p != arr + SIZE; ++p)
	{
		if (*p > 0)
		{
			for (int *q = p + 1; q != arr + SIZE; ++q)
			{
				if (*p == (-(*q)))
				{
					*p = 0;
					*q = 0;
				}
			}
		}
	}
	cout << "\n\n";
	cout << "---------- Opposite elements are found and replaced by 0----------: " << endl;
	for (int *p = arr, count = 0; p != arr + SIZE; ++p, ++count)
	{
		cout << " " << *p << " ";
		if (count == 9 || count == 19 || count == 29)
			cout << endl;
	}

	delete[] arr;
}