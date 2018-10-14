#include "pch.h"
#include "Task1.h"
#include <iostream>

using namespace std;

#define ARRAY_SIZE 10

void AutomaticArrays()
{
	int arr[ARRAY_SIZE];
	int M[ARRAY_SIZE];
	int L[ARRAY_SIZE];
	int m_size;
	int l_size;

	cout << "Enter elements of the array: " << endl;
	for (int i = 0; i < ARRAY_SIZE; ++i)
		cin >> arr[i];

	for (int i = 0, j = 0, k = 0; i < ARRAY_SIZE; ++i, m_size = k, l_size = j)
	{
		if ((arr[i] % 2) == 0)
			L[j++] = arr[i];
		else
			M[k++] = arr[i];
	}
	cout << "Array L: ";
	PrintArray(L, l_size);
	cout << "Array M: ";
	PrintArray(M, m_size);
	cout << "Size of L:= " << l_size << " Size of M:= " << m_size << endl;
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << " " << arr[i] << " ";
	}
	cout << endl;
}