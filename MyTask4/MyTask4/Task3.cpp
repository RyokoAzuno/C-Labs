#include "pch.h"
#include "Task3.h"

void MySwap(char *arr, int i, int j)
{
	if (arr[i] != arr[j])
	{
		arr[i] ^= arr[j];
		arr[j] ^= arr[i];
		arr[i] ^= arr[j];
	}
}

void StringReverse(char *str, int size)
{
	for (int i = 0, j = size - 1; i < j; ++i, --j)
	{
		MySwap(str, i, j);
	}
}