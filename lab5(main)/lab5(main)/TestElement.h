#pragma once
#include "Question.h"
class TestElement {
protected:
	TestElement *head = nullptr;
	Question *QueElement;
	bool reply;
public:	
	TestElement(){}
	TestElement *next;
	Question* getQueElement(void);	
	void setQueElement(Question*);
	void setReply(bool);
	bool getReply(void);
};
