#include "InfoState.h"

InfoState::InfoState(sf::RenderWindow* window, std::stack<State*>* states, element elem)
	: State(window, states)
{
	this->stateName = "InfoState";
	this->elem = elem;
	this->initBackground();
	this->initFont();
	this->initInfo();
	this->setInfoProps();
	this->initButtons();

}

InfoState::~InfoState()
{
	std::map<std::pair<std::string, std::string>, Button*>::iterator it;
	for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
		delete it->second;
	}
}

void InfoState::initButtons()
{
	this->buttons[{"EXIT_STATE", ""}] = new Button(50, 100, 80, 50,
		&this->font, "Back",
		sf::Color(0, 0, 0, 255), sf::Color(80, 80, 80, 255), sf::Color(150, 150, 150, 255)
	);
}

void InfoState::initBackground()
{
	this->background.setSize(
		sf::Vector2f(
			float(this->window->getSize().x),
			float(this->window->getSize().y)
		)
	);

	this->background.setFillColor(sf::Color(232, 228, 201, 255));
}

void InfoState::initInfo()
{
	this->info["Atomic No."] = sf::Text(std::to_string(this->elem.atomicno), this->font, 30);
	this->info["Electronic Configuration"] = sf::Text((this->elem.ec), this->font, 30);
	this->info["Group"] = sf::Text(std::to_string(this->elem.group), this->font, 30);
	this->info["Period"] = sf::Text(std::to_string(this->elem.period), this->font, 30);
	this->info["Block"] = sf::Text((this->elem.block), this->font, 30);
	this->info["Atomic Weight"] = sf::Text(std::to_string(this->elem.atomicw), this->font, 30);
	this->info["Electronegitivity"] = sf::Text(std::to_string(this->elem.en), this->font, 30);
	this->info["Atomic Radius"] = sf::Text(std::to_string(this->elem.atomicr), this->font, 30);
	this->info["Origin"] = sf::Text((this->elem.origin), this->font, 30);
	this->info["Melting Point"] = sf::Text(std::to_string(this->elem.meltp), this->font, 30);
	this->info["Boiling Point"] = sf::Text(std::to_string(this->elem.boilp), this->font, 30);
	this->info["Density"] = sf::Text(std::to_string(this->elem.density), this->font, 30);

	for (auto it = this->info.begin(); it != this->info.end(); it++) {
		infoHeadings.push_back(sf::Text(it->first, this->font, 30));
	}
}

void InfoState::setInfoProps()
{
	//Element Name Heading
	this->Name.setString(this->elem.name);
	this->Name.setFont(this->font);
	this->Name.setCharacterSize(60);
	this->Name.setStyle(sf::Text::Bold);
	this->Name.setFillColor(sf::Color(98, 0, 0, 255));
	this->Name.setPosition(
		this->window->getSize().x / 2.f - (this->Name.getGlobalBounds().width / 2.f),
		100.f
	);



	int i = 0;
	for (auto it = this->info.begin(); it != this->info.end(); it++, i++) {
		it->second.setFillColor(sf::Color(30, 82, 98, 255));
		it->second.setPosition(sf::Vector2f(1000.0f, float(250 + i * 50)));
	}

	for (i = 0; i < this->infoHeadings.size(); i++) {
		this->infoHeadings[i].setFillColor(sf::Color::Black);
		this->infoHeadings[i].setPosition(sf::Vector2f(600.0f, float(250 + i * 50)));
	}
}

void InfoState::updateInput(const float& dt)
{
}

void InfoState::updateButtons()
{
	std::map<std::pair<std::string, std::string>, Button*>::iterator it;
	for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
		it->second->update(this->mousePosView);
	}

	if (this->buttons[{"EXIT_STATE", ""}]->isPressed()) {
		this->endState();
	}
}

void InfoState::update(const float& dt)
{
	this->updateMousePos(dt);
	this->updateInput(dt);
	this->updateButtons();
}

void InfoState::render(sf::RenderTarget* target)
{
	if (!target)
		target = this->window;

	target->draw(this->background);

	target->draw(this->Name);

	for (auto it = this->infoHeadings.begin(); it != this->infoHeadings.end(); it++) {
		target->draw(*it);
	}
	for (auto it = this->info.begin(); it != this->info.end(); it++) {
		target->draw(it->second);
	}
	this->renderButtons(target);
}

void InfoState::renderButtons(sf::RenderTarget* target)
{
	std::map<std::pair<std::string, std::string>, Button*>::iterator it;
	for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
		it->second->render(target);
	}
}
