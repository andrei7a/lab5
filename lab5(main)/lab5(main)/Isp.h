#pragma once
class Isp{
protected:
	char* discipline;
public:
	virtual void setDiscipline(char*) = 0;
	virtual char* getDiscipline(void) = 0;
};