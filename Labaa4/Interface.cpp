#include "Interface.h"
#include <algorithm>

void Interface::writeFile(string fileName, multimap<string, Student> mapStudent)
{
	multimap<string, Student>::iterator Iter;
	ofstream text;
	string lastName;
	string fistNama;
	string patronymic;
	string key;
	string groop;
	double ball;
	bool stipend;
	text.open(fileName);
	try
	{
		if (!text.is_open())throw 1;
		cout << "Press enter: key  lastName  fistNama  patronymic  groop  ball  stipend" << endl;
		cin >> key >> lastName >> fistNama >> patronymic >> groop >> ball >> stipend;
		Student student;
		student.IntallStud(key, lastName, fistNama, patronymic, groop, ball, stipend);
		mapStudent.insert(pair<string, Student>(student.getKey(), student));
		//text << endl;
		text << size(mapStudent) << endl;
		
		for (Iter = mapStudent.begin();Iter != mapStudent.end();Iter++)
		{
			text << " ";
			text << Iter->second << endl;
		}

	}
	catch(int e)
	{
		cout << "Exception: " << e << endl;
	}
}

void Interface::writeFile(string fileName, vector<Notebook> vector_notebook)
{
	ofstream text;
	string lastName;
	string fistNama;
	string patronymic;
	int day;
	int mount;
	int year;
	string telephone_number;
	text.open(fileName);
	try
	{
		if (!text.is_open())throw 1;
		cout << "Press enter: lastName  fistNama  patronymic day mount year telephone number" << endl;
		cin >> lastName >> fistNama >> patronymic >> day >> mount >> year >> telephone_number;
		Notebook notebook;
		notebook.setNotebook(lastName, fistNama, patronymic, day, mount, year, telephone_number);
		vector_notebook.push_back(notebook);
		//text << endl;
		text << size(vector_notebook) << endl;

		for (int i = 0; i < vector_notebook.size(); i++)
		{
			text << " ";
			text << vector_notebook.at(i) << endl;
		}

	}
	catch (int e)
	{
		cout << "Exception: " << e << endl;
	}
}

multimap<string, Student> Interface::readStudFile(string fileName)
{
	multimap<string, Student> mulStud;
	string lastName;
	string fistNama;
	string patronymic;
	string key;
	string groop;
	string vocum;
	double ball;
	bool stipend;
	int lineCount;
	Student student;
	ifstream text(fileName);
	try
	{	
		if (!text.is_open())throw 1;
		text >> lineCount;
		for(int i = 0; i < lineCount; i++ )
		{
			text >> key >> lastName >> fistNama >> patronymic >>  groop >> ball >>  stipend;
			student.IntallStud(key, lastName, fistNama, patronymic, groop, ball, stipend);
			mulStud.insert(pair<string, Student>(key, student));
		}
		text.close();
		return mulStud;
	}
	catch(int e)
	{
		cout << "Exception: "<< e << endl;
		text.close();
		return mulStud;
	}
}

vector<Notebook> Interface::readNotebookFile(string fileName)
{
	vector <Notebook> vector_notebook;
	string lastName;
	string fistNama;
	string patronymic;
	int day;
	int mount;
	int year;
	string phone_number;
	int lineCount;
	Notebook notebook;
	ifstream text(fileName);
	try
	{
		if (!text.is_open())throw 1;
		text >> lineCount;
		for (int i = 0; i < lineCount; i++)
		{
			text >>  lastName >> fistNama >> patronymic >> day >> mount >> year >> phone_number;
			notebook.setNotebook(lastName, fistNama, patronymic, day, mount, year,phone_number);
			vector_notebook.push_back(notebook);
		}
		text.close();
		return vector_notebook;
	}
	catch (int e)
	{
		cout << "Exception: " << e << endl;
		text.close();
		return vector_notebook;
	}
}

void Interface::cheakStipend(multimap<string, Student> stud)
{
	multimap<string, Student>::iterator iter;
	for (iter = stud.begin(); iter != stud.end(); iter++)
	{
		if (iter->second.stipend == false)
		{
			cout << iter->second << endl;
		}
	}
}


void Interface::cheakBall(multimap<string, Student> stud,double ball)
{
	multimap<string, Student>::iterator iter;
	for (iter = stud.begin(); iter != stud.end(); iter++)
	{
		if (iter->second.ball > ball)
		{
			cout << iter->second << endl;
		}
	}
}

void Interface::test(string fileName, multimap<string, Student> mapStudent)
{
	multimap<string, Student>::iterator iter;
	for (iter = mapStudent.begin(); iter != mapStudent.begin(); iter++)
	{
		cout << iter->second.getF_I_O().lastName << iter->first << endl;
	}
}

void Interface::CheakBirthday(vector<Notebook> notebook, int day, int mounth)
{

	for(int i = 0; i < notebook.size(); i++ )

	{

		if ((notebook.at(i).getDate().month == mounth) and (notebook.at(i).getDate().day == (day + 3) ))

		{
	
			cout << notebook.at(i) << endl;

		}

	}
}
