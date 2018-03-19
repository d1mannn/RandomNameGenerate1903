#pragma once

//Фамилия
//Имя
//Отчество
//Пол
//Должность
//Дата рождения

enum gender
{
	male, female
};

struct dateofbirth
{
	int day;
	int month;
	int year;
};
struct people
{
	char lName[30];
	char fName[30];
	char mName[30];
	gender gender;
	char gend[10];
	char job[30];
	dateofbirth DOF;
};