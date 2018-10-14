#include "pch.h"

bool NumbersMatcher(int num)
{
	bool result = false;

	int n1 = num % 10;
	int n2 = (num / 10) % 10;
	int n3 = (num / 100) % 10;
	int n4 = num / 1000;

	if ((n1 == n2) && (n3 == n4) && (n1 == n3))
		result = true;

	return result;
}