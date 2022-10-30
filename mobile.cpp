#include <string>
#include "Mobile.h"

Mobile::Mobile(std::string marque, unsigned int number){
	this->marque=marque;
	this->number=number;
}
/*------------*/
void Mobile::setMarque(std::string marque){
	this->marque=marque;
}
/*-----------------*/
void Mobile::setNumber(unsigned int number)
{
	this->number=number;
}
/*-----------------*/
std::string Mobile::getMarque()
{
	return this->marque;
}
/*-----------------*/
unsigned int Mobile::getNumber()
{
	return this->number;
}