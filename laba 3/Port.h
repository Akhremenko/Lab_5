#pragma once
#include "Transportnoe_sredstvo.h"

class Transportnoe_sredstvo;

class Port
{
public:
	int srVodoIzm();
	int srKolMest();
	void naitiMolodogoKapitana();
	void insert(Transportnoe_sredstvo*);
	Port* next;
private:
	Transportnoe_sredstvo* begin;
};
