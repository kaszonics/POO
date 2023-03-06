#include "pch.h"
#include <iostream>
#include <list>

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

	unsigned arata_vs() { return this->vs; }
	char* arata_nume() { return this->nume; }
	char* arata_prenume() { return this->prenume; }

};


int main()
{
	int nrpersoane;
	cout << "Inroduceti nr. de persoane:";
	cin >> nrpersoane;
	list <Pers> listapersoane;

	for (int i = 0; i < nrpersoane;i++)
	{
		unsigned vs;
		char nume[20];
		char prenume[20];
		cout << "Persoana nr. " << i + 1 << endl;
		cout << "Nume:"; cin >> nume;
		cout << "Prenume:"; cin >> prenume;
		cout << "Varsta:"; cin >> vs;
		cout << endl;
		Pers pers = Pers(vs, nume, prenume);
		listapersoane.push_back(pers);

	}

	for (Pers pers : listapersoane)
	{
		cout << "Nume si prenume: " << pers.arata_nume() << pers.arata_prenume() << "\t" << " Varsta: " << pers.arata_vs() << endl;
	}
	Console::ReadKey();

	return 0;

}
