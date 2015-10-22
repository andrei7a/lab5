#include "Test.h"

int Test::numQue()
{
	int num = 0;
	TestElement *tempTestElement = head;
	while (tempTestElement != 0)
	{
		num++;
		tempTestElement = tempTestElement->next;
	}
	return num;
}

void Test::add(Question * QueElement, bool reply)
{
	if (head == nullptr)
	{
		head = new TestElement();
		head->setQueElement(QueElement);
		head->setReply(reply);
		head->next = nullptr;
	}
	else
	{
		TestElement *tempTestElement = head;
		while (tempTestElement->next !=0)
		{
			tempTestElement = tempTestElement->next;
		}
		tempTestElement->next = new TestElement();
		tempTestElement->next->setQueElement(QueElement);
		tempTestElement->next->setReply(reply);
		tempTestElement->next->next = nullptr;
	}
}

void Test::showQueList()
{
	TestElement *tempTestElement = head;
	while (tempTestElement != 0)
	{
		printQuestion(tempTestElement->getQueElement());
		printText("     ");
		switch (tempTestElement->getReply())
		{
		case 0: printText("False"); break;
		case 1: printText("True"); break;
		}
		BR
		tempTestElement = tempTestElement->next;
	}
}

void Test::calculateResultTest(void)
{
	 this->result = 0;
	
	TestElement *tempTestElement = head;
	while (tempTestElement != 0)
	{
		if (tempTestElement->getReply())
		{
			this->result += tempTestElement->getQueElement()->getPoint();
		}
		tempTestElement = tempTestElement->next;
	}
	
}

double Test::getResult(void)
{
	return this->result;
}
