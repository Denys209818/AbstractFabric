#include "libs.h"
#include "ZhygulMotor.h"

ZhygulMotor::ZhygulMotor()
{
	this->brand = "Zhyguli";
	this->name = "v1";
	this->number = rand() % 1000000;
}