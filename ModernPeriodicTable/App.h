#ifndef APP_H
#define APP_H

#include"./States/AppState.h"
#include"./States/MainMenuState.h"

class App
{
private:
	//Variables
	sf::RenderWindow* window;
	sf::Event sfEvent;
	std::vector<sf::VideoMode> videoModes;

	sf::Clock dtClock;
	float dt;

	std::stack<State*> states;

	//Initialization
	void initWindow();
	void initState();

public:
	App();
	virtual ~App();

	//Functions
	void endApp();
	void updateDt();
	void updateSFMLEvents();
	void render();
	void update();
	void run();

};


#endif // !APP_H


