#include "Engine.h"

void Engine::Draw()
{
	m_Window.clear(sf::Color::White);		// Rub out the last frame

	m_Window.draw(m_BackgroundSprite);		// Draw the background
	m_Window.draw(m_Bob.GetSprite());

	m_Window.display();						// Show everything we have just drawn
}
