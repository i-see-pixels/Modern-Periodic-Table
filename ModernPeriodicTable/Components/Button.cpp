#include "Button.h"
#include "Button.h"


Button::Button(float x, float y, float width, float height,
	sf::Font* font, std::string text,
	sf::Color idleColor, sf::Color hoverColor, sf::Color activeColor
)
{
	this->buttonShape.setPosition(sf::Vector2f(x, y));
	this->buttonShape.setSize(sf::Vector2f(width, height));

	this->idleColor = idleColor;
	this->hoverColor = hoverColor;
	this->activeColor = activeColor;

	this->buttonShape.setFillColor(this->idleColor);

	this->font = font;
	this->text.setFont(*this->font);
	this->text.setString(text);
	this->text.setFillColor(sf::Color::White);
	this->text.setCharacterSize(30);
	this->text.setPosition(
		x + (width / 2.f) - (this->text.getGlobalBounds().width / 2.f),
		y + (height / 2.f) - (this->text.getGlobalBounds().height * 3.f / 4.f)
	);

	this->buttonState = BTN_IDLE;

}

Button::~Button()
{
}

const bool Button::isPressed() const
{
	if (this->buttonState == BTN_ACTIVE) {
		return true;
	}

	return false;
}

void Button::update(const sf::Vector2f mousePos)
{
	this->buttonState = BTN_IDLE;

	if (this->buttonShape.getGlobalBounds().contains(mousePos)) {
		this->buttonState = BTN_HOVER;

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			this->buttonState = BTN_ACTIVE;
		}
	}

	switch (this->buttonState) {
	case BTN_IDLE:
		this->buttonShape.setFillColor(this->idleColor);
		break;

	case BTN_HOVER:
		this->buttonShape.setFillColor(this->hoverColor);
		break;

	case BTN_ACTIVE:
		this->buttonShape.setFillColor(this->activeColor);
		break;

	default:
		this->buttonShape.setFillColor(sf::Color::Red);
		break;
	}
}

void Button::render(sf::RenderTarget* target)
{
	target->draw(this->buttonShape);
	target->draw(this->text);
}