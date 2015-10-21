#pragma once

class Kapitan
{
public:
	int age;
	char* name;

public:
	Kapitan(int, char*);
	Kapitan();
	int getAge();
	void setAge(int);
	char* getName();
	void setName(char*);
	void printK();
	friend class Parusnik;
	friend class Parahod;
	friend class Transportnoe_sredstvo;
};
