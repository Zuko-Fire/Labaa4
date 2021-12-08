#pragma once
#include"Student.h"
#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <vector>
#include"Notebook.h"

class Interface: public Student, public Notebook
{
public:
	void writeFile(string fileName,multimap<string,Student> mapStudent);
	void writeFile(string fileName, vector <Notebook> vector_notebook);
	multimap <string, Student> readStudFile(string fileName);
	vector <Notebook> readNotebookFile(string fileName);
	void cheakStipend(multimap<string, Student> stud);
	void cheakBall(multimap<string,Student> stud,double ball);
	void test(string fileName, multimap<string, Student> mapStudent);
	void CheakBirthday(vector<Notebook> notebook, int day, int mounth);
};

