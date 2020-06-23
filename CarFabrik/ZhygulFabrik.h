#pragma once
#include "libs.h"
#include "ICarFabrik.h"
#include "ZhygulMotor.h"
#include "ZhygulKorpus.h"

class ZhygulFabrik : public ICarFabrik
{
public:
	Motor* CreateMotor();

	Korpus* CreateKorpus();
};
