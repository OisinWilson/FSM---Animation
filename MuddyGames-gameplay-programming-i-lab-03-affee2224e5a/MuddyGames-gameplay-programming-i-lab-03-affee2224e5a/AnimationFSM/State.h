#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <Animation.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(Animation* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(Animation* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void crouching(Animation* a)
	{
		DEBUG_MSG("State::Crouching");
	}
	virtual void walking(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
	virtual void swordSwing(Animation* a)
	{
		DEBUG_MSG("State::SwordSwing");
	}
	virtual void hammering(Animation* a)
	{
		DEBUG_MSG("State::Hammering");
	}

	int m_startValue;
	int m_maxValue;
};

#endif // ! ANIMATION_H

