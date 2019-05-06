#include "MallardDuck.h"

MallardDuck::MallardDuck()
{
}


MallardDuck::~MallardDuck()
{
}

void MallardDuck::display()
{
	cout << "MallardDuck~~" << endl;
}

void MallardDuck::setFlyBehavior(FlyBehavior *f)
{
	this->flyBehavior = f;
}

void MallardDuck::setQuackBehavior(QuackBehavior *q)
{
	this->quackBehavior = q;
}
