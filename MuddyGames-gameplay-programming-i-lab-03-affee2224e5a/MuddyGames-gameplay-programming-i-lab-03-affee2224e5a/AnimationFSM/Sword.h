#ifndef SWORD_H
#define SWORD_H

#include "State.h"
class Sword :
	public State
{
public:
	Sword();
	~Sword() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void crouching(Animation* a);
	void walking(Animation* a);
	void hammering(Animation* a);
};

#endif