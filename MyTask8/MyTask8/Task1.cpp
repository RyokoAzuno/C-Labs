#include "pch.h"
#include "Task1.h"
#include <iostream>

using namespace std;

void FileCpy()
{
	const char *path1 = "j:\\Projects\\VS2017\\C++\\Console\\MyTask8\\MyTask8\\F1.txt";
	const char *path2 = "j:\\Projects\\VS2017\\C++\\Console\\MyTask8\\MyTask8\\F2.txt";
	FILE *f1 = fopen(path1, "w");		// Open or create F1
	FILE *f2 = fopen(path2, "w");
	char str[80] = {"\0"};
	int numOfStr = 0; // number of strings in our file
	int N = 0;
	int K = 0;
	int consonants = 0;

	if ((f1 == 0) || (f2 == 0))
	{
		cout << "error" << endl;
		return;
	}
	
	cout << "Enter a text(type 'exit' - for exit): " << endl;
	while (true)			
	{
		cin.getline(str, 80);
		if (strcmp(str, "exit") == 0)
			break;
		else
		{
			fputs(str, f1);					// Write a string to the file
			fputs("\n", f1);				// Write a new line
			++numOfStr;
		}
	}

	cout << "---Copy strings from N to K into file F2---" << endl;
	cout << "Enter N(0-" << numOfStr - 1 << "): " << endl;
	cin >> N;
	cout << "Enter K("<< N << "-" << numOfStr - 1 << "): " << endl;
	cin >> K;

	//fseek(f1, 0L, SEEK_SET);
	rewind(f1);
	f1 = fopen(path1, "r");
	int count = K - N;			// Number of strings you need to write from F1 into F2 file
	while (!feof(f1))
	{
		if (N == 0)
		{
			while (count >= 0)
			{
				fgets(str, 80, f1);
				fputs(str, f2);
				--count;
			}
			break;			
		}
		if (count < 0)
			break;
		fgets(str, 80, f1);
		--N;
	}
	fclose(f1);
	fclose(f2);

	// Number of consonants calculation
	char vowels[] = { 'A', 'E', 'I','O', 'U', 'a', 'e', 'i', 'o', 'u' };
	f2 = fopen(path2, "r");
	char ch;
	while (!feof(f2))
	{
		ch = fgetc(f2);
		bool flag = 1;
		if (isalpha(ch))
		{
			for (int i = 0; i < strlen(vowels); ++i)
			{
				if (ch == vowels[i])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				++consonants;
		}

	}
	cout << endl;
	cout << "Number of consonants: " << consonants << endl;
	fclose(f2);
}