#include<iostream>
#include"Korabl.h"

using namespace std;

Korabl::Korabl()
{
}

int Korabl::getKolPushek()
{
	return kolPushek_;
}

void Korabl::setKolPushek(int kolPushek)
{
	this->kolPushek_ = kolPushek;
}

void Korabl::print()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << "Колличество пушек на коробле:  " << getKolPushek() << endl;
	cout << "Имя капитана: " << this->kap.getName() << endl;
	cout << "Возраст капитана: " << this->kap.getAge() << endl;
}

