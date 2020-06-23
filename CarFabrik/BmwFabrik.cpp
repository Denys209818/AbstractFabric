#include "libs.h"
#include "BmwFabrik.h"

Motor* BmwFabrik::CreateMotor()
{
	return new BmwMotor();
}

Korpus* BmwFabrik::CreateKorpus()
{
	return new BmwKorpus();
}