#pragma once
#include "Laboratory.h"
#include "PrintConsole.h"
class EmployeeLaboratory:public Laboratory
{
public:
	EmployeeLaboratory(char*, int, bool);
	EmployeeLaboratory(char*, bool);
	char* getDiscipline(void);
	void setDiscipline(char*);
	bool getProtection(void);
	void setPoint(int);
	int getPoint(void);
	void add();
	static void show();
};
