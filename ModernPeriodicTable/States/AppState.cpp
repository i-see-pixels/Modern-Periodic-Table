#include "AppState.h"

AppState::AppState(sf::RenderWindow* window, std::stack<State*>* states)
	: State(window, states)
{
	this->stateName = "AppState";
}

AppState::~AppState()
{
}

void AppState::updateInput(const float& dt)
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		this->player.move(dt, -1.0f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		this->player.move(dt, 1.0f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		this->player.move(dt, 0.f, 1.0f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		this->player.move(dt, 0.0f, -1.0f);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		this->endState();
}

void AppState::update(const float& dt)
{
	this->updateInput(dt);
	
	this->player.update(dt);
}

void AppState::render(sf::RenderTarget* target)
{
	if (!target)
		target = this->window;

	this->player.render(target);
}
