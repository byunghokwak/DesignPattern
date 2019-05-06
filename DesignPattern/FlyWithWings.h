#include "FlyBehavior.h"

#include <iostream>

class FlyWithWings :public FlyBehavior
{
public:
	void fly() override
	{
		std::cout << " 물오리가 난다~~" << std::endl;
	}
};

