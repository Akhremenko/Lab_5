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
		cout << "�������� �������: " << getNazvanie() << endl;
		cout << "����������� ���� ��������:  " << getKolMest() << endl;
		cout << "��� ��������: " << this->kap.getName() << endl;
		cout << "������� ��������: " << this->kap.getAge() << endl;
}
