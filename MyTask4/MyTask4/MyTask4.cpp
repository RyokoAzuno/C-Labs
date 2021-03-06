// MyTask4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	bool flag = true;
	while (flag)
	{
		system("cls");
		int task = 0;
		cout << "1. Task1 - numbers matcher" << endl;
		cout << "2. Task2 - series solver with given precision" << endl;
		cout << "3. Task3 - string reverser" << endl;
		cout << "Enter 1, 2 or 3 (for exit: -1 ): ";
		cin >> task;
		switch (task)
		{
			case -1:
				flag = false;
				break;
			case 1:
			{
				int num = 0;
				bool result = false;
				cout << "Enter number between 999 and 10000: ";
				cin >> num;
				if ((num > 999) && (num < 10000))
					result = NumbersMatcher(num);
				else
				{
					cout << "Incorrect number, try again!" << endl;
					break;
				}
				if (result == true)
					cout << "All digits are equal!" << endl;
				else
					cout << "Digits aren't equal!" << endl;
				break;
			}
			case 2:
			{
				double num = 0;
				cout << "Enter number between 0 and 1(for example: 0.5 or 0.1) to calculate Series: ";
				cin >> num; //0.5; 0.1
				if ((num > 0) && (num < 1))
				{
					double sum = Equation(num);
					cout << setprecision(15) << sum << endl;
				}
				else
					cout << "Incorrect number, try again!" << endl;
				break;
			}
			case 3:
			{
				//char buffer[80];
				string s; // <string.h>
				cout << "Enter a string: ";
				//cin >> buffer;
				getline(cin >> ws, s); // ws - include spaces
				char *str = new char[s.length() + 1];
				strcpy_s(str, s.length() + 1, s.c_str());
				//for (int i = 0; i < 80; ++i)
				//{
				//	if (buffer[i] == '\0')
				//	{
				//		str = new char[arrSize];
				//		str = buffer;
				//		break;
				//	}
				//	++arrSize;
				//}
				StringReverse(str, s.length());
				cout << "Reversed string: " << str << endl;
				delete [] str;
				break;
			}
			default: break;
		}
		system("pause");
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
