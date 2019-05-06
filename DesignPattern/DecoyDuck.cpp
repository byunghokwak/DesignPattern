#include "DecoyDuck.h"



DecoyDuck::DecoyDuck()
{
}


DecoyDuck::~DecoyDuck()
{
}

void DecoyDuck::display()
{
	cout << "가짜 오리~~" << endl;
}

void DecoyDuck::setFlyBehavior(FlyBehavior * f)
{
	this->flyBehavior = f;
}

void DecoyDuck::setQuackBehavior(QuackBehavior * q)
{
	this->quackBehavior = q;
}
