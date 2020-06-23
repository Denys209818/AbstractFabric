#include "libs.h"
#include "Motor.h"
#include "Korpus.h"
#include "ICarFabrik.h"
#include "BmwMotor.h"
#include "ZhygulMotor.h"
#include "BmwKorpus.h"
#include "ZhygulKorpus.h"
#include "BmwFabrik.h"
#include "ZhygulFabrik.h"


void main() 
{
	srand(time(0));
	ICarFabrik* c = new ZhygulFabrik(); // or ZhygulFabrik
	Motor* cm = c->CreateMotor();
	Korpus* ck = c->CreateKorpus();
	//Show Motor options
	cm->ShowData();

	//Show korpus options
	ck->ShowData();

	delete c;
	delete ck;
	delete cm;



}