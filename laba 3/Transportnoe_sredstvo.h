#pragma once
#include "Kapitan.h"
#include "Port.h"

class Transportnoe_sredstvo
{
	char* nazvanie;
public:
	Kapitan kap;
	Transportnoe_sredstvo(char*);
	Transportnoe_sredstvo();
	char* getNazvanie();
	void setNazvanie(char*);
	virtual void print() = 0;
protected:
	Transportnoe_sredstvo *next;
	friend class Port; 
};