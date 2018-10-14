#include "pch.h"
#include "Equations.h"
#include <cmath>
#include <iostream>

using namespace std;

float linearEquation(float a, float b)
{
	float result = 0;
	result = (5 * (sin(pow(b, 3)) * sqrt(a + 23)) - exp(b)) /
		(sqrt(pow(sin(a), 2) + pow(cos(b), 2)) + a / 2 * b);

	return result;
}

void quadraticEquation(float *arr, float a, float b, float c)
{

	float d = (b * b) - (4 * a * c);
	float x1 = 0;
	float x2 = 0;
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		arr[0] = x1;
		arr[1] = x2;
	}
	else if (d == 0)
	{
		x1 = x2 = -b / 2 * a;
		arr[0] = x1;
		arr[1] = x2;
	}
	else
	{
		cout << "not roots" << endl;
	}
}

void mySwap(int arr[], int i, int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}