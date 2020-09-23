#ifndef APP_H
#define APP_H

#include"States/AppState.h"

class App
{
private:
	//Variables
	sf::RenderWindow* window;
	sf::Event sfEvent;

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
	void updateDt();
	void updateSFMLEvents();
	void render();
	void update();
	void run();

};


#endif // !APP_H


