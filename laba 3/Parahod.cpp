#include<iostream>
#include"Parahod.h"

using namespace std;

Parahod::Parahod()
{
}

Parahod::Parahod(int kolvo)
{
	this->kolMest = kolvo;
}

int Parahod::getKolMest()
{
	return kolMest;
}

void Parahod::setKolMest(int KolMest)
{
	this->kolMest = KolMest;
}

void Parahod::print()
{
		cout << "Название корабля: " << getNazvanie() << endl;
		cout << "Колличество труб парахода:  " << getKolMest() << endl;
		cout << "Имя капитана: " << kap.name << endl;
		cout << "Возраст капитана: " << kap.age << endl;
}
