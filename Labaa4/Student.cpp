#include "Student.h"
Student::Student()
{
	this->key = "";
	this->fio.lastName = "";
	this->fio.fistName = "";
	this->fio.Patronymic = "";
	this->ball = 0;
	this->groop = "";
	this->stipend = false;
}
string Student::getGroop()
{
	return string();
}
double Student::getBall()
{
	return this->ball;
}

bool Student::getStipend()
{
	return this->stipend;
}

string Student::getKey()
{
	return this-> key;
}

F_I_O Student::getF_I_O()
{
	return this->fio;
}

void Student::IntallStud(string key, string lastName, string fistName, string patrinymic, string groop, double ball, bool stipend)
{
	this->key = key;
	this->fio.lastName = lastName;
	this->fio.fistName = fistName;
	this->fio.Patronymic = patrinymic;
	this->ball = ball;
	this->groop = groop;
	this->stipend = stipend;
}

std::ostream& operator<<(std::ostream& text, const Student& student)
{
	text << student.key<< " " << student.fio.lastName << " " << student.fio.fistName << " " << student.fio.Patronymic << " " << student.groop << " " << student.ball << " " << student.stipend;
	return text;
}

//std::istream& operator>>(std::istream& in, const Student& student)
//{
//	in >>  
//}
