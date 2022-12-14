#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "Entity.hpp"
#include "Configuration.hpp"
#include <list>
#include <memory>

class World : public sf::Drawable
{
public:
	World(const World&) = delete;
	World& operator=(const World&) = delete;
	World(float x, float y);
	~World();

	void add(Entity* entity);
	void clear();
	int size();

	void add(Configuration::Sounds sound_id);

	const std::initializer_list<Entity*> getEntities() const;
	int getX() const;
	int getY() const;
	void update(sf::Time deltaTime);
private:
	std::list<Entity*> _entities;
	std::list<Entity*> _entities_tmp;

	std::list<std::unique_ptr<sf::Sound>> _sounds;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

	const int _x;
	const int _y;
};

