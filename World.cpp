#include "World.hpp"

World::World(float x, float y) : _x(x), _y(y) {}

World::~World() { clear(); }

void World::add(Entity* entity)
{
	_entities_tmp.push_back(entity);
}

void World::clear()
{
	for (Entity* entity : _entities)
		delete entity;
	_entities.clear();
	for (Entity* entity : _entities_tmp)
		delete entity;
	_entities_tmp.clear();
	_sounds.clear();
}


