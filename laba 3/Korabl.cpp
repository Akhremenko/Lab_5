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
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << "����������� ����� �� �������:  " << getKolPushek() << endl;
	cout << "��� ��������: " << this->kap.getName() << endl;
	cout << "������� ��������: " << this->kap.getAge() << endl;
}

