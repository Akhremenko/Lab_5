#pragma once
#include "Transportnoe_sredstvo.h"

class Korabl :public Transportnoe_sredstvo
{
	int kolPushek_;
public:
	Korabl();
	int getKolPushek();
	void setKolPushek(int);
	void print();
};