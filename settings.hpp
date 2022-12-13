#pragma once

#include "SFML/Graphics.hpp"

namespace Settings {
	const unsigned int windowSize_width = 832;
	const unsigned int windowSize_height = 640;
	const sf::VideoMode windowSize(windowSize_width, windowSize_height);

	const unsigned int framerateLimit = 120;
	const bool verticalSync = true;
}