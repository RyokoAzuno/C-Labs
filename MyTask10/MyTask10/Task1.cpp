#include "pch.h"
#include "Task1.h"

using namespace std;

DWORD WINAPI th1(LPVOID data)
{
	bool flag = false;
	CRITICAL_SECTION critsect;
	InitializeCriticalSection(&critsect);
	for (int i = 0; i < 50; ++i)
	{
		EnterCriticalSection(&critsect);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord;
		coord.X = 5;
		coord.Y = 3;

		SetConsoleTextAttribute(handle, 4); // Red
		SetConsoleCursorPosition(handle, coord);
		if (!flag)
		{
			cout << "R";
			flag = !flag;
		}
		else
		{
			cout << " ";
			flag = !flag;
		}
		Sleep(100);
		LeaveCriticalSection(&critsect);
	}

	return ((DWORD)data);
}
DWORD WINAPI th2(LPVOID data)
{
	bool flag = false;
	CRITICAL_SECTION critsect;
	InitializeCriticalSection(&critsect);
	for (int i = 0; i < 50; ++i)
	{
		EnterCriticalSection(&critsect);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord;
		coord.X = 7;
		coord.Y = 5;

		SetConsoleTextAttribute(handle, 2); // Green
		SetConsoleCursorPosition(handle, coord);
		if (!flag)
		{
			cout << "G";
			flag = !flag;
		}
		else
		{
			cout << " ";
			flag = !flag;
		}
		Sleep(100);
		LeaveCriticalSection(&critsect);
	}

	return ((DWORD)data);
}
DWORD WINAPI th3(LPVOID data)
{
	bool flag = false;
	CRITICAL_SECTION critsect;
	InitializeCriticalSection(&critsect);
	for (int i = 0; i < 50; ++i)
	{
		EnterCriticalSection(&critsect);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord;
		coord.X = 9;
		coord.Y = 7;

		SetConsoleTextAttribute(handle, 9); // Blue
		SetConsoleCursorPosition(handle, coord);
		if (!flag)
		{
			cout << "B";
			flag = !flag;
		}
		else
		{
			cout << " ";
			flag = !flag;
		}
		Sleep(100);
		LeaveCriticalSection(&critsect);
	}

	return ((DWORD)data);
}
