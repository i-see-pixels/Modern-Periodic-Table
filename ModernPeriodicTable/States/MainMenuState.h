#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "../State.h"
#include "./AppState.h"
#include"../Components/Button.h"

class MainMenuState : public State
{
private:
    sf::RectangleShape background;
    sf::Texture backgroundTexture;
    std::map<std::string, Button*> buttons;
    

public:
    MainMenuState(sf::RenderWindow* window, std::stack<State*>* states);
    virtual ~MainMenuState();

    void initButtons();
    void initBackground();

    void updateInput(const float& dt);
    void updateButtons();
    void update(const float& dt);

    void render(sf::RenderTarget* target = NULL);
    void renderButtons(sf::RenderTarget* target = NULL);
};

#endif