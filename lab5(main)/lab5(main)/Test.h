#pragma once
#include "TestElement.h"
#include "PrintConsole.h"
class Test: public TestElement {
protected:
	double result;
public:
	Test():TestElement() {}
	 int numQue();
	void add(Question* , bool);
	void showQueList();
	void calculateResultTest(void);
	double getResult(void);
};
