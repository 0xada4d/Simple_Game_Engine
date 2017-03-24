#include "PlayerCharacter.h"

PlayerCharacter::PlayerCharacter()
{
	m_Speed = 400;
	m_Texture.loadFromFile("Images/bob.png");
	m_Sprite.setTexture(m_Texture);
	m_Position.x = 500;
	m_Position.y = 800;
}

sf::Sprite PlayerCharacter::GetSprite() { return m_Sprite; }

void PlayerCharacter::MoveLeft()
{
	m_LeftPressed = true;
	return;
}

void PlayerCharacter::MoveRight()
{
	m_RightPressed = true;
	return;
}

void PlayerCharacter::StopLeft()
{
	m_LeftPressed = false;
	return;
}

void PlayerCharacter::StopRight()
{
	m_RightPressed = false;
	return;
}

void PlayerCharacter::Update(float elapsedTime)
{
	if (m_RightPressed) { m_Position.x += m_Speed * elapsedTime; }
	if (m_LeftPressed) { m_Position.x -= m_Speed * elapsedTime; }

	m_Sprite.setPosition(m_Position);
	return;
}
