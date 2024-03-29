#include "pch.h"
#include <iostream>
#include<string>
#include<vector>
using namespace std;

struct List
{
	string a;
	List *next;
};

void fflist(List *u)
{
	string name_array[27] = { "Z", "a", "v", "a", "d", "s", "k", "a", "y", "a", " ", "E", "l", "e", "n", "a", " ", "V", "a", "l", "e", "r", "'", "e", "v", "n", "a" };

	int n = 27;

	string val;

	u->a = name_array[0];
	u->next = NULL;
	List *x;
	x = u; // Сейчас последний элемент списка совпадает с его началом
	   //введём вспомогательную переменную-указатель, которая будет 
			   // хранить адрес последнего элемента списка

	for (int i = 1; i < n; i++)
	{
		//Выделяем место в памяти для следующего элемента списка и               
			   // перенаправляем указатель x на выделенную область памяти:
		x->next = new List;
		x = x->next;
		x->a = name_array[i];
		x->next = NULL;
	}
}

void Print(List *u)
{
	int num = 0;
	string space = " ";
	List *p = u;
	cout << "\nList:" << endl;
	while (p)
	{
		cout << "\nInfo " << p->a << endl;
		cout << "Next Adress " << p->next << endl;
		cout << "List Adress " << p << endl;
		p = p->next;
	}
}

void PrintNewList(List *u)
{
	int num = 0;
	string space = " ";
	List *p = u;
	cout << "\nNew list:" << endl;
	while (p->a != space) 
	{
		p = p->next;
		if (p->a == space)
		{
			p = p->next;
			while (p)
			{
				cout << "\nInfo " << p->a << endl;
				cout << "Next Adress " << p->next << endl;
				cout << "List Adress " << p << endl;
				p = p->next;
			}
		}
	}
}

int main() {

	List *u = NULL;
	u = new List;
	fflist(u);
	Print(u);
	PrintNewList(u);
}

