#include "Notebook.h"

std::ostream& operator<<(std::ostream& out, const Notebook& notebook)
{
    out << notebook.fio.last_name << " " << notebook.fio.fist_name << " " << notebook.fio.patronymic << " "
        << notebook.date.day << " " << notebook.date.month << " " << notebook.date.year << " " << notebook.telephone_number << endl;
    return out;
}

FIO Notebook::getF_I_O()
{
    return this->fio;
}

Date Notebook::getDate()
{
    return this->date;
}

string Notebook::getTelephone_number()
{
    return this->telephone_number;
}

Notebook::Notebook()
{
    this->date.day = 0;
    this->date.month = 0;
    this->date.year = 0;
    this->fio.last_name = "";
    this->fio.fist_name = "";
    this->fio.patronymic = "";
    this->telephone_number = "";
}

void Notebook::setNotebook(string last_name, string fist_name, string patronymic, int day, int month, int year, string telephone)
{

    this->date.day = day;
    this->date.month = month;
    this->date.year = year;
    this->fio.last_name = last_name;
    this->fio.fist_name = fist_name;
    this->fio.patronymic = patronymic;
    this->telephone_number = telephone;
}
