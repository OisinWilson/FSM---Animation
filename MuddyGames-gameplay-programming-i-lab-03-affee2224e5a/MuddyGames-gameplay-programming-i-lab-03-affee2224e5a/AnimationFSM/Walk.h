#ifndef WALK_H
#define WALK_H

#include "State.h"

class Walk : public State
{
public:
	Walk();
	~Walk() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void crouching(Animation* a);
	void swordSwing(Animation* a);
	void hammering(Animation* a);
};

#endif