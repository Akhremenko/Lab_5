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
	Transportnoe_sredstvo::show();

	Parusnik a;
	Korabl c;
	Parahod d;
	Parusnik e;
	Korvet f;

	a.add();
	a.kap.setName("Александр");
	a.setVodoIzm(5);
	d.setKolMest(9);
	d.add();
	c.setKolPushek(10);
	c.add();
	f.setSpeed(6);
	f.add();


	return 0;
}