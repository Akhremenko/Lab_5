#include <iostream>
#include"Korvet.h"
#include"Transportnoe_sredstvo.h"
#include"Parusnik.h"
#include"Parahod.h"
#include"Korabl.h"
#include"Kapitan.h"
#include"Port.h"

using namespace std;


void Port::insert(Transportnoe_sredstvo *p)
{
	Transportnoe_sredstvo *r;
	r = begin;
	begin = p;
	p->next = r;
}
int Port::srVodoIzm()
{
	int sum = 0;
	Transportnoe_sredstvo* t;
	while (t)
	{
		if (typeid(*t) == typeid(Parusnik))
		{
			sum += dynamic_cast<Parusnik*>(t)->getVodoIzm;
		}
		t = t->next;
	}
 return sum;
}
