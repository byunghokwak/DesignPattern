#pragma once
#include "FlyBehavior.h"

#include <iostream>

class FlyNoWay :public FlyBehavior
{
public:
	void fly() override
	{
		std::cout << " �������� ����!" << std::endl;
	}
};

