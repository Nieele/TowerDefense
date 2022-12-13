#pragma once

#include "SFML/Graphics.hpp"
#include <vector>

class Player : public sf::Drawable // : public sf::Drawable ? [47]
{
public:
	Player(const Player&) = delete;
	Player& operator=(const Player&) = delete;
	Player() = default;

	// нужен ли метод здесь?
	template<typename ... Args> // [47] sprite.setPosition(std::forward<Args>(args)...);
	void addTower(Args&& ... args);
private:
	// нужно ли?
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

	// std::vector<sf::Sprite> _towers;
	short int balance;
	short int hp;
};

