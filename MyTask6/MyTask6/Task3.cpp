#include "pch.h"
#include "Task3.h"
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

// Absolute average
int AbsAvg(int *arr, int size)
{
	int result = 0;
	for (int *p = arr; p != arr + size; ++p)
	{
		result += *p;
	}
	return abs(result / size);
}

void ArraySeq()
{
	const int SIZE = 100;
	int *arr = new int[SIZE];
	srand(static_cast<unsigned int>(time(NULL)));

	// Fill array with random numbers -50 to 50
	for (int *p = arr; p != arr + SIZE; ++p)
	{
		*p = (-50 + rand() % 100);
	}
	cout << endl;
	cout << "----------Initial array-----------------: " << endl;
	for (int *p = arr, count = 1; p != arr + SIZE; ++p, ++count)
	{
		cout << " " << *p << " ";
		if ((count != 0) && (count % 10) == 0)
			cout << endl;
	}
	// Main calculation
	for (int *p = arr; p != arr + SIZE; ++p)
	{
		// If sequence contains at least 2 negative numbers 
		if (p < (arr + SIZE - 1) && (*p < 0) && (*(p + 1) < 0))
		{
			int *last_idx = p;	// last index for temp array
			int k = 0;			// temporal variable for function - AbsAvg()			
			while (*last_idx < 0 && last_idx < (arr + SIZE - 1))
			{
				++last_idx;
				++k;
			}
			int *tmp = new int[k];		// temporal array for negative numbers
			// fill temp array with negative numbers
			for (int *q = p, k = 0; q != last_idx; q++)
			{
				tmp[k++] = *q;
			}
			int absAvg = AbsAvg(tmp, k); // calculate absolute average
			// change elements
			for (int *q = p; q != last_idx; ++q)
			{
				if (abs(*q) > absAvg)
					*q = 0;
			}
			p = last_idx;	// continue loop from the last element
		}
	}
	cout << endl;
	cout << "-----------Final array------------------" << endl;
	for (int *p = arr, count = 1; p != arr + SIZE; ++p, ++count)
	{
		cout << " " << *p << " ";
		if ((count != 0) && (count % 10) == 0)
			cout << endl;
	}
}