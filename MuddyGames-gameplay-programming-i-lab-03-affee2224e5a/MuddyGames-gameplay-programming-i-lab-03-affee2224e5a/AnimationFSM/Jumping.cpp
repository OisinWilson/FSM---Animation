#include <Jumping.h>
#include <Crouch.h>
#include <Idle.h>
#include <string>
#include <Walk.h>
#include <Sword.h>
#include <Hammer.h>

Jumping::Jumping()
{
	m_startValue = 12;
	m_maxValue = 18;
}

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::crouching(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Crouch());
	delete this;
}

void Jumping::walking(Animation * a)
{
	std::cout << "Jumping -> Walking" << std::endl;
	a->setCurrent(new Walk());
	delete this;
}

void Jumping::swordSwing(Animation * a)
{
	std::cout << "Jumping -> SwordSwing" << std::endl;
	a->setCurrent(new Sword());
	delete this;
}

void Jumping::hammering(Animation * a)
{
	std::cout << "Jumping -> Hammering" << std::endl;
	a->setCurrent(new Hammer());
	delete this;
}
