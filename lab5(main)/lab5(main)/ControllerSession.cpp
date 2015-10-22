#include <iostream>
#include "ConrollerSession.h"
using namespace std;




int ControllerSession::searchEx(char * discipline)
{
	int col = 0;
	Session *temp = ControllerSession::head;
	while (temp)
	{

		Exam *Element = (Exam*)temp->adress;
		if (strcmp(Element->getDiscipline(), discipline) == 0)
		{
			col++;
		}

		temp = temp->next;
	}
	return col;
}

int ControllerSession::NumIsp()
{
	int col = 0;
	Session *temp = ControllerSession::head;
	while (temp)
	{

		col++;

		temp = temp->next;
	}
	return col;
}

int ControllerSession::NumQuestion(int num)
{
	int col = 0;

	Session *temp = ControllerSession::head;
	while (temp)
	{

		col += ((Exam*)temp->adress)->numQueTest(num);

		temp = temp->next;
	}
	return col;
}

void ControllerSession::add(Exam* addr)
{
	if (head == nullptr)
	{
		Session::head = new Session();
		Session::head->next = nullptr;
		Session::head->adress = addr;
	}
	else
	{
		Session* temp = Session::head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = new Session();
		temp->next->next = nullptr;
		temp->next->adress = addr;
	}
}


	void ControllerSession::del(void* addr)
	{
		Session * temp = Session::head;
		Session * tempNext = Session::head->next;
		if (temp->adress != addr)
		{
			while (tempNext)
			{
				if (tempNext->adress == addr)
				{
					temp->next = tempNext->next;					
					Session *del = tempNext;
					tempNext = tempNext->next;
					delete[] del;

				}
				else
				{
					temp = temp->next;
					tempNext = tempNext->next;
				}
			}
		}
	else
	{
		Session::head = tempNext;
		Session *del = temp;
		temp = tempNext;
		tempNext = tempNext->next;
		delete[] del;
	}

}




