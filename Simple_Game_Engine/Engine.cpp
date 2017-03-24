#include <SFML/Graphics.hpp>
#include "Engine.h"

Engine::Engine()
{
	sf::Vector2f resolution;									// Get the screen resolution and create an SFML window and View
	resolution.x = sf::VideoMode::getDesktopMode().width;
	resolution.y = sf::VideoMode::getDesktopMode().height;

	m_Window.create(sf::VideoMode(resolution.x, resolution.y),
		"Simple Game Engine",
		sf::Style::Fullscreen);

	m_BackgroundTexture.loadFromFile("Images/background.jpg");	// Load the background into the texture

	m_BackgroundSprite.setTexture(m_BackgroundTexture);			// Associate the sprite with the texture
}

void Engine::Start()
{
	sf::Clock clock;

	while (m_Window.isOpen())
	{
		sf::Time dt = clock.restart();			// Restart the clock and save the elapsed time into dt
		float dtAsSeconds = dt.asSeconds();		// Make a fraction from the delta time

		Input();
		Update(dtAsSeconds);
		Draw();
	}
	return;
}



