
#ifndef _MALLARDDUCK_H
#define _MALLARDDUCK_H

#include "Duck.h"

class MallardDuck : public Duck
{
public:
	MallardDuck();
	
	~MallardDuck();

	// Duck��(��) ���� ��ӵ�
	virtual void display() override;
	virtual void setFlyBehavior(FlyBehavior *f) override;
	virtual void setQuackBehavior(QuackBehavior *q) override;
};

#endif // !_MALLARDDUCK_H