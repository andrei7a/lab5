#include "FinalExam.h"

FinalExam::FinalExam(char* discipline, char * prepod)
{
	this->discipline = discipline;
	this->prepod = prepod;
}

void FinalExam::setPrepod(char * prepod)
{
	this->prepod = prepod;
}

char * FinalExam::getPrepod(void)
{
	return prepod;
}

void FinalExam::show()
{
	Exam::show();
		printText("Teacher: ");
	printText(this->getPrepod());
		BR BR BR
}
