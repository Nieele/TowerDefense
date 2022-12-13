#pragma once

#include "SFML/Graphics.hpp"
#include "ResourseManager.hpp"

class Configuration {
public:
	Configuration() = delete;
	Configuration(const Configuration&) = delete;
	Configuration& operator=(const Configuration&) = delete;

	enum Texture : int {Map, Sounds};
	static ResourceManager<sf::Texture, int> textures;

	static void initialize();

private:
	static void initTexture();
	// static void initPlayerInputs();
};

void Configuration::initialize()
{
	initTexture();
}

void Configuration::initTexture()
{
	textures.load(Texture::Map, "media/Map.png");
	textures.load(Texture::Sounds, "media/sound/Music.mp3");
}

