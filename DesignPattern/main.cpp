#include "Duck.h"
#include "MallardDuck.h"
#include "DecoyDuck.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"
#include "Quack.h"

#include <iostream>

using namespace std;


int main (void)
{
	Duck * mallarDuck = new MallardDuck();
	Duck * decoyDuck = new DecoyDuck();

	mallarDuck->setFlyBehavior(new FlyWithWings());
	mallarDuck->setQuackBehavior(new Quack());

	decoyDuck->setFlyBehavior(new FlyNoWay());
	decoyDuck->setQuackBehavior(new MuteQuack());

	mallarDuck->performFly();
	mallarDuck->performQuack();

	decoyDuck->performFly();
	decoyDuck->performQuack();
	
	system("pause");
	return 0;
}