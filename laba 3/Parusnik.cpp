
#include<iostream>
#include"Parusnik.h"

using namespace std;

Parusnik::Parusnik()
{
}

int Parusnik::getVodoIzm()
{
	return vodoIzm;
}

void Parusnik::setVodoIzm(int vodoIzm)
{
	this->vodoIzm = vodoIzm;
}


void Parusnik::print()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << "Длинна мачты парусника: " << getVodoIzm() << endl;
	cout << "Имя капитана: " << this->kap.getName() << endl;
	cout << "Возраст капитана: " << this->kap.getAge() << endl;
}

