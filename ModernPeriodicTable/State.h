#ifndef STATE_H
#define STATE_H

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<fstream>
#include<sstream>
#include<stack>
#include<map>


#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>

class State
{
private:
	sf::RenderWindow* window;
	std::vector<sf::Texture> texture;
	bool quit;

public:
	State(sf::RenderWindow* window);
	virtual ~State();

	virtual void checkForQuit() = 0;

	virtual void update(const float& dt) = 0;
	virtual void render(sf::RenderTarget* target = nullptr) = 0;

};
#endif // !STATE_H




