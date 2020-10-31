#include "State.h"

State::State(sf::RenderWindow* window, std::stack<State*>* states)
{
	this->window = window;
	this->states = states;
	this->quit = false;
}

State::~State()
{
}


void State::endState()
{
	this->quit = true;
	std::cout << "Ending " << this->stateName << std::endl;
}

void State::updateMousePos(const float& dt)
{
	this->mousePosScreen = sf::Mouse::getPosition();
	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
	this->mousePosView = this->window->mapPixelToCoords(sf::Mouse::getPosition(*this->window));
}

const bool& State::getQuit() const
{
	return this->quit;
}

void State::initFont()
{
	if (!this->font.loadFromFile("./Fonts/comic.ttf")) {
		throw("ERROR::COULD NOT LOAD FONTS");
	}
}
