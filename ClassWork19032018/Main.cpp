#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include "StructPeople.h"
#include "Header.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int task;
	do
	{
		task = TaskNumb();
		switch (task)
		{
			case 1:
			{
				//Вывести данные об инженерах, пенсионного возраста(мужчинам больше 65 - ти лет, женщинам 60).
				struct people person[10];
				RandomPeople(person, 10);
				printPeople(person);
			} break;
		}
	} while (task > 0);
}