#pragma once
#include <iostream>
#include <string>
using namespace::std;
struct FIO
{
	string last_name;
	string fist_name;
	string patronymic;
};

struct Date
{
	int day;
	int month;
	int year;
};

class Notebook
{public:
	string telephone_number;
	FIO getF_I_O();
	Date getDate();
	string getTelephone_number();
	Notebook();
	void setNotebook(string last_name, string fist_name, string patronymic, int day, int month , int year, string telephone);
	friend std::ostream& operator << (std::ostream& out, const Notebook& notebook);
protected:
	FIO fio;
	Date date;
};

