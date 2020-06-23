#pragma once
#include "libs.h"
#include "ICarFabrik.h"
#include "BmwMotor.h"
#include "BmwKorpus.h"

class BmwFabrik : public ICarFabrik
{
public:
	Motor* CreateMotor();

	Korpus* CreateKorpus();
};