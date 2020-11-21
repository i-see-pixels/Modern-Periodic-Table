#pragma once
#include "../State.h"
#include"../Components/Button.h"
#include"../element.h"

class InfoState :
    public State
{
private:
    sf::RectangleShape background;
    std::map<std::pair<std::string, std::string>, Button*> buttons;
    std::map<std::string, sf::Text> info;
    std::vector<sf::Text> infoHeadings;
    sf::Text Name;
    element elem;

public:
    InfoState(sf::RenderWindow* window, std::stack<State*>* states, element elem);
    virtual ~InfoState();

    void initButtons();
    void initBackground();
    void initInfo();

    void setInfoProps();
    void updateInput(const float& dt);
    void updateButtons();
    void update(const float& dt);
    void render(sf::RenderTarget* target = NULL);

    void renderButtons(sf::RenderTarget* target = NULL);
};

