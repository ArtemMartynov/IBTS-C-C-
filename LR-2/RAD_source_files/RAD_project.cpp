#include <vcl.h>
#include <windows.h>

#pragma hdrstop
#pragma argsused

#include <tchar.h>
#include <Martynov_DLLPCH1.h>
#include <stdio.h>
#include <iostream>

int _tmain()
{
	setlocale(LC_ALL, "");
	int n = RADGruppa();
	wchar_t* a = RADImya();

	std::cout << "This project was built in RAD Studio\n";
	std::cout << "Gruppa RI-" << n << "\n";
	std::cout << "Student: ";
	std::wcout << RADImya() << "\n";
	system("PAUSE");
	return 1;
}
