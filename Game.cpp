#include "Game.hpp"

Game::Game() : _window(Settings::windowSize, "TowerDefense", sf::Style::Close)
{
}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time TimePerFrame = sf::seconds(1.f / Settings::framerateLimit); // frame_per_seconds ? [43]
	while (_window.isOpen()) 
	{
		processEvents();
		bool repaint = false;

		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > TimePerFrame) 
		{
			timeSinceLastUpdate -= TimePerFrame;
			repaint = true;
			update(TimePerFrame);
		}
		if (repaint)
			render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (_window.pollEvent(event)) 
	{
		if (event.type == sf::Event::Closed)
			_window.close();
	}
}

void Game::update(sf::Time deltaTime)
{

}

void Game::render()
{
	_window.clear();

	_window.display();
}
