#pragma once
#include "Kapitan.h"
#include "Port.h"

class Transportnoe_sredstvo
{
	char* nazvanie;
public:
	Kapitan kap;
public:
	Transportnoe_sredstvo(char*);
	Transportnoe_sredstvo();
	char* getNazvanie();
	void setNazvanie(char*);
	virtual void print() = 0;
	//void add();		// добавить элемент в список
	//static void show();		// вывести весь список
	//Transportnoe_sredstvo* next;
public:
	//static Transportnoe_sredstvo* head;
};