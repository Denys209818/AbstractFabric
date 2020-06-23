#include "libs.h"
#include "Korpus.h"

void Korpus::ShowData()
{
	cout << "_________KORPUS________" << endl;
	cout << "Brand - " << this->brand << endl;
	cout << "Type - " << this->type << endl;
	cout << "Square - " << this->square << endl;
	cout << endl;
}

Korpus::~Korpus() {}