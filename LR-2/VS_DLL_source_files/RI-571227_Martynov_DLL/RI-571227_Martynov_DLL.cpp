// RI-571227_Martynov_DLL.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "Header.h"

extern "C" int __stdcall VSGruppa()
{
	return 571227;
}

extern "C" wchar_t* __stdcall VSImya()
{
	setlocale(LC_ALL, "");
	wchar_t *a = new wchar_t[15];
	wcscpy_s(a,15,L"Артём Мартынов");
	return a;
}