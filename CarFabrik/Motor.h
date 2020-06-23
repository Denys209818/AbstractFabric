#pragma once
#include "libs.h"

class Motor
{
protected:
	string name;
	string brand;
	int number;
public:
	void ShowData();

	virtual ~Motor();
};