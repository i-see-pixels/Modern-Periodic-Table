#pragma once
#include "../State.h"

class AppState :
    public State
{
private:
    Entity player;

public:
    AppState(sf::RenderWindow* window, std::stack<State*>* states);
    virtual ~AppState();

    void updateInput(const float& dt);
    void update(const float& dt);
    void render(sf::RenderTarget* target = NULL);
};

