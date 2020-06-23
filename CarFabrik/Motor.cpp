#include "libs.h"
#include "Motor.h"

void Motor::ShowData()
{
	cout << "_________MOTOR________" << endl;
	cout << "Brand - " << this->brand << endl;
	cout << "name - " << this->name << endl;
	cout << "number - " << this->number << endl;
	cout << endl;
}

 Motor::~Motor()
{

}