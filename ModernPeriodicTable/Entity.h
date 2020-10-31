#ifndef ENTITY_H
#define ENTITY_H

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

class Entity
{
private:

protected:
	sf::RectangleShape shape;
	float movementSpeed;


public:
	Entity();
	virtual ~Entity();

	void move(const float& dt, const float x_dir, const float y_dir);

	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target = NULL);
};

#endif