#ifndef HAMMER_H
#define HAMMER_H	

#include "State.h"
class Hammer :
	public State
{
public:
	Hammer();
	~Hammer() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void crouching(Animation* a);
	void swordSwing(Animation* a);
	void walking(Animation* a);
};

#endif