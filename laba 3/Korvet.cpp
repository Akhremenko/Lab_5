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
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << "�������� �������: " << getSpeed() << endl;
	cout << "��� ��������: " << this->kap.getName() << endl;
	cout << "������� ��������: " << this->kap.getAge() << endl;
}

