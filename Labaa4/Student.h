#pragma once
#include <iostream>
#include <string>
using namespace::std;
struct F_I_O
{
	string lastName;
	string fistName;
	string Patronymic;
};


class Student
{
public:
	string groop;
	double ball;
	bool stipend;
	string key;
	Student();
	string getGroop();
	double getBall();
	bool getStipend();
	string getKey();
	F_I_O getF_I_O();
	void IntallStud(string key, string lastName, string fistName, string patrinymic, string groop, double ball, bool stipend);
	friend std::ostream& operator << (std::ostream& out, const Student& student);
	/*friend std::istream& operator >> (std::istream& in, const Student& student);*/
protected:
	F_I_O fio;
};

