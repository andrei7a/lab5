#pragma once
#include "Session.h"

class ControllerSession : public Session {
public:
	ControllerSession() :Session() {};
	static void add(Exam*);
	static void del(void*);
	static int searchEx(char*);
	static int NumIsp();
	static int NumQuestion(int);

};
