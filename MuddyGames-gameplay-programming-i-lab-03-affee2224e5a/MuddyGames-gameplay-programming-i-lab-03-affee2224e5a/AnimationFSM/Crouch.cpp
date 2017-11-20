#include "Crouch.h"
#include <Jumping.h>
#include <Idle.h>
#include <string>
#include "Walk.h"
#include "Sword.h"
#include "Hammer.h"


Crouch::Crouch()
{
	m_startValue = 6;
	m_maxValue = 12;
}

void Crouch::idle(Animation * a)
{
	std::cout << "Crouching -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Crouch::jumping(Animation * a)
{
	std::cout << "Crouching -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Crouch::walking(Animation * a)
{
	std::cout << "Crouching -> Walking" << std::endl;
	a->setCurrent(new Walk());
	delete this;
}

void Crouch::swordSwing(Animation * a)
{
	std::cout << "Crouching -> SwordSwing" << std::endl;
	a->setCurrent(new Sword());
	delete this;
}

void Crouch::hammering(Animation * a)
{
	std::cout << "Crouching -> Hammering" << std::endl;
	a->setCurrent(new Hammer());
	delete this;
}
