#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include "StructPeople.h"
#include "Header.h"

int TaskNumb()
{
	setlocale(LC_ALL, "Rus");
	int task;
	printf("Введите номер задания - ");
	scanf_s("%d", &task);
	return task;
}

void generateName(char * lName, int a)
{
	
	strcpy(lName,"person # ");
	char t[3];
	itoa(a, t, 10);
	strcat_s(lName, 20, t);
	//strcat(lName, t);
}

void RandomPeople(people * person, int numb)
{	
	srand(time(NULL));
	for (int i = 0; i < numb; i++)
	{
		int a = 1 + rand() % 100;
		generateName(person[i].lName, a);
		generateName(person[i].fName, a);
		generateName(person[i].mName, a);
		a = 0 + rand() % 2;
		switch (a)
		{
		case 0:
		{
			strcpy_s(person[i].gend, "male");
		}  break;

		case 1:
		{
			strcpy_s(person[i].gend, "female");
		} break;
		}
		person[i].DOF.day = 1 + rand() % 30;
		person[i].DOF.month = 1 + rand() % 11;
		person[i].DOF.year = 1945 + rand() % 70;
	}
	
}

void printPeople(struct people *person)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%s %s %s, %s\n", person[i].fName, person[i].mName, person[i].lName, person[i].gend);
		printf("%d.%d.%d\n\n", person[i].DOF.day, person[i].DOF.month, person[i].DOF.year);
	}
}