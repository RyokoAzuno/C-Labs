#include "pch.h"
#include "Task3.h"
#include <iostream>
#include <cstdlib>
//#include <clocale>
//#include <Windows.h>

using namespace std;

#define SIZE 80

void SmallChat()
{
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	const char *path = "j:\\Projects\\VS2017\\C++\\Console\\MyTask8\\MyTask8\\chatlog.txt";	
	const char *quest1[] = { "hey", "hello", "getting on", "hi", "yo", "sup", "hiya", "good morning", "good evening" };
	const char *quest2 = "time";
	const char *quest3[] = {"farewell", "bye", "take care", "later", "ciao", "adios" };
	const char *ans1[] = { "hey man", "hi, good to see you", "yo, pleased to meet you", "hiya, nice to meet you" };
	const char *ans3[] = { "all right then", "have a good one", "talk to you later", "smell you later", "later, man" };
	bool flag = true;
	char str[SIZE];
	struct tm *timeInfo = nullptr;		// local time representation
	srand(static_cast<unsigned>(time(NULL)));

	FILE *f = fopen(path, "w");
	if (f == 0)
	{
		cout << "File open error!!" << endl;
		return;
	}

	while (flag)
	{
		system("cls");
		cout << "Enter a string: " << endl;
		cin.getline(str, SIZE);
		if (strcmp(str, "exit") == 0)
			break;

		fputs(str, f);
		fputs(" : ", f);
		fputs(GetTime(timeInfo), f);
		fputs("\n", f);
	
		for (int i = 0; i < strlen(str); ++i)
			str[i] = tolower(str[i]);

		bool isQuest1 = false;
		bool isQuest2 = false;
		bool isQuest3 = false;
		for (int i = 0; i < 9; ++i)
		{
			isQuest1 = BruteForceSearch(str, quest1[i]);
			if (isQuest1)
				break;
		}

		if (isQuest1 == 0)
		{
			isQuest2 = BruteForceSearch(str, quest2);

			if (isQuest2 == 0)
			{
				isQuest3 = false;
				for (int i = 0; i < 6; ++i)
				{
					isQuest3 = BruteForceSearch(str, quest3[i]);
					if (isQuest3)
						break;
				}
			}
		}

		if (isQuest1)
		{
			char a1[80];
			strcpy(a1, ans1[rand() % 3]);
			fputs(a1, f);
			fputs(" : ", f);
			fputs(GetTime(timeInfo), f);
			fputs("\n", f);
			cout << a1 << endl;
		}
		else if(isQuest2)
		{
			//time_t curTime;					// time value
			//time(&curTime);					// get current time
			//timeInfo = localtime(&curTime); // localtime - convert time_t to tm as local time
			//cout << asctime(timeInfo);		// asctime - convert tm structure to string
			//fputs(asctime(timeInfo), f);
			char *time = GetTime(timeInfo);
			cout << time;
			fputs("Local time: ", f);
			fputs(time, f);
			fputs("\n", f);
		}
		else if (isQuest3)
		{
			char a3[80];
			strcpy(a3, ans3[rand() % 4]);
			fputs(a3, f);
			fputs(" : ", f);
			fputs(GetTime(timeInfo), f);
			fputs("\n", f);
			cout << a3 << endl;
		}

		//cout << "IsFound: " << boolalpha << isQuest2 << endl;
		system("pause");
	}
	fclose(f);
}

char* GetTime(tm *timeInfo)			// tm - local time representation
{
	time_t curTime;					// time value
	time(&curTime);					// get current time
	timeInfo = localtime(&curTime); // localtime - convert time_t to tm as local time
	return asctime(timeInfo);		// asctime - convert tm structure to string
}

bool BruteForceSearch(char *str,const char *substr)
{
	int strLen = strlen(str);
	int substrLen = strlen(substr);

	for (int i = 0; i <= strLen - substrLen; ++i)
	{
		int j;
		for (j = 0; j < substrLen; ++j)
		{
			if (str[i + j] != substr[j])
				break;
		}
		if (j == substrLen)
			return true;
	}
	return false;
}