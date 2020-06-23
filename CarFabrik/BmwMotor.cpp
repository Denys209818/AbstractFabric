#include "libs.h"
#include "BmwMotor.h"

BmwMotor::BmwMotor()
{
	this->brand = "BMW";
	this->name = "V8 Turbo";
	this->number = rand() % 1000000;
}