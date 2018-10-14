#include "pch.h"
#include "Task3.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Task3(char ch, int size)
{
	// upper vertical line
	for (int i = 0; i < size; ++i)
		cout << setw(size + 1) << setfill(' ') << ch << endl;

	cout.width((2 * size) + 2); cout << cout.fill(ch) << endl; // (2 * size) + 2 - symmetrical horizontal line

	// lower vertical line
	for (int i = 0; i < size; ++i)
		cout << setw(size + 1) << setfill(' ') << ch << endl;

}