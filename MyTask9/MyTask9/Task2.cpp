#include "pch.h"
#include "Task2.h"
#include <iostream>
#include <string>
#include <deque>

using namespace std;

void Calculator()
{
	deque<string> operations;
	deque<double> values;
	string str;
	string tmp;

	cout << "Enter an expression with brackets: " << endl;
	getline(cin, str);
	for (int i = 0; i < str.length(); ++i)
	{
		int j = i;
		tmp.clear();
		while (!isspace(str[j]) && (j < str.length()))
		{
			tmp.push_back(str[j++]);
			i = j;
		}
		if (tmp == "(" || tmp.empty());
		else if (tmp == "+")
			operations.push_back(tmp);
		else if (tmp == "-")
			operations.push_back(tmp);
		else if (tmp == "*")
			operations.push_back(tmp);
		else if (tmp == "/")
			operations.push_back(tmp);
		else if (tmp == ")")
		{
			string operation = operations.back();
			operations.pop_back();
			double value = values.back();
			values.pop_back();
			if (operation == "+")
			{
				value = values.back() + value;
				values.pop_back();
			}
			else if (operation == "-")
			{
				value = values.back() - value;
				values.pop_back();
			}
			else if (operation == "*")
			{
				value = values.back() * value;
				values.pop_back();
			}
			else if (operation == "/")
			{
				value = values.back() / value;
				values.pop_back();
			}
			values.push_back(value);
		}
		else
		{
			values.push_back(stod(tmp));
		}
	}
	
	cout << str << " = " << values.back() << endl;
}