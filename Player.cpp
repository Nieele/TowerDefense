#include "Player.hpp"

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(_towers[0], states);
}
