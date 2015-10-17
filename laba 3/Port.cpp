#include <iostream>
#include"Korvet.h"
#include"Transportnoe_sredstvo.h"
#include"Parusnik.h"
#include"Parahod.h"
#include"Korabl.h"
#include"Kapitan.h"
#include"Port.h"

using namespace std;



void Port::add2()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Port* q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
				q = q->next;
			q->next = this;
			this->next = NULL;
		}
	}
}
int Port::srVodoIzm()
{
	/*Transportnoe_sredstvo* t = Transportnoe_sredstvo::head;
	while (t)
	{
		t->;		
		t = t->next;

	}*/
 return 0;
}
