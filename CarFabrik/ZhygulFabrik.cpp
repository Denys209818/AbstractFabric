#include "libs.h"
#include "ZhygulFabrik.h"

Motor* ZhygulFabrik::CreateMotor()
{
	return new ZhygulMotor();
}

Korpus* ZhygulFabrik::CreateKorpus()
{
	return new ZhygulKorpus();
}