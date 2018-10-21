#include "pch.h"
#include "Task1.h"
#include <iostream>
#include <stack>

using namespace std;

#define SIZE 80

void StackStrReverse()
{
	stack<char> st;
	char *str = new char[SIZE];
	cout << "Enter a string: " << endl;
	cin.getline(str, SIZE);

	int size = strlen(str);

	for (int i = 0; i < size; ++i)
	{
		st.push(str[i]);
	}

	for (int i = 0; i < size; ++i)
	{
		str[i] = st.top();
		st.pop();
	}

	cout << endl;
	cout << "Reversed string:" << endl;
	cout << str << endl;

	delete str;
}