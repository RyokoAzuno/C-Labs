#include "pch.h"
#include "Task1.h"

using namespace std;

static CRITICAL_SECTION critsect;

DWORD WINAPI filler(LPVOID data)
{
	COORD coord;
	coord.Y = (short)data;
	coord.X = 0;
	char ch = (char)223;
	InitializeCriticalSection(&critsect);
	for (int i = 0; i < 50; ++i, coord.X += 1)
	{
		EnterCriticalSection(&critsect);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, 4); // Red
		SetConsoleCursorPosition(handle, coord);
		cout << ch;
		LeaveCriticalSection(&critsect);
		Sleep(300);
	}
	system("pause");
	return ((DWORD)data);
}

DWORD WINAPI th(LPVOID data)
{
	MyData *info = reinterpret_cast<MyData*>(data);
	bool flag = false;

	InitializeCriticalSection(&critsect);
	for (int i = 0; i < 50; ++i)
	{
		EnterCriticalSection(&critsect);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(handle, info->color); // Red
		SetConsoleCursorPosition(handle, info->coord);
		if (!flag)
		{
			cout << info->str;
			flag = !flag;
		}
		else
		{
			cout << "   ";
			flag = !flag;
		}
		LeaveCriticalSection(&critsect);
		Sleep(100);
	}

	return ((DWORD)data);
}




