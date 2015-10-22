#include "TestElement.h"

Question* TestElement::getQueElement()
{
	return this->QueElement;
}

void TestElement::setQueElement(Question* QueElement)
{
	this->QueElement = QueElement;
}

void TestElement::setReply(bool reply)
{
	this->reply = reply;
}

bool TestElement::getReply(void)
{
	return this->reply;
}
