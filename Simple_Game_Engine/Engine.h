#pragma once
#include <SFML/Graphics.hpp>
#include "PlayerCharacter.h";

class Engine
{
public:
	Engine();

	void Start();


private:
	sf::RenderWindow m_Window;

	sf::Sprite m_BackgroundSprite;
	sf::Texture m_BackgroundTexture;

	PlayerCharacter m_Bob;

	void Input();
	void Update(float);
	void Draw();
};