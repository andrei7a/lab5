#include "Question.h"
#include "Test.h"
#include <iostream>
#include "Exam.h"
#include "FinalExam.h"
#include "EmployeeLaboratory.h"
#include "Session.h"
#include "ConrollerSession.h"
Laboratory *Laboratory::head = nullptr;
Session *Session::head = nullptr;
using namespace std;


void main()
{
	Question *que1 = new Question("What is your name?", 1);
	Question *que2 = new Question("What is WLAN?",18);
	Question *que3 = new Question("Referat?", 100);
	
	Question *que4 = new Question("que4",15);
	Question *que5 = new Question("que5", 15);
	Question *que6 = new Question("que6", 15);
	Question *que7 = new Question("que7", 15);
	
	Test *test1 = new Test();
	test1->add(que1,1);
	test1->add(que2,0);
	test1->add(que3,1);
	test1->showQueList();
	test1->calculateResultTest();

	Test *test2 = new Test();
	test2->add(que4, 1);
	test2->add(que5, 0);
	test2->add(que6, 1);
	test2->showQueList();
	test2->calculateResultTest();

	cout << endl << test1->getResult()<<endl;
	Exam *exam1 = new Exam("Mathematics");
	exam1->add(test1);
	exam1->add(test2);
	exam1->show();

	FinalExam *finExam1 = new FinalExam("Philosophy", "Krivorotko");
	finExam1->add(test1);
	finExam1->add(test2);
	finExam1->show();


	EmployeeLaboratory *lab1 = new EmployeeLaboratory("OOP", 10, true);
	EmployeeLaboratory *lab2 = new EmployeeLaboratory("OOP", 8, true);
	EmployeeLaboratory *lab3 = new EmployeeLaboratory("Geometry", false);
	EmployeeLaboratory *lab4 = new EmployeeLaboratory("Design", 10, true);

	lab1->add();
	lab2->add();
	lab3->add();
	lab4->add();

	EmployeeLaboratory::show();

	ControllerSession::add(exam1);
	ControllerSession::add(finExam1);
	ControllerSession::del(finExam1);
	printText("Phylosophy Exam: ");
	printText(ControllerSession::searchEx("Philosophy"));
	BR BR
	printText("Isp: ");
	printText(ControllerSession::NumIsp());
	BR BR
	printText("Test include 3 Question: ");
	printText(ControllerSession::NumQuestion((3)));
	BR BR

}

