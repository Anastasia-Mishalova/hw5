// hw5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <ctype.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <typeinfo>
#include <fstream>
#include <malloc.h>
#include <cstring>
#include <vector>

using namespace std;
//Создайте класс Book Необходимо хранить данные : Автор, Название, Издательство, Год, Количество страниц.
//Создать массив объектов.Вывести : ■ список книг заданного автора; ■ список книг, выпущенных заданным издательством; ■ список книг, выпущенных после заданного года.

class Book {
private:
    string author;
    string title;
    string publisher;
    int year;
    int page;

public:
    string getAuthor() { return author; }
    void setAuthor(string _author) { author = _author; }

    string getTitle() { return title; }
    void setName(string _title) { title = _title; }

    string getPublisher() { return publisher; }
    void setPublisher(string _publisher) { publisher = _publisher; }

    int getYear() { return year; }
    void setYear(int _year) { year = _year; }

    int getPage() { return page; }
    void setPage(int _page) { page = _page; }


    Book(string _author, string _title, string _publisher, int _year, int _page)
    {
        author = _author;
        title = _title;
        publisher = _publisher;
        year = _year;
        page = _page;
    }

    void showBook()
    {
            cout << "\nАвтор: " << author;
            cout << "\nНазвание: " <<title;
            cout << "\nИздательство: " << publisher;
            cout << "\nГод: " << year;
            cout << "\nКоличество страниц в книге: " << page;
            cout << endl; 
    }
};

int main()
{
	setlocale(LC_ALL, "ru");

    int year, menu;
    string publisher, author;

    vector<Book> books;

    books.emplace_back(Book("AA", "A", "A", 1840, 770));
    books.emplace_back(Book("BB", "B", "A", 1917, 1950));
    books.emplace_back(Book("CC", "C", "A", 1954, 328));
    books.emplace_back(Book("DD", "D", "B", 1735, 937));
    books.emplace_back(Book("EE", "E", "B", 1623, 254));
    books.emplace_back(Book("FF", "F", "B", 1991, 12));
    books.emplace_back(Book("GG", "G", "C", 1974, 529));
    books.emplace_back(Book("HH", "H", "C", 2000, 102));
    books.emplace_back(Book("II", "I", "D", 2023, 362));
    books.emplace_back(Book("JJ", "J", "I", 1812, 123));

    cout << "1 - Поиск по автору \n2 - Поиск по издательству \n3 - Поиск после заданного года\n";
    cin >> menu;
    switch (menu)
    {
    case 1:
    {
        cout << "Введите автора, книги которого необходимо найти: ";
        cin >> author;
        for (Book& b : books) {
            if (b.getAuthor() == author)
            {
                b.showBook();
            }
        }
        break;
    }
    case 2:
    {
        cout << "Введите издательство, книги которого необходимо найти: ";
        cin >> publisher;
        for (Book& b : books) {
            if (b.getPublisher() == publisher)
            {
                b.showBook();
            }
        }
        break;
    }
    case 3:
    {
        cout << "Введите год, после которого необходимо найти: ";
        cin >> year;
        for (Book& b : books) {
            if (b.getYear() > year)
            {
                b.showBook();
            }
        }
        break;
    }
    default:
        cout << "Ошибка ввода";
        break;
    }
}

