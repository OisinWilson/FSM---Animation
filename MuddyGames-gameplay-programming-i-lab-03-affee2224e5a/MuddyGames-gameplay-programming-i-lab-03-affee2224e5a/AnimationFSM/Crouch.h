#ifndef CROUCH_H
#define CROUCH_H	

#include <State.h>

class Crouch : public State
{
public:
	Crouch();
	~Crouch() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void walking(Animation* a);
	void swordSwing(Animation* a);
	void hammering(Animation* a);
};

#endif 