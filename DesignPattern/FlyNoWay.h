#pragma once
#include "FlyBehavior.h"

#include <iostream>

class FlyNoWay :public FlyBehavior
{
public:
	void fly() override
	{
		std::cout << " 날개짓을 못함!" << std::endl;
	}
};

