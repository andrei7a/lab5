#pragma once
#include "Exam.h"
class FinalExam : public Exam{
protected:
	char* prepod;
public:
	FinalExam(){}
	FinalExam(char* , char*);
	void setPrepod(char*);
	char* getPrepod(void);
	void show();
};