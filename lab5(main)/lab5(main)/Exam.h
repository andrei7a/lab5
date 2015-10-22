#pragma once
#include "Test.h"
#include "Isp.h"
#include "PrintConsole.h"
class Exam: public Isp {
protected:
	Test ** massTest = (Test**)malloc(0);
	int numTest = 0;
public:
	Exam() {};
	Exam(char*);
	int numQueTest(int);
	void add(Test*);
	void show();
	char* getDiscipline(void);
	void setDiscipline(char*);
};