#include <iostream>
#include"Korvet.h"
#include"Transportnoe_sredstvo.h"
#include"Parusnik.h"
#include"Parahod.h"
#include"Korabl.h"
#include"Kapitan.h"

using namespace std;

Transportnoe_sredstvo* Transportnoe_sredstvo::head = NULL;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	//Transportnoe_sredstvo::show();

	Parusnik a;
	Korabl c;
	Parahod d;
	Parusnik e;
	Korvet f;

	//a.add();
	//a.kap.setName("���������");
	//a.setVodoIzm(5);
	//d.setKolMest(9);
	//d.add();
	//c.setKolPushek(10);
	//c.add();
	//f.setSpeed(6);
	//f.add();

	int i=0;
	for (;;)
	{
		switch (i)
		{
		case 0: cout << "0 - �������� ����" << endl;
		cout << "1 - �������� ����� � ������ ������������ �������" << endl;
		cout << "2 - ������� ����� � ������ ������������ �������" << endl;
		cout << "3 - ������� ������������ ���� ���������� � �����" << endl;
		cout << "4 - ������� ���-�� ���������� ���� �� ���������" << endl;
		cout << "5 - ��� ������������ �������� �� ������� ������� �������� ������ 35 ���" << endl; 
		cout << "6 - �����" << endl; break;
		case 1: a.
		case 6:break;

		default:
			break;
		}
		cin >> i;
	}
	return 0;
}