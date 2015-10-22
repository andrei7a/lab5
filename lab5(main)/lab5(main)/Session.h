#pragma once
#include "FinalExam.h"


class Session {
public:
	static Session* head;
	void* adress;
public:
	Session() {};
	Session* next;
};


