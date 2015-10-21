#pragma once
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
	t = begin;
	while (t)
	{
		if (typeid(*t) == typeid(Parusnik))
		{
			sum += (dynamic_cast<Parusnik*>(t)->getVodoIzm());
		}
		t = t->next;
	}
 return sum;
}

int Port::srKolMest()
{
	int sum = 0;
	Transportnoe_sredstvo* t;
	t = begin;
	while (t)
	{
		if (typeid(*t) == typeid(Parahod))
		{
			sum += (dynamic_cast<Parahod*>(t)->getKolMest());
		}
		t = t->next;
	}
	return sum;
}

void Port::naitiMolodogoKapitana()
{
	Transportnoe_sredstvo* t;
	t = begin;
	while (t)
	{
		if (t->kap.getAge() < 35)
		{
			t->print();
		}
		t = t->next;
	}
}