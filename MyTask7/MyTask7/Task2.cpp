#include "pch.h"
#include "Task2.h"
#include <iostream>

using namespace std;

void InsertSubStr()
{
	char str[80];// = "hello bro";
	char substr[80];// = "YIO FR";
	char *tmp;
	int pos = 0;

	cout << "Enter a string:\n";
	cin.getline(str, 80);
	cout << "\n\n";

	cout << "Enter a substring:\n";
	cin.getline(substr, 80);
	cout << "\n\n";

	cout << "Enter position for inserting(position should be > 0 and < string size):\n";
	cin >> pos;
	cout << "\n\n";

	int strSize = 0;// strlen(str);
	for (int i = 0; i < 80; ++i)
	{
		if (str[i] == '\0')
			break;
		++strSize;
	}

	int substrSize = 0;// strlen(substr);
	for (int i = 0; i < 80; ++i)
	{
		if (substr[i] == '\0')
			break;
		++substrSize;
	}
	// size of tmp array(!!!dont forget about '\0'!!!)
	int tmpSize = strSize + substrSize;
	tmp = new char[tmpSize + 1]();

	for (int i = 0, k = 0; i < tmpSize;)
	{
		if (i != pos && k < strSize)
		{
			tmp[i++] = str[k++];
		}
		else
		{
			// substring
			for (int j = 0; j < substrSize; ++j)
			{
				tmp[i++] = substr[j];
			}
			//i += (substrSize - 1);
		}
	}
	//tmp[tmpSize] = '\0';
	//strcpy(str, tmp);
	cout << "Final String: " << tmp << endl;
	delete[] tmp;
}