#include "Exam.h"

Exam::Exam(char * discipline)
{
	this->discipline = discipline;
}

int Exam::numQueTest(int col)
{
	int num = 0;
	for (int i = 0; i < numTest; i++)
	{
		if(massTest[i]->numQue() == col)
		{
			num++;
		}
	}
	return num;
}

void Exam::add(Test * TestElement)
{
	massTest =(Test**)realloc(massTest, sizeof(Test)*++numTest);
	massTest[numTest - 1] = TestElement;
}



void Exam::show()
{
	BR BR
	printText("Discipline: ");
	printText(this->getDiscipline());
	BR
	for (int i = 0; i < numTest; i++)
	{
		BR
		printText("Test ");
		printText(i);
		BR

		massTest[i]->showQueList();
		printText("Points Exam: ");
		
		massTest[i]->calculateResultTest();
		printText(massTest[i]->getResult());
		BR BR
	}
}

char * Exam::getDiscipline(void)
{
	return this->discipline;
}

void Exam::setDiscipline(char * discipline)
{
	this->discipline = discipline;
}
