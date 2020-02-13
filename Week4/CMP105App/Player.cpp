#include "Player.h"

Player::Player()
{
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::D)) 
	{ 
		move(velocity * dt); 
	}
	if (input->isKeyDown(sf::Keyboard::A)) 
	{ 
		move(-velocity * dt); 
	}
}
