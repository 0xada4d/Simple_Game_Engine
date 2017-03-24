#include "Engine.h"

void Engine::Input()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) { m_Window.close(); }		// Handle the player quitting

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) { m_Bob.MoveLeft(); }		// Handle the player moving left
	else { m_Bob.StopLeft(); }

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) { m_Bob.MoveRight(); }		// Handle the player moving right
	else { m_Bob.StopRight(); }
	return;
}

