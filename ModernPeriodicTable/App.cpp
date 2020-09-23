#include "App.h"

//Static Functions

//Init Functions
void App::initWindow() {

	std::fstream ifs("Config/window.ini");
	
	std::string title = "None";
	sf::VideoMode window_bounds(800, 600);
	unsigned framerate_limit = 60;
	bool virtual_sync_enabled = false;

	if (ifs.is_open())
	{
		std::getline(ifs, title);
		ifs >> window_bounds.width >> window_bounds.height;
		ifs >> framerate_limit;
		ifs >> virtual_sync_enabled;

	}

	ifs.close();

	this->window = new sf::RenderWindow(window_bounds, title);
	this->window->setFramerateLimit(framerate_limit);
	this->window->setVerticalSyncEnabled(virtual_sync_enabled);

}

void App::initState()
{
	this->states.push(new AppState(this->window));
}

App::App()
{
	this->initWindow();
	this->initState();
}

App::~App()
{
	delete this->window;

	while (!this->states.empty()) {
		delete this->states.top();
		this->states.pop();
	}
}

void App::updateDt()
{
	//update the dt variable with the time it takes to update and render 
	this->dt = this->dtClock.restart().asSeconds();
}

void App::updateSFMLEvents()
{
	
	while (this->window->pollEvent(this->sfEvent))
	{
		switch (this->sfEvent.type)
		{
		case sf::Event::Closed:
			this->window->close();
		default:
			break;
		}
	}
	
}

void App::render()
{
	this->window->clear();

	//Render
	if (!this->states.empty()) {
		this->states.top()->render(this->window);
	}

	this->window->display();
}

void App::update()
{
	this->updateSFMLEvents();

	if (!this->states.empty()) {
		this->states.top()->update(this->dt);
	}
}

void App::run()
{
	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}
