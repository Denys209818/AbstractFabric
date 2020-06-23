#pragma once
#include "libs.h"
#include "Motor.h"
#include "Korpus.h"

class ICarFabrik
{
public:
	virtual Motor* CreateMotor() = 0;
	virtual Korpus* CreateKorpus() = 0;
	virtual ~ICarFabrik()
	{

	}
};
