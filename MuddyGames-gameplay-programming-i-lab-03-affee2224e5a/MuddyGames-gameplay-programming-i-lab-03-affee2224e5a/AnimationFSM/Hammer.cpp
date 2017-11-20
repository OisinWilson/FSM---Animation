#include "Hammer.h"
#include <string>
#include "Jumping.h"
#include "Walk.h"
#include "Sword.h"
#include "Idle.h"
#include "Crouch.h"


Hammer::Hammer()
{
	m_startValue = 24;
	m_maxValue = 30;
}

void Hammer::idle(Animation * a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammer::jumping(Animation * a)
{
	std::cout << "Hammering -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Hammer::crouching(Animation * a)
{
	std::cout << "Hammering -> Crouching" << std::endl;
	a->setCurrent(new Crouch());
	delete this;
}

void Hammer::swordSwing(Animation * a)
{
	std::cout << "Hammering -> SwordSwing" << std::endl;
	a->setCurrent(new Sword());
	delete this;
}

void Hammer::walking(Animation * a)
{
	std::cout << "Hammering -> Walking" << std::endl;
	a->setCurrent(new Walk());
	delete this;
}
