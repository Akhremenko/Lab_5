
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
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << "������ ����� ���������: " << getVodoIzm() << endl;
	cout << "��� ��������: " << this->kap.getName() << endl;
	cout << "������� ��������: " << this->kap.getAge() << endl;
}

