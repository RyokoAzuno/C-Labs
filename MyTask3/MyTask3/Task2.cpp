#include "pch.h"
#include "Task2.h"
#include <cmath>

double Task2(int a, int b, int c)
{
	double result;

	double up = 5 * (sin(pow(b, 3)) * sqrt(a + 23)) - exp(b);
	double down = sqrt(pow(sin(a), 2) + pow(cos(b), 2)) + a / (2 * b);

	result = up / down;

	return result;
}