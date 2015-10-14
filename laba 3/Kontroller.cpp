#include <iostream>
#include"Korvet.h"
#include"Transportnoe_sredstvo.h"
#include"Parusnik.h"
#include"Parahod.h"
#include"Korabl.h"
#include"Kapitan.h"
#include"Kontroller.h"

using namespace std;

int Kontroller::srVodoIzm()
{
	Transportnoe_sredstvo* t = head;
	while (t)
	{
		t->print();		// Вызыв функции вывода классов по списку
		t = t->next;
	}
}
