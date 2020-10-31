#include "App.h"

//Static Functions

//Init Functions
void App::initWindow() {

	std::fstream ifs("Config/window.ini");
	
	this->videoModes = sf::VideoMode::getFullscreenModes();
	std::string title = "None";
	sf::VideoMode window_bounds = sf::VideoMode::getDesktopMode();
	unsigned framerate_limit = 60;
	bool virtual_sync_enabled = false;
	bool fullScreen = false;
	unsigned antialiasing_level = 0;


	if (ifs.is_open())
	{
		std::getline(ifs, title);
		ifs >> window_bounds.width >> window_bounds.height;
		ifs >> fullScreen;
		ifs >> framerate_limit;
		ifs >> virtual_sync_enabled;
		ifs >> antialiasing_level;

	}

	ifs.close();

	sf::ContextSettings windowSettings;
	windowSettings.antialiasingLevel = antialiasing_level;

	if(fullScreen)
		this->window = new sf::RenderWindow(window_bounds, title, sf::Style::Fullscreen, windowSettings);
	else
		this->window = new sf::RenderWindow(window_bounds, title, sf::Style::Default, windowSettings);
		
	this->window->setFramerateLimit(framerate_limit);
	this->window->setVerticalSyncEnabled(virtual_sync_enabled);

}

void App::initState()
{
	this->states.push(new MainMenuState(this->window, &this->states));
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

void App::endApp()
{
	std::cout << "Ending App" << std::endl;
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
		
		if (this->states.top()->getQuit()) {
			delete this->states.top();
			this->states.pop();
		}
	}

	else
	{
		this->endApp();
		this->window->close();
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
