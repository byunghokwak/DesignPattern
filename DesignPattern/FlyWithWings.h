#include "FlyBehavior.h"

#include <iostream>

class FlyWithWings :public FlyBehavior
{
public:
	void fly() override
	{
		std::cout << " �������� ����~~" << std::endl;
	}
};

