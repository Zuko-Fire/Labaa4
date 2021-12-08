// Labaa4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Interface.h"
#include "Student.h"
#include <map>
#include <iostream>
#include <vector>
#include "Notebook.h"
using namespace::std;
int main()
{
    system("chcp 1251");
    multimap<string, Student> mapStud;
    multimap<string, Student>::iterator iter;
    vector <Notebook> notebook;
    Interface i;
    while (true)
    {
        cout << "1.Список студентов\n" << "2.Блокнот" << endl;
        int a;
        cin >> a;
        if (a == 1)
        {
            bool k = true;
            while (k)
            {
                cout << "1.Загрузить файл\n" << "2.Записать в файл\n" << "3.Поиск студентов по ср.баллу\n" << "4.Вывести студентов без стипендии\n" << "5.Назад\n" << "6.Выход\n";
                cin >> a;
                switch (a)
                {
                case(1):
                {
                    mapStud = i.readStudFile("Stud.txt");
                    break;
                }
                case(2):
                {
                    i.writeFile("Stud.txt", mapStud);
                    break;
                }
                case(3):
                {   cout << "Введите средний балл для поиска\n";
                double ball;
                cin >> ball;
                i.cheakBall(mapStud, ball);
                break;
                }
                case(4):
                {
                    i.cheakStipend(mapStud);
                    break;
                }
                case(5):
                {
                    k = false;
                    break;
                }
                case(6):
                {
                    return 0;
                }
                default:
                    break;
                }
            }
        }
        if (a == 2)
        {
            bool k = true;
            while (k)
            {
                cout << "1.Загрузить файл\n" << "2.Записать в файл\n" << "3.Поиск по дню рождения(у кого через 3 дня)\n" << "4.назад\n" << "5.Выход\n";
                cin >> a;
                switch (a)
                {
                case(1):
                {
                    notebook = i.readNotebookFile("Notebook.txt");
                    break;
                }
                case(2):
                {
                    i.writeFile("Notebook.txt", notebook);
                    break;
                }
                case(3):
                {   cout << "Введите день и месяц\n";
                int day, mount;
                cin >> day >> mount;
                i.CheakBirthday(notebook, day, mount);
                break;
                }
                case(4):
                {
                    k = false;
                    break;
                }
                case(5):
                {
                    return 0;
                    break;
                }

                default:
                    break;
                }
            }
        }

    }
    return 0;
}



