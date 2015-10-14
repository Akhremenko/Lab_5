#include<iostream>
#include"Korvet.h"

using namespace std;

Korvet::Korvet()
{
}

int Korvet::getSpeed()
{
	return speed_;
}

void Korvet::setSpeed(int speed)
{
	this->speed_ = speed;
}

void Korvet::print()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << "Скорость корвета: " << getSpeed() << endl;
	cout << "Имя капитана: " << this->kap.getName() << endl;
	cout << "Возраст капитана: " << this->kap.getAge() << endl;
}

