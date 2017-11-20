#include "Walk.h"
#include <string>
#include "Jumping.h"
#include "Crouch.h"
#include "Idle.h"
#include "Sword.h"
#include "Hammer.h"

Walk::Walk()
{
	m_startValue = 18;
	m_maxValue = 24;
}

void Walk::idle(Animation * a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walk::jumping(Animation * a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walk::crouching(Animation * a)
{
	std::cout << "Walking -> Crouching" << std::endl;
	a->setCurrent(new Crouch());
	delete this;
}

void Walk::swordSwing(Animation * a)
{
	std::cout << "Walking -> SwordSwing" << std::endl;
	a->setCurrent(new Sword());
	delete this;
}

void Walk::hammering(Animation * a)
{
	std::cout << "Walking -> Hammering" << std::endl;
	a->setCurrent(new Hammer());
	delete this;
}
