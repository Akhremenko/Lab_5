#pragma once

class Port
{
public:
	int srVodoIzm();
	int srKolMest();
	void naitiMolodogoKapitana();
	void add2(); 
	Port* next;
protected:
	static Port* head;
};
