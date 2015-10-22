#include "PrintConsole.h"

void printText(char* Text)
{
	cout << Text;
}
void printText(int num)
{
	cout << num;
}
void printText(double num)
{
	cout << num;
}
void printText(bool num)
{
	if (num)
		cout << "True";
	else
		cout << "False";
}
void printQuestion(Question* QueElement)
{
	cout << QueElement->getContent() << "   " << QueElement->getPoint();
}

