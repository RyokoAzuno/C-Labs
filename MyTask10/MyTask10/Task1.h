#pragma once
#include <Windows.h>
#include <iostream>
#include <process.h>

DWORD WINAPI th1(LPVOID data);
DWORD WINAPI th2(LPVOID data);
DWORD WINAPI th3(LPVOID data);
