#pragma once
#include "Transportnoe_sredstvo.h"

class Parusnik :public Transportnoe_sredstvo
{
	int vodoIzm;
public:
	Parusnik();
	int getVodoIzm();
	void setVodoIzm(int);
	void print();
};