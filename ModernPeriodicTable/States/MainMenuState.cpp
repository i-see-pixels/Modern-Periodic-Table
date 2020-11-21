#include "MainMenuState.h"

MainMenuState::MainMenuState(sf::RenderWindow* window, std::stack<State*>* states)
	: State(window, states)
{
	this->stateName = "MainMenuState";
	this->initBackground();
	this->initFont();
	this->initButtons();

}

MainMenuState::~MainMenuState()
{
	std::map<std::string, Button*>::iterator it;
	for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
		delete it->second;
	}
}


void MainMenuState::initButtons()
{
	this->buttons["APP_STATE"] = new Button(200, 500, 300, 80,
		&this->font, "View Table",
		sf::Color(0, 0, 0, 255), sf::Color(80, 80, 80, 255), sf::Color(150, 150, 150, 255)
	);

	this->buttons["EXIT_STATE"] = new Button(200, 600, 300, 80,
		&this->font, "Quit",
		sf::Color(0, 0, 0, 255), sf::Color(80, 80, 80, 255), sf::Color(150, 150, 150, 255)
	);
}

void MainMenuState::initBackground()
{
	this->background.setSize(
		sf::Vector2f(
			float(this->window->getSize().x),
			float(this->window->getSize().y)
		)
	);

	if (!this->backgroundTexture.loadFromFile("./Resources/Images/bg1.jpg")) {
		throw "ERROR::MAIN_MENU_STATE::FAILED TO LOAD BACKGROUND TEXTURE";
	}
	
	this->background.setTexture(&this->backgroundTexture);
}

void MainMenuState::updateInput(const float& dt)
{
}

void MainMenuState::updateButtons()
{
	std::map<std::string, Button*>::iterator it;
	for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
		it->second->update(this->mousePosView);
	}

	if (this->buttons["EXIT_STATE"]->isPressed()) {
		this->endState();
	}

	if (this->buttons["APP_STATE"]->isPressed()) {
		this->states->push(new AppState(this->window, this->states));
	}
}

void MainMenuState::update(const float& dt)
{
	this->updateMousePos(dt);
	this->updateInput(dt);
	this->updateButtons();
}

void MainMenuState::render(sf::RenderTarget* target)
{
	if (!target)
		target = this->window;

	target->draw(this->background);
	
	this->renderButtons(target);
}

void MainMenuState::renderButtons(sf::RenderTarget* target)
{
	std::map<std::string, Button*>::iterator it;
	for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
		it->second->render(target);
	}
}
