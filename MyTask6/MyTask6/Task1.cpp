#include "pch.h"
#include "Task1.h"
#include <iostream>

using namespace std;

bool IsEven(int num)
{
	return (num % 2) == 0;
}

void DynamicArray(void)
{
	int size;
	int m_size = 0;
	int l_size = 0;
	cout << "Enter size of the array: ";
	cin >> size;
	
	int *arr = new int[size];

	cout << "Enter elements of the array: " << endl;
	for (int *p = arr; p != arr + size; ++p)
	{
		cin >> *p;
		if (IsEven(*p))
			++l_size;
		else
			++m_size;
	}
	cout << "Initial array: " << endl;
	for (int *p = arr; p != arr + size; ++p)
		cout << " " << *p << " ";

	int *L = new int[l_size]; // Even numbers array
	int *M = new int[m_size]; // Odd numbers array
	for (int *p = arr, *l = L, *m = M; p != arr + size; ++p)
	{
		if (IsEven(*p))
		{
			*l++ = *p;
		}
		else
		{
			*m++ = *p;
		}
	}
	cout << endl;
	cout << "L array: " << endl;
	for (int *p = L; p != L + l_size; ++p)
		cout << " " << *p << " ";

	cout << endl;
	cout << "M array: " << endl;
	for (int *p = M; p != M + m_size; ++p)
		cout << " " << *p << " ";

	delete[] arr;
	delete[] L;
	delete[] M;
}