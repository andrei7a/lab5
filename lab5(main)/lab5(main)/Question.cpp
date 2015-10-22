#include "Question.h"


Question::Question(char* content)
{
	setContent(content);
	setPoint(0);
}

Question::Question(int point)
{
	setPoint(point);
	setContent("");
}

Question::Question(char* content, int point)
{
	setContent(content);
	setPoint(point);
}

void Question::setContent(char* content)
{
	this->content = content;
}

char* Question::getContent(void)
{
	return this->content;
}

void Question::setPoint(int point)
{
	this->point = point;
}

int Question::getPoint(void)
{
	return this->point;
}

