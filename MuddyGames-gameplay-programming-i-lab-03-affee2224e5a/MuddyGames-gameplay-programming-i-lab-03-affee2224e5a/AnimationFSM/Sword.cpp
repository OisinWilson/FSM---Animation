#include "Sword.h"
#include <string>
#include "Jumping.h"
#include "Walk.h"
#include "Idle.h"
#include "Crouch.h"
#include "Hammer.h"


Sword::Sword()
{
	m_startValue = 30;
	m_maxValue = 36;
}

void Sword::idle(Animation * a)
{
	std::cout << "SwordSwing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Sword::jumping(Animation * a)
{
	std::cout << "SwordSwing -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Sword::crouching(Animation * a)
{
	std::cout << "SwordSwing -> Crouching" << std::endl;
	a->setCurrent(new Crouch());
	delete this;
}

void Sword::walking(Animation * a)
{
	std::cout << "SwordSwing -> Walking" << std::endl;
	a->setCurrent(new Walk());
	delete this;
}

void Sword::hammering(Animation * a)
{
	std::cout << "SwordSwing -> Hammering" << std::endl;
	a->setCurrent(new Hammer());
	delete this;
}
