#pragma once
#include "Duck.h"
class DecoyDuck :
	public Duck
{
public:
	DecoyDuck();
	~DecoyDuck();

	// Duck을(를) 통해 상속됨
	virtual void display() override;
	virtual void setFlyBehavior(FlyBehavior * f) override;
	virtual void setQuackBehavior(QuackBehavior * q) override;
};

