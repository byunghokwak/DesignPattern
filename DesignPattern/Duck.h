#ifndef _DUCK_H
#define _DUCK_H

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

using namespace std;

class Duck
{
public:
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;

public:
	void swim()
	{
		cout << "swimming~~" << endl;
	};
	void performFly()
	{
		this->flyBehavior->fly();
	};
	void performQuack()
	{
		this->quackBehavior->quack();
	};
	virtual void display() = 0;
	virtual void setFlyBehavior(FlyBehavior *f) = 0;
	virtual void setQuackBehavior(QuackBehavior *q) = 0;
};

#endif 
