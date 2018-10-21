#include "pch.h"
#include "Task3.h"
#include <iostream>

using namespace std;

void GetLastFolderName()
{
	const char *path = "l:\\3DMODELLING\\MODO\\Create Photorealistic Car Bugatti Veyron in Modo\\file.txt";
	//const char *path = "i:\\BOOKS\\C++\\C++\\C++11.pdf";
	const int SIZE = 80;
	int count = 0;
	for (int i = 0; i < strlen(path); ++i)
	{
		if (path[i] == '\\')
			++count;
	}

	char diskName = path[0];
	
	char **folders = new char*[count - 1];
	for (int i = 0; i < count - 1; ++i)
		folders[i] = new char[SIZE]();
	char *fileName = nullptr;

	int pathLength = strlen(path);

	// extract all folders from our path
	for (int i = 0, j = 0; i < pathLength && j < count - 1; ++i)
	{
		if (path[i] == '\\')
		{
			int k = 0;			   // counter for temporal array
			char tmp[SIZE] = {'\0'}; // temporal array for current folder
			++i;
			while (path[i] != '\\') // add folder name into tmp array
			{
				if (path[i] != '\0') // if end of string => break our loop
					tmp[k++] = path[i++];
				else
					break;
			}
			strcpy(folders[j++], tmp);
			--i;
		}
		//if (path[i] == '\0')
		//{
		//	strcpy(fileName, folders[--j]);
		//	break;
		//}
	}
	// extract file name from a path
	for (int i = pathLength - 1, j = 0;;)
	{
		char tmp[SIZE] = {'\0'};
		while (path[i] != '\\')
		{
			tmp[j++] = path[i--];
		}
		fileName = new char[strlen(tmp) + 1]();
		for (int k = 0, l = strlen(tmp) - 1; k < strlen(tmp); ++k)
			fileName[k] = tmp[l--];
		break;
	}
	cout << "Full Path: \n" << path << endl << endl;
	cout << "Disk name: " << static_cast<char>(toupper(diskName)) << endl << endl;
	cout << "Folders names: " << endl;
	for (int i = 0; i < count - 1; ++i)
	{
		if(i == count - 2)
			cout << "\\" << folders[i] << "\\" << "    -LAST FOLDER" << endl << endl;
		else
			cout << "\\" << folders[i] << "\\" << endl;
	}
	cout << "File name: " << fileName << endl;

	// dont forget to delete all pointers
	delete[] fileName;
	for (int i = 0; i < count - 1; ++i)
		delete folders[i];
	delete folders;
}