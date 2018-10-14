#include "pch.h"
#include "Task1.h"
#include <iostream>

using namespace std;

void Task1()
{
	int num;
	int count = 0;

	while (count <= 2)
	{
		cout << "Enter integer number between -100 and -9 or 9 and 100: ";
		cin >> num;

		if (num < 0)
			++count;
		else if (num < -99 || num > 99)
		{
			cout << "Incorrect number, try again!" << endl;
			continue;
		}
		cout << "Hexadecimal value of number: " << uppercase << hex << num << endl;
	}

}