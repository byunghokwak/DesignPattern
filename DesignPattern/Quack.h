#include "QuackBehavior.h"

#include <iostream>

class Quack :public QuackBehavior
{
public:
	void quack() override
	{
		std::cout << " Ва Ва" << std::endl;
	}
};

