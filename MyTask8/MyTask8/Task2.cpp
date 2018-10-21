#include "pch.h"
#include "Task2.h"
#include <iostream>

using namespace std;

void BracketsCounter()
{
	const char brackets[] = { '(', ')', '{', '}', '[', ']' };
	const char *path1 = {"j:\\Projects\\VS2017\\C++\\Console\\MyTask8\\MyTask8\\F3.txt"};
	const char *path2 = { "j:\\Projects\\VS2017\\C++\\Console\\MyTask8\\MyTask8\\report.txt" };
	char infoStr[80] = {'\0'};
	int counter[6] = { 0 };
	char str[80] = { '\0' };
	
	FILE *report;

	FILE *f3 = fopen(path1, "w");

	if (f3 == 0)
	{
		cout << "file open error!!!!" << endl;
		return;
	}

	cout << "Enter any brackets sequences --(,),[,],{,}--: " << endl;
	cin.getline(str, 80);
	fputs(str, f3);
	fclose(f3);

	f3 = fopen(path1, "r");
	char ch;
	while (!feof(f3))
	{
		ch = fgetc(f3);
		for (int i = 0; i < 6; ++i)
		{
			if (ch == brackets[i])
				++counter[i];
		}
	}
	// Output all information about brackets
	for(int i = 0; i < 6; ++i)
		cout << "Number of '" << brackets[i] << "': " << counter[i] << endl;

	//char tmp = '\0';
	// Write information about brackets into report.txt file
	for (int i = 0; i < 6; i += 2)
	{
		if (counter[i] != counter[i + 1])
		{
			//char tmp = ((counter[i] < counter[i + 1]) ? brackets[i] : brackets[i + 1]);
			char tmpStr[2] = { ((counter[i] < counter[i + 1]) ? brackets[i] : brackets[i + 1]), '\0' };  
			//tmpStr[0] = tmp;		   
			strcpy(infoStr, "Don't forget to insert '");
			strcat(infoStr, tmpStr);
			strcat(infoStr, "' bracket");
			report = fopen(path2, "a+");
			if (report == 0)
			{
				cout << "file open error!!!!" << endl;
				return;
			}
			fputs(infoStr, report);
			fputs("\n", report);
			fclose(report);
		}
	}

	cout << endl;
	cout << "Brackets: " << str << endl;

	fclose(f3);
}