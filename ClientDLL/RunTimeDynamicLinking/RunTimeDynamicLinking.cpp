// RunTimeDynamicLinking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <Windows.h>
#include <iostream>
#include "MyLibLL.h"

typedef void (__cdecl *my_f)();

int main()
{
	HINSTANCE hGetProcIDDLL = LoadLibrary(TEXT("J:\\Projects\\VS2017\\C++\\Console\\ClientDLL\\RunTimeDynamicLinking\\MyDLLLoadLib.dll"));

	if (!hGetProcIDDLL) 
	{
		std::cout << "could not load the dynamic library" << std::endl;
		return EXIT_FAILURE;
	}

	// resolve function address here
	my_f func = (my_f)GetProcAddress(hGetProcIDDLL, "DynamicArray");

	if (!func)
	{
		std::cout << "could not locate the function" << std::endl;
		return EXIT_FAILURE;
	}
	else
		func();

	if (!hGetProcIDDLL)
	{
		std::cout << "could not load the dynamic library" << std::endl;
		return EXIT_FAILURE;
	}
	else
	{
		CREATE_LIST pEntryFunction = (CREATE_LIST)GetProcAddress(hGetProcIDDLL, "Create");
		IDoubleLinkedList *lst = pEntryFunction();
		if (lst)
		{
			for (int i = 0; i < 5; ++i)
			{
				lst->PushFront(i);
				lst->PushBack(i);
				lst->Print();
			}
			lst->PushAfterKey(-88, 3);
			lst->Print();
			lst->RemoveKey(3);
			lst->Print();
			while (!lst->Empty())
			{
				lst->RemoveFront();
				lst->Print();
			}
			lst->Clean();
		}
	}


	FreeLibrary(hGetProcIDDLL);

	return EXIT_SUCCESS;
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
