// MyTask10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Task1.h"

using namespace std;

int main()
{
	char str[] = { 'R', 'G', 'B' };
	//HANDLE threads[3];
	DWORD threadId1;
	DWORD threadId2;
	DWORD threadId3;
	//InitializeCriticalSection(&critsect);
	cout << "Start threads" << endl;

	

	HANDLE thread1 = CreateThread(NULL, 0, th1, (LPVOID)1, 0, &threadId1);
	HANDLE thread2 = CreateThread(NULL, 0, th2, (LPVOID)1, 0, &threadId2);
	HANDLE thread3 = CreateThread(NULL, 0, th3, (LPVOID)1, 0, &threadId3);

	

	for (int i = 0; i < 50; ++i)
	{
		//cout << 'X';
		Sleep(100);
	}

		CloseHandle(thread1);
		CloseHandle(thread2);
		CloseHandle(thread3);

	cout << "All threads terminated" << endl;
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
