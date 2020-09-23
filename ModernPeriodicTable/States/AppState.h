#pragma once
#include "../State.h"

class AppState :
    public State
{
private:


public:
    AppState(sf::RenderWindow* window);
    virtual ~AppState();

    void checkForQuit();

    void update(const float& dt);
    void render(sf::RenderTarget* target = nullptr);
};

