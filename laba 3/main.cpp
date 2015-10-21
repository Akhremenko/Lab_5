#pragma once
#include <iostream>
#include"Korvet.h"
#include"Transportnoe_sredstvo.h"
#include"Parusnik.h"
#include"Parahod.h"
#include"Korabl.h"
#include"Kapitan.h"

using namespace std;
Port Portik;

int main()
{
	int age, kolvo;
	char *name = new char[128], *nazvanie = new char[128];
	setlocale(LC_CTYPE, "Russian");
	Parahod *Par = new Parahod;
	cin >> kolvo;
	(*Par).setKolMest(kolvo);
	cin >> nazvanie;
	(*Par).setNazvanie(nazvanie);
	cin >> name;
	(*Par).kap.setName(name);
	cin >> age;
	(*Par).kap.setAge(age);
    Portik.insert(Par);

	Parahod *Pr = new Parahod;
	cin >> kolvo;
	(*Pr).setKolMest(kolvo);
	cin >> nazvanie;
	(*Pr).setNazvanie(nazvanie);
	cin >> name;
	(*Pr).kap.setName(name);
	cin >> age;
	(*Pr).kap.setAge(age);
	Portik.insert(Pr);

	Parusnik *Prs = new Parusnik;
	cin >> kolvo;
	(*Prs).setVodoIzm(kolvo);
	cin >> nazvanie;
	(*Prs).setNazvanie(nazvanie);
	cin >> name;
	(*Prs).kap.setName(name);
	cin >> age;
	(*Prs).kap.setAge(age);
	Portik.insert(Prs);

	Parusnik *Pas = new Parusnik;
	cin >> kolvo;
	(*Pas).setVodoIzm(kolvo);
	cin >> nazvanie;
	(*Pas).setNazvanie(nazvanie);
	cin >> name;
	(*Pas).kap.setName(name);
	cin >> age;
	(*Pas).kap.setAge(age);
	Portik.insert(Pas);

	cout<<"Среднее кол-во мест: "<<Portik.srKolMest()<<endl;
	cout << "Среднее кол-во водоизмещения: " << Portik.srVodoIzm() << endl;
	Portik.naitiMolodogoKapitana();
	return 0;
}