#pragma once
//#ifdef DLL_H
#define DLL_H

#include <iostream>

extern "C"
{
	int __stdcall VSGruppa();
	wchar_t* __stdcall VSImya();
}
//#endif