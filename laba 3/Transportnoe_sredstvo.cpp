#include <iostream>
#include "Transportnoe_sredstvo.h"

using namespace std;

Transportnoe_sredstvo::Transportnoe_sredstvo(char* nazvanie)
{
	this->nazvanie = nazvanie;
}

void Transportnoe_sredstvo::print()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << "Имя капитана: " << this->kap.name << endl;
	cout << "Возраст капитана: " << this->kap.age << endl;
}

Transportnoe_sredstvo::Transportnoe_sredstvo()
{
	this->nazvanie = "автпвлпжл";
}

char* Transportnoe_sredstvo::getNazvanie()
{
	return nazvanie;
}

void  Transportnoe_sredstvo::setNazvanie(char*)
{
	this->nazvanie = nazvanie;
}
