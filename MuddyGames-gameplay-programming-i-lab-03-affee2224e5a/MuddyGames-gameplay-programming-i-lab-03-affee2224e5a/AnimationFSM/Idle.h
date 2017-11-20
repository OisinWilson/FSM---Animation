#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle();
	~Idle() {};
	void handleInput();
	void update();
	void jumping(Animation* a);
	void crouching(Animation* a);
	void walking(Animation* a);
	void swordSwing(Animation* a);
	void hammering(Animation* a);
};

#endif // !IDLE_H