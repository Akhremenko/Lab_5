#pragma once
#include "Transportnoe_sredstvo.h"

class Korvet :public Transportnoe_sredstvo
{
	int speed_;
public:
	Korvet();
	int getSpeed();
	void setSpeed(int);
	void print();
};
