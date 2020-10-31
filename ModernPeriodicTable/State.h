#ifndef STATE_H
#define STATE_H

#include"Entity.h"

class State
{
private:
	

protected:
	std::stack<State*>* states;
	sf::RenderWindow* window;
	std::vector<sf::Texture> texture;
	sf::Font font;

	std::string stateName;
	bool quit;

	sf::Vector2i mousePosScreen;
	sf::Vector2i mousePosWindow;
	sf::Vector2f mousePosView;


public:
	State(sf::RenderWindow* window, std::stack<State*>* states);
	virtual ~State();

	const bool& getQuit() const;
	void initFont();

	virtual void endState();
	virtual void updateMousePos(const float& dt);
	virtual void updateInput(const float& dt) = 0;
	virtual void update(const float& dt) = 0;
	virtual void render(sf::RenderTarget* target = nullptr) = 0;

};
#endif // !STATE_H




