#pragma once
#include <iostream>
#include <string>
#include "Isp.h"
class Question{
protected:
	char* content;
	int point;
public:
	Question() {};
	Question(char*);
	Question(int);
	Question(char*, int);
	void setContent(char*);
	char* getContent(void);
	void setPoint(int);
	int getPoint(void);
};