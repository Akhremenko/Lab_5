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
	//void add();		// �������� ������� � ������
	//static void show();		// ������� ���� ������
	//Transportnoe_sredstvo* next;
public:
	//static Transportnoe_sredstvo* head;
};