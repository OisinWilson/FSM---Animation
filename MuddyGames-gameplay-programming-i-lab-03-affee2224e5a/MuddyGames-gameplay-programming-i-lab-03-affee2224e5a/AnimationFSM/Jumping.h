#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping();
	~Jumping() {};
	void idle(Animation* a);
	void crouching(Animation* a);
	void walking(Animation* a);
	void swordSwing(Animation* a);
	void hammering(Animation* a);
};

#endif // !IDLE_H