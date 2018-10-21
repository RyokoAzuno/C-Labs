#include "pch.h"
#include "Task1.h"
#include <iostream>

using namespace std;

void StrReplacer()
{
	char str[80] = " H5ow& a**re32 Yo(u4 3b4ro!!! ";


	//cout << "Enter a string:\n";
	//cin.getline(str, 80);
	int size = strlen(str);
	char *buffer = new char[size]();

	for (int i = 0, k = 0; i < size; ++i)
	{
		if (isalpha(str[i]) == 0 && isdigit(str[i]) == 0 && isspace(str[i]) == 0)
		{
			str[i] = '*';
		}
		else if (isalpha(str[i]) && isupper(str[i]))
		{
			char c = tolower(str[i]);
			str[i] = c;
			buffer[k++] = str[i];
		}
		else
			buffer[k++] = str[i];
	}
	strcpy(str, buffer);

	cout << endl;
	cout << "Changed string: " << str << endl;
	delete[] buffer;
}