#pragma once
#include <SFML/Graphics.hpp>

class PlayerCharacter
{
public:
	PlayerCharacter();

	sf::Sprite GetSprite();

	void MoveLeft();
	void MoveRight();
	void StopLeft();
	void StopRight();

	void Update(float);

private:
	sf::Vector2f m_Position;		// Player current position
	sf::Sprite m_Sprite;			// Player graphical representation
	sf::Texture m_Texture;			// Add a texture on player

	bool m_LeftPressed;
	bool m_RightPressed;

	float m_Speed;					// Player speed in pixels ps
};