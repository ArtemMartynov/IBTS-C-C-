// RI-571227_Martynov_VisualProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <Header.h>

int main()
{
	int n = VSGruppa();
	wchar_t* a = VSImya();
	setlocale(LC_ALL, "");
	std::cout << "Проект собран в Visual Studio с подключением dll\n";
	std::cout << "Группа РИ-" << n << "\n";
	std::cout << "Студент: ";
	std::wcout << a << "\n";
	system("PAUSE");
	return 0;
}