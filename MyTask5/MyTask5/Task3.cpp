#include "pch.h"
#include "Task3.h"
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

// Absolute average
int AbsAvg(int arr[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += arr[i];
	}
	return abs(result / size);
}
// Nullify array elements
void NullArray(int arr[])
{
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}
// Calculate and replace elements of the sequence where abs > absAvg
void ArraySeq() 
{
	const int SIZE = 100;
	int arr[SIZE];
	srand(static_cast<unsigned int>(time(NULL)));
	// Fill array with random numbers -50 to 50
	for (size_t i = 0; i < SIZE; i++)
	{
		arr[i] = (-50 + rand() % 100);
	}
	cout << endl;
	cout << "----------Initial array------------------" << endl;
	for (size_t i = 0; i < SIZE; ++i)
	{
		cout << " " << arr[i] << " ";
		if (i != 0 && (i % 10) == 0)
			cout << endl;
	}
	// Main calculation
	for (size_t i = 0; i < SIZE; i++)
	{
		// If sequence contains at least 2 negative numbers 
		if (arr[i] < 0 && arr[i + 1] < 0 && i < (SIZE - 1)) 
		{
			//int start_idx = i;	// start index for temp array
			int last_idx = i;	// last index for temp array
			int k = 0;			// temporal variable for function - AbsAvg()
			int tmp[100];		// temporal array for negative numbers
			while (arr[last_idx] < 0)
			{
				++last_idx;
			}
			//last_idx = start_idx;
			// fill temp array with negative numbers
			for (int j = i; j < last_idx; j++)
			{
				tmp[k++] = arr[j];
			}
			int absAvg = AbsAvg(tmp, k); // calculate absolute average
			// change elements
			for (int l = i; l < last_idx; l++)
			{
				if (abs(arr[l]) > absAvg)
					arr[l] = 0;
			}
			//NullArray(tmp);
			i = last_idx;	// continue loop from the last element
		}
	}
	cout << endl;
	cout << "-----------Final array------------------" << endl;
	for (size_t i = 0; i < SIZE; ++i)
	{
		cout << " " << arr[i] << " ";
		if (i != 0 && (i % 10) == 0)
			cout << endl;
	}
}