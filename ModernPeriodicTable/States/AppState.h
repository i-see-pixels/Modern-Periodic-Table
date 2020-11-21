#pragma once

#include <utility>
#include "../State.h"
#include "./InfoState.h"
#include"../element.h"
#include"../Components/Button.h"

class AppState :
    public State
{
private:
    sf::RectangleShape background;
    std::map<std::pair<std::string, std::string>, Button*> buttons;
    element* el;

public:
    AppState(sf::RenderWindow* window, std::stack<State*>* states);
    virtual ~AppState();

    void initButtons();
    void initBackground();

    void initElements();
    void updateInput(const float& dt);
    void updateButtons();
    void update(const float& dt);
    void render(sf::RenderTarget* target = NULL);

    void renderButtons(sf::RenderTarget* target = NULL);
};

