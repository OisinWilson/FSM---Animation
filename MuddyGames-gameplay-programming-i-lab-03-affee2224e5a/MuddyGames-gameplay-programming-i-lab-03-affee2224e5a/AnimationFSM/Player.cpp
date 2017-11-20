#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_animation.idle();
		break;
	case Input::Action::DOWN:
		//std::cout << "Player Down" << std::endl;
		m_animation.crouching();
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		m_animation.jumping();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Right" << std::endl;
		m_animation.walking();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_animation.walking();
		break;
	case Input::Action::DELETE:
		//std::cout << "Player Delete" << std::endl;
		m_animation.swordSwing();
		break;
	case Input::Action::END:
		//std::cout << "Player End" << std::endl;
		m_animation.hammering();
		break;
	default:
		break;
	}

	if (m_animation.getCurrent() != m_animation.getPrevious())
	{
		m_animated_sprite.changeAmimation(m_animation.getCurrent()->m_startValue, m_animation.getCurrent()->m_maxValue);
	}

	m_animation.setPrevious(m_animation.getCurrent());
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}