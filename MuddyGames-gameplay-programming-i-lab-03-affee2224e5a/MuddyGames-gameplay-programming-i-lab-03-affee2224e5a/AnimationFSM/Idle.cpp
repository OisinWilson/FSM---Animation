#include <Idle.h>
#include <Jumping.h>
#include <Crouch.h>
#include "Walk.h"
#include <string>
#include "Sword.h"
#include "Hammer.h"

Idle::Idle()
{
	m_startValue = 0;
	m_maxValue = 6;
}

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(Animation* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::crouching(Animation* a)
{
	std::cout << "Idle -> Crouching" << std::endl;
	a->setCurrent(new Crouch());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Idle -> Walking" << std::endl;
	a->setCurrent(new Walk());
	delete this;
}

void Idle::swordSwing(Animation * a)
{
	std::cout << "Idle -> SwordSwing" << std::endl;
	a->setCurrent(new Sword());
	delete this;
}

void Idle::hammering(Animation * a)
{
	std::cout << "Idle -> Hammering" << std::endl;
	a->setCurrent(new Hammer());
	delete this;
}
