#include "pch.h"
#include "Task2.h"
#include <cmath>
#include <iostream>
using namespace std;

int MyPow(int number, int power)
{
	int result = 1;
	for (int i = 0; i < power; ++i)
	{
		result *= number;
	}
	return result;
}

unsigned int Factorial(unsigned int n)
{
	return (n == 0 || n == 1) ? 1 : n * Factorial(n - 1);
}

double Equation(double x)
{
	double eps = pow(10, -6);
	int k = 1;
	double iter;
	double sum = 0;

	for (k; fabs(iter = (MyPow(-1, k) / (Factorial(k) * Factorial(k + 1))) * pow(x / 2, 2 * k + 1)) > eps; ++k)
	{
		sum += iter;
	}

	return sum;
}
