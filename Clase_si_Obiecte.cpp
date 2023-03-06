#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

struct Persoana
{
	unsigned vs;
	char nume[20];
	char prenume[20];
};

class Pers
{
private:
	unsigned vs;
	char nume[20];
	char prenume[20];
public:
	Pers(unsigned vs1, char* nume1, char* prenume1)
	{
		vs = vs1;
		strcpy_s(nume, nume1);
		strcpy_s(prenume, prenume1);
	}Pers() {}

	unsigned arata_vs() { return this->vs;}
	char* arata_nume() {return this->nume;}

} ;


int main()
{
	unsigned int a1 = 0;
	a1 = 17;
	Persoana p1;
	p1.vs = 20;
	strcpy_s(p1.nume, 4, "Ion");
	strcpy_s(p1.nume, 7, "George");
	Console::WriteLine("Hello C++ .Net");
	cout << p1.nume << "\t" << p1.prenume << p1.vs << endl;
	cout << "Hello C++.NET (cout)" << endl;
	Console::WriteLine("Utilizam clasa Pers");
	Pers p2(20, "Ionescu", "George");
	Pers* p3 = new Pers(21, "Ionescu", "Mihaela");
	cout << p2.arata_nume() << "\t" << p2.arata_vs() << endl;
	cout << p3->arata_nume() << "\t" << p3->arata_vs() << endl;
	Console::ReadKey();

	return 0;
}
