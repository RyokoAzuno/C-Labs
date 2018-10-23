#pragma once
#include <Windows.h>
#include <iostream>
#include <process.h>
#include <string>

struct MyData
{
	COORD coord;
	std::string str;
	WORD color; // 4 - Red, 2 - Green, 3 - Blue
};

DWORD WINAPI th(LPVOID data);
DWORD WINAPI filler(LPVOID data);

