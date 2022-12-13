#pragma once

#include "SFML/Graphics.hpp"
#include "settings.hpp"
#include "Player.hpp"
#include "World.hpp"

class Game
{
public:
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	Game();
	
	void run();
private:
	void processEvents();
	void update(sf::Time deltaTime);
	void render();

	sf::RenderWindow _window;
	Player _player;
};

