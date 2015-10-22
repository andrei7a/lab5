#pragma once
#include "Isp.h"
class Laboratory:public Isp {
protected:
	static Laboratory * head;	
	bool protection;
	int point;
public:
	Laboratory *next;
	virtual void setPoint(int)=0;
	virtual int getPoint(void)=0;
	virtual bool getProtection(void) = 0;
	virtual void add() =0;
};