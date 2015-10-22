#include "EmployeeLaboratory.h"
EmployeeLaboratory::EmployeeLaboratory(char * discipline, int point, bool protection)
{
	this->protection = protection;
	this->discipline = discipline;
	this->point = point;
}
EmployeeLaboratory::EmployeeLaboratory(char * discipline, bool protection)
{
	this->protection = protection;
	this->discipline = discipline;
	this->point =0;
}
char * EmployeeLaboratory::getDiscipline(void)
{
	return discipline;
}
void EmployeeLaboratory::setDiscipline(char* discipline)
{
	this->discipline = discipline;
}
bool EmployeeLaboratory::getProtection(void)
{
	return protection;
}
void EmployeeLaboratory::setPoint(int point)
{
	this->point = point;
}

int EmployeeLaboratory::getPoint(void)
{
	return this->point;
}

void EmployeeLaboratory::add()
{
	if (head == nullptr)
	{
		head = this;
		head->next = nullptr;
	}
	else {
		Laboratory *temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		temp->next = this;
		temp->next->next = nullptr;
	}
}

void EmployeeLaboratory::show()
{
	int num = 0;
	Laboratory *temp = head;
	while (temp != nullptr)
	{
		num++;
		printText("Laboratory "); printText(num); BR
			printText(temp->getDiscipline()); printText("   "); printText(temp->getProtection()); printText("   ");
		if (temp->getProtection())
		{
			printText(temp->getPoint());
		}
		BR BR
		temp = temp->next;
	}
}
