// MyTask10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Task1.h"

using namespace std;

int main()
{
	DWORD threadId;
	HANDLE thread = nullptr;
	short x = 0;
	while (x >= 0)
	{
		//system("cls");
		cout << "Enter any number greater than zero: " << endl;
		cin >> x;
		if(x >= 0)
			thread = CreateThread(NULL, 0, filler, (LPVOID)x, 0, &threadId);
		cout << endl;
		//system("pause");
	}

	//for (int i = 0; i < 1250; ++i)
	//{
	//	//cout << 'X';
	//	Sleep(100);
	//}
	WaitForSingleObject(thread, INFINITE);
	CloseHandle(thread);
	cout << "All threads terminated" << endl;
}

//int main()
//{
//	std::string str[] = { "R ", "G ", "B " };
//	HANDLE threads[3];
//	DWORD thIDs[3];
//	MyData myData[3];
//	short x = 3;
//	short y = 5;
//	WORD color = 2;
//
//	cout << "Start threads: " << endl;
//	
//	for (int i = 0; i < 3; ++i, x += 2, y += 2, color += 2)
//	{
//		myData[i].coord.X = x;
//		myData[i].coord.Y = y;
//		myData[i].str = str[i];
//		myData[i].color = color;
//		threads[i] = CreateThread(NULL, 0, th, &myData[i], 0, &thIDs[i]);
//	}
//	
//	for (int i = 0; i < 50; ++i)
//	{
//		//cout << 'X';
//		Sleep(100);
//	}
//	for (int i = 0; i < 3; ++i)
//		CloseHandle(threads[i]);
//
//	cout << "All threads terminated" << endl;
//}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
