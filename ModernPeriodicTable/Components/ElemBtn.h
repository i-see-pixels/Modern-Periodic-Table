#pragma once

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<sstream>

#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>


enum button_states { BTN_IDLE = 0, BTN_HOVER, BTN_ACTIVE };

class ElemBtn
{
private:
	short unsigned buttonState;

	sf::RectangleShape buttonShape;
	sf::Font* font;
	sf::Text text;

	sf::Color idleColor;
	sf::Color hoverColor;
	sf::Color activeColor;

public:
	ElemBtn(float x, float y, float width, float height,
		sf::Font* font, std::string text,
		sf::Color idleColor, sf::Color hoverColor, sf::Color activeColor);
	~ElemBtn();

	const bool isPressed() const;
	void update(const sf::Vector2f mousePos);
	void render(sf::RenderTarget* target);
};

