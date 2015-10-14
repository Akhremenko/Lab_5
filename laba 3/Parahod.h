#pragma once
#include "Transportnoe_sredstvo.h"

class Parahod :public Transportnoe_sredstvo
{
	int kolMest;
public:
	Parahod();
	Parahod(int);
	void print();
	int getKolMest();
	void setKolMest(int);
};
