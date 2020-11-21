#include "AppState.h"

AppState::AppState(sf::RenderWindow* window, std::stack<State*>* states)
	: State(window, states)
{
	this->stateName = "AppState";
    this->initElements();
    this->initBackground();
    this->initFont();
    this->initButtons();
}

AppState::~AppState()
{
    std::map<std::pair<std::string, std::string>, Button*>::iterator it;
    for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
        delete it->second;
    }
}

void AppState::initButtons()
{
    sf::Color boxIdle = sf::Color(177, 0, 0, 255);
    sf::Color boxHover = sf::Color(255, 137, 137, 255);
    sf::Color boxActive = sf::Color(98, 0, 0, 255);


    this->buttons[{"EXIT_STATE", ""}] = new Button(50, 50, 80, 50,
        &this->font, "Back",
        sf::Color(0, 0, 0, 255), sf::Color(80, 80, 80, 255), sf::Color(150, 150, 150, 255)
    );

    std::pair<std::string, std::string> PAIR = std::make_pair("BOX_STATE", this->el[1].name);
    this->buttons[PAIR] = new Button(100 , 200, 80, 80,
        &this->font, "H",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[2].name);
    this->buttons[PAIR] = new Button(1800, 200, 80, 80,
        &this->font, "He",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[3].name);
    this->buttons[PAIR] = new Button(100, 300, 80, 80,
        &this->font, "Li",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[4].name);
    this->buttons[PAIR] = new Button(200, 300, 80, 80,
        &this->font, "Be",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[5].name);
    this->buttons[PAIR] = new Button(1300, 300, 80, 80,
        &this->font, "B",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[6].name);
    this->buttons[PAIR] = new Button(1400, 300, 80, 80,
        &this->font, "C",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[7].name);
    this->buttons[PAIR] = new Button(1500, 300, 80, 80,
        &this->font, "N",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[8].name);
    this->buttons[PAIR] = new Button(1600, 300, 80, 80,
        &this->font, "O",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[9].name);
    this->buttons[PAIR] = new Button(1700, 300, 80, 80,
        &this->font, "F",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[10].name);
    this->buttons[PAIR] = new Button(1800, 300, 80, 80,
        &this->font, "Ne",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[11].name);
    this->buttons[PAIR] = new Button(100, 400, 80, 80,
        &this->font, "Na",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[12].name);
    this->buttons[PAIR] = new Button(200, 400, 80, 80,
        &this->font, "Mg",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[13].name);
    this->buttons[PAIR] = new Button(1300, 400, 80, 80,
        &this->font, "Al",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[14].name);
    this->buttons[PAIR] = new Button(1400, 400, 80, 80,
        &this->font, "Si",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[15].name);
    this->buttons[PAIR] = new Button(1500, 400, 80, 80,
        &this->font, "P",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[16].name);
    this->buttons[PAIR] = new Button(1600, 400, 80, 80,
        &this->font, "S",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[17].name);
    this->buttons[PAIR] = new Button(1700, 400, 80, 80,
        &this->font, "Cl",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[18].name);
    this->buttons[PAIR] = new Button(1800, 400, 80, 80,
        &this->font, "Ar",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[19].name);
    this->buttons[PAIR] = new Button(100, 500, 80, 80,
        &this->font, "K",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[20].name);
    this->buttons[PAIR] = new Button(200, 500, 80, 80,
        &this->font, "Ca",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[21].name);
    this->buttons[PAIR] = new Button(300, 500, 80, 80,
        &this->font, "Sc",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[22].name);
    this->buttons[PAIR] = new Button(400, 500, 80, 80,
        &this->font, "Ti",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[23].name);
    this->buttons[PAIR] = new Button(500, 500, 80, 80,
        &this->font, "V",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[24].name);
    this->buttons[PAIR] = new Button(600, 500, 80, 80,
        &this->font, "Cr",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[25].name);
    this->buttons[PAIR] = new Button(700, 500, 80, 80,
        &this->font, "Mn",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[26].name);
    this->buttons[PAIR] = new Button(800, 500, 80, 80,
        &this->font, "Fe",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[27].name);
    this->buttons[PAIR] = new Button(900, 500, 80, 80,
        &this->font, "Co",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[28].name);
    this->buttons[PAIR] = new Button(1000, 500, 80, 80,
        &this->font, "Ni",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[29].name);
    this->buttons[PAIR] = new Button(1100, 500, 80, 80,
        &this->font, "Cu",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[30].name);
    this->buttons[PAIR] = new Button(1200, 500, 80, 80,
        &this->font, "Zn",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[31].name);
    this->buttons[PAIR] = new Button(1300, 500, 80, 80,
        &this->font, "Ga",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[32].name);
    this->buttons[PAIR] = new Button(1400, 500, 80, 80,
        &this->font, "Ge",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[33].name);
    this->buttons[PAIR] = new Button(1500, 500, 80, 80,
        &this->font, "As",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[34].name);
    this->buttons[PAIR] = new Button(1600, 500, 80, 80,
        &this->font, "Se",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[35].name);
    this->buttons[PAIR] = new Button(1700, 500, 80, 80,
        &this->font, "Br",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[36].name);
    this->buttons[PAIR] = new Button(1800, 500, 80, 80,
        &this->font, "Kr",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[37].name);
    this->buttons[PAIR] = new Button(100, 600, 80, 80,
        &this->font, "Rb",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[38].name);
    this->buttons[PAIR] = new Button(200, 600, 80, 80,
        &this->font, "Sr",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[39].name);
    this->buttons[PAIR] = new Button(300, 600, 80, 80,
        &this->font, "Y",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[40].name);
    this->buttons[PAIR] = new Button(400, 600, 80, 80,
        &this->font, "Zr",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[41].name);
    this->buttons[PAIR] = new Button(500, 600, 80, 80,
        &this->font, "Nb",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[42].name);
    this->buttons[PAIR] = new Button(600, 600, 80, 80,
        &this->font, "Mo",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[43].name);
    this->buttons[PAIR] = new Button(700, 600, 80, 80,
        &this->font, "Tc",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[44].name);
    this->buttons[PAIR] = new Button(800, 600, 80, 80,
        &this->font, "Ru",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[45].name);
    this->buttons[PAIR] = new Button(900, 600, 80, 80,
        &this->font, "Rh",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[46].name);
    this->buttons[PAIR] = new Button(1000, 600, 80, 80,
        &this->font, "Pd",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[47].name);
    this->buttons[PAIR] = new Button(1100, 600, 80, 80,
        &this->font, "Ag",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[48].name);
    this->buttons[PAIR] = new Button(1200, 600, 80, 80,
        &this->font, "Cd",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[49].name);
    this->buttons[PAIR] = new Button(1300, 600, 80, 80,
        &this->font, "In",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[50].name);
    this->buttons[PAIR] = new Button(1400, 600, 80, 80,
        &this->font, "Sn",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[51].name);
    this->buttons[PAIR] = new Button(1500, 600, 80, 80,
        &this->font, "Sb",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[52].name);
    this->buttons[PAIR] = new Button(1600, 600, 80, 80,
        &this->font, "Te",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[53].name);
    this->buttons[PAIR] = new Button(1700, 600, 80, 80,
        &this->font, "I",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[54].name);
    this->buttons[PAIR] = new Button(1800, 600, 80, 80,
        &this->font, "Xe",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[55].name);
    this->buttons[PAIR] = new Button(100, 700, 80, 80,
        &this->font, "Cs",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[56].name);
    this->buttons[PAIR] = new Button(200, 700, 80, 80,
        &this->font, "Ba",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[57].name);
    this->buttons[PAIR] = new Button(300, 700, 80, 80,
        &this->font, "La",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[72].name);
    this->buttons[PAIR] = new Button(400, 700, 80, 80,
        &this->font, "Hf",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[73].name);
    this->buttons[PAIR] = new Button(500, 700, 80, 80,
        &this->font, "Ta",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[74].name);
    this->buttons[PAIR] = new Button(600, 700, 80, 80,
        &this->font, "W",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[75].name);
    this->buttons[PAIR] = new Button(700, 700, 80, 80,
        &this->font, "Re",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[76].name);
    this->buttons[PAIR] = new Button(800, 700, 80, 80,
        &this->font, "Os",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[77].name);
    this->buttons[PAIR] = new Button(900, 700, 80, 80,
        &this->font, "Ir",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[78].name);
    this->buttons[PAIR] = new Button(1000, 700, 80, 80,
        &this->font, "Pt",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[79].name);
    this->buttons[PAIR] = new Button(1100, 700, 80, 80,
        &this->font, "Au",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[80].name);
    this->buttons[PAIR] = new Button(1200, 700, 80, 80,
        &this->font, "Hg",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[81].name);
    this->buttons[PAIR] = new Button(1300, 700, 80, 80,
        &this->font, "Tl",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[82].name);
    this->buttons[PAIR] = new Button(1400, 700, 80, 80,
        &this->font, "Pb",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[83].name);
    this->buttons[PAIR] = new Button(1500, 700, 80, 80,
        &this->font, "Bi",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[84].name);
    this->buttons[PAIR] = new Button(1600, 700, 80, 80,
        &this->font, "Po",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[85].name);
    this->buttons[PAIR] = new Button(1700, 700, 80, 80,
        &this->font, "At",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[86].name);
    this->buttons[PAIR] = new Button(1800, 700, 80, 80,
        &this->font, "Rd",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[87].name);
    this->buttons[PAIR] = new Button(100, 800, 80, 80,
        &this->font, "Fr",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[88].name);
    this->buttons[PAIR] = new Button(200, 800, 80, 80,
        &this->font, "Ra",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[89].name);
    this->buttons[PAIR] = new Button(300, 800, 80, 80,
        &this->font, "Ac",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[104].name);
    this->buttons[PAIR] = new Button(400, 800, 80, 80,
        &this->font, "Rf",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[105].name);
    this->buttons[PAIR] = new Button(500, 800, 80, 80,
        &this->font, "Db",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[106].name);
    this->buttons[PAIR] = new Button(600, 800, 80, 80,
        &this->font, "Sg",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[107].name);
    this->buttons[PAIR] = new Button(700, 800, 80, 80,
        &this->font, "Bh",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[108].name);
    this->buttons[PAIR] = new Button(800, 800, 80, 80,
        &this->font, "Hs",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[109].name);
    this->buttons[PAIR] = new Button(900, 800, 80, 80,
        &this->font, "Mt",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[110].name);
    this->buttons[PAIR] = new Button(1000, 800, 80, 80,
        &this->font, "Ds",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[111].name);
    this->buttons[PAIR] = new Button(1100, 800, 80, 80,
        &this->font, "Rg",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[112].name);
    this->buttons[PAIR] = new Button(1200, 800, 80, 80,
        &this->font, "Cn",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[113].name);
    this->buttons[PAIR] = new Button(1300, 800, 80, 80,
        &this->font, "Nh",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[114].name);
    this->buttons[PAIR] = new Button(1400, 800, 80, 80,
        &this->font, "Fl",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[115].name);
    this->buttons[PAIR] = new Button(1500, 800, 80, 80,
        &this->font, "Mc",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[116].name);
    this->buttons[PAIR] = new Button(1600, 800, 80, 80,
        &this->font, "Lv",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[117].name);
    this->buttons[PAIR] = new Button(1700, 800, 80, 80,
        &this->font, "Ts",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[118].name);
    this->buttons[PAIR] = new Button(1800, 800, 80, 80,
        &this->font, "Og",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[58].name);
    this->buttons[PAIR] = new Button(400, 910, 80, 80,
        &this->font, "Ce",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[59].name);
    this->buttons[PAIR] = new Button(500, 910, 80, 80,
        &this->font, "Pr",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[60].name);
    this->buttons[PAIR] = new Button(600, 910, 80, 80,
        &this->font, "Nd",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[61].name);
    this->buttons[PAIR] = new Button(700, 910, 80, 80,
        &this->font, "Pm",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[62].name);
    this->buttons[PAIR] = new Button(800, 910, 80, 80,
        &this->font, "Sm",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[63].name);
    this->buttons[PAIR] = new Button(900, 910, 80, 80,
        &this->font, "Eu",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[64].name);
    this->buttons[PAIR] = new Button(1000, 910, 80, 80,
        &this->font, "Gd",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[65].name);
    this->buttons[PAIR] = new Button(1100, 910, 80, 80,
        &this->font, "Tb",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[66].name);
    this->buttons[PAIR] = new Button(1200, 910, 80, 80,
        &this->font, "Dy",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[67].name);
    this->buttons[PAIR] = new Button(1300, 910, 80, 80,
        &this->font, "Ho",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[68].name);
    this->buttons[PAIR] = new Button(1400, 910, 80, 80,
        &this->font, "Er",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[69].name);
    this->buttons[PAIR] = new Button(1500, 910, 80, 80,
        &this->font, "Tm",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[70].name);
    this->buttons[PAIR] = new Button(1600, 910, 80, 80,
        &this->font, "Yb",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[71].name);
    this->buttons[PAIR] = new Button(1700, 910, 80, 80,
        &this->font, "Lu",
        boxIdle, boxHover, boxActive
    );
    PAIR = std::make_pair("BOX_STATE", this->el[90].name);
    this->buttons[PAIR] = new Button(400, 1000, 80, 80,
        &this->font, "Th",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[91].name);
    this->buttons[PAIR] = new Button(500, 1000, 80, 80,
        &this->font, "Pa",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[92].name);
    this->buttons[PAIR] = new Button(600, 1000, 80, 80,
        &this->font, "U",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[93].name);
    this->buttons[PAIR] = new Button(700, 1000, 80, 80,
        &this->font, "Np",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[94].name);
    this->buttons[PAIR] = new Button(800, 1000, 80, 80,
        &this->font, "Pu",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[95].name);
    this->buttons[PAIR] = new Button(900, 1000, 80, 80,
        &this->font, "Am",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[96].name);
    this->buttons[PAIR] = new Button(1000, 1000, 80, 80,
        &this->font, "Cm",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[97].name);
    this->buttons[PAIR] = new Button(1100, 1000, 80, 80,
        &this->font, "Bk",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[98].name);
    this->buttons[PAIR] = new Button(1200, 1000, 80, 80,
        &this->font, "Cf",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[99].name);
    this->buttons[PAIR] = new Button(1300, 1000, 80, 80,
        &this->font, "Es",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[100].name);
    this->buttons[PAIR] = new Button(1400, 1000, 80, 80,
        &this->font, "Fm",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[101].name);
    this->buttons[PAIR] = new Button(1500, 1000, 80, 80,
        &this->font, "Md",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[102].name);
    this->buttons[PAIR] = new Button(1600, 1000, 80, 80,
        &this->font, "No",
        boxIdle, boxHover, boxActive
    );

    PAIR = std::make_pair("BOX_STATE", this->el[103].name);
    this->buttons[PAIR] = new Button(1700, 1000, 80, 80,
        &this->font, "Lr",
        boxIdle, boxHover, boxActive
    );
}

void AppState::initBackground()
{
    this->background.setSize(
        sf::Vector2f(
            float(this->window->getSize().x),
            float(this->window->getSize().y)
        )
    );

    this->background.setFillColor(sf::Color(232, 228, 201, 255));

}

void AppState::initElements()
{
	element *elem = new element[119];
    int i;

    //Initializing atomic numbers.
    for (i = 1; i <= 118; ++i)
    {
        elem[i].atomicno = i;
    }

    //Initializing element names and electronic configurations.
    {
        strcpy_s(elem[1].name, "Hydrogen- H");          strcpy_s(elem[1].ec, "1s1");
        strcpy_s(elem[2].name, "Helium- He");           strcpy_s(elem[2].ec, "1s2");
        strcpy_s(elem[3].name, "Lithium- Li");          strcpy_s(elem[3].ec, "[He] 2s1");
        strcpy_s(elem[4].name, "Beryllium- Be");        strcpy_s(elem[4].ec, "[He] 2s2	");
        strcpy_s(elem[5].name, "Boron- B");             strcpy_s(elem[5].ec, "[He] 2s2 2p1");
        strcpy_s(elem[6].name, "Carbon- C");            strcpy_s(elem[6].ec, "[He] 2s2 2p2");
        strcpy_s(elem[7].name, "Nitrogen- N");          strcpy_s(elem[7].ec, "[He] 2s2 2p3");
        strcpy_s(elem[8].name, "Oxygen- O");            strcpy_s(elem[8].ec, "[He] 2s2 2p4");
        strcpy_s(elem[9].name, "Fluorine- F");          strcpy_s(elem[9].ec, "[He] 2s2 2p5");
        strcpy_s(elem[10].name, "Neon- Ne");            strcpy_s(elem[10].ec, "[He] 2s2 2p6");
        strcpy_s(elem[11].name, "Sodium- Na");          strcpy_s(elem[11].ec, "[Ne] 3s1");
        strcpy_s(elem[12].name, "Magnesium- Mg");       strcpy_s(elem[12].ec, "[Ne] 3s2");
        strcpy_s(elem[13].name, "Aluminium- Al");       strcpy_s(elem[13].ec, "[Ne] 3s2 3p1");
        strcpy_s(elem[14].name, "Silicon- Si");         strcpy_s(elem[14].ec, "[Ne] 3s2 3p2");
        strcpy_s(elem[15].name, "Phosphorus- P");       strcpy_s(elem[15].ec, "[Ne] 3s2 3p3");
        strcpy_s(elem[16].name, "Sulfur- S");           strcpy_s(elem[16].ec, "[Ne] 3s2 3p4");
        strcpy_s(elem[17].name, "Chlorine- Cl");        strcpy_s(elem[17].ec, "[Ne] 3s2 3p5");
        strcpy_s(elem[18].name, "Argon- Ar");           strcpy_s(elem[18].ec, "[Ne] 3s2 3p6");
        strcpy_s(elem[19].name, "Potassium- K");        strcpy_s(elem[19].ec, "[Ar] 4s1");
        strcpy_s(elem[20].name, "Calcium- Ca");         strcpy_s(elem[20].ec, "[Ar] 4s2");
        strcpy_s(elem[21].name, "Scandium- Sc");        strcpy_s(elem[21].ec, "[Ar] 3d1 4s2");
        strcpy_s(elem[22].name, "Titanium- Ti");        strcpy_s(elem[22].ec, "[Ar] 3d2 4s2");
        strcpy_s(elem[23].name, "Vanadium- V");         strcpy_s(elem[23].ec, "[Ar] 3d3 4s2");
        strcpy_s(elem[24].name, "Chromium- Cr");        strcpy_s(elem[24].ec, "[Ar] 3d5 4s1");
        strcpy_s(elem[25].name, "Manganese- Mn");       strcpy_s(elem[25].ec, "[Ar] 3d5 4s2");
        strcpy_s(elem[26].name, "Iron- Fe");            strcpy_s(elem[26].ec, "[Ar] 3d6 4s2");
        strcpy_s(elem[27].name, "Cobalt- Co");          strcpy_s(elem[27].ec, "[Ar] 3d7 4s2");
        strcpy_s(elem[28].name, "Nickel- Ni");          strcpy_s(elem[28].ec, "[Ar] 3d8 4s2");
        strcpy_s(elem[29].name, "Copper- Cu");          strcpy_s(elem[29].ec, "[Ar] 3d10 4s1");
        strcpy_s(elem[30].name, "Zinc- Zn");            strcpy_s(elem[30].ec, "[Ar] 3d10 4s2");
        strcpy_s(elem[31].name, "Gallium- Ga");         strcpy_s(elem[31].ec, "[Ar] 3d10 4s2 4p1");
        strcpy_s(elem[32].name, "Germanium- Ge");       strcpy_s(elem[32].ec, "[Ar] 3d10 4s2 4p2");
        strcpy_s(elem[33].name, "Arsenic- As");         strcpy_s(elem[33].ec, "[Ar] 3d10 4s2 4p3");
        strcpy_s(elem[34].name, "Selenium- Se");        strcpy_s(elem[34].ec, "[Ar] 3d10 4s2 4p4");
        strcpy_s(elem[35].name, "Bromine- Br");         strcpy_s(elem[35].ec, "[Ar] 3d10 4s2 4p5	");
        strcpy_s(elem[36].name, "Krypton- Kr");         strcpy_s(elem[36].ec, "[Ar] 3d10 4s2 4p6	");
        strcpy_s(elem[37].name, "Rubidium- Rb");        strcpy_s(elem[37].ec, "[Kr] 5s1");
        strcpy_s(elem[38].name, "Strontium- Sr");       strcpy_s(elem[38].ec, "[Kr] 5s2");
        strcpy_s(elem[39].name, "Yttrium- Y");          strcpy_s(elem[39].ec, "[Kr] 4d1 5s2");
        strcpy_s(elem[40].name, "Zirconium- Zr");       strcpy_s(elem[40].ec, "[Kr] 4d2 5s2");
        strcpy_s(elem[41].name, "Niobium- Nb");         strcpy_s(elem[41].ec, "[Kr] 4d4 5s1");
        strcpy_s(elem[42].name, "Molybdenum- Mo");      strcpy_s(elem[42].ec, "[Kr] 4d5 5s1");
        strcpy_s(elem[43].name, "Technetium- Tc");      strcpy_s(elem[43].ec, "[Kr] 4d5 5s2");
        strcpy_s(elem[44].name, "Ruthenium- Ru");       strcpy_s(elem[44].ec, "[Kr] 4d7 5s1");
        strcpy_s(elem[45].name, "Rhodium- Rh");         strcpy_s(elem[45].ec, "[Kr] 4d8 5s1");
        strcpy_s(elem[46].name, "Palladium- Pd");       strcpy_s(elem[46].ec, "[Kr] 4d10");
        strcpy_s(elem[47].name, "Silver- Ag");          strcpy_s(elem[47].ec, "[Kr] 4d10 5s1");
        strcpy_s(elem[48].name, "Cadmium- Cd");         strcpy_s(elem[48].ec, "[Kr] 4d10 5s2");
        strcpy_s(elem[49].name, "Indium- In");          strcpy_s(elem[49].ec, "[Kr] 4d10 5s2 5p1");
        strcpy_s(elem[50].name, "Tin- Sn");             strcpy_s(elem[50].ec, "[Kr] 4d10 5s2 5p2");
        strcpy_s(elem[51].name, "Antimony- Sb");        strcpy_s(elem[51].ec, "[Kr] 4d10 5s2 5p3");
        strcpy_s(elem[52].name, "Tellurium- Te");       strcpy_s(elem[52].ec, "[Kr] 4d10 5s2 5p4");
        strcpy_s(elem[53].name, "Iodine- I");           strcpy_s(elem[53].ec, "[Kr] 4d10 5s2 5p5");
        strcpy_s(elem[54].name, "Xenon- Xe");           strcpy_s(elem[54].ec, "[Kr] 4d10 5s2 5p6");
        strcpy_s(elem[55].name, "Caesium- Cs");         strcpy_s(elem[55].ec, "[Xe] 6s1");
        strcpy_s(elem[56].name, "Barium- Ba");          strcpy_s(elem[56].ec, "[Xe] 6s2");
        strcpy_s(elem[57].name, "Lanthanum- La");       strcpy_s(elem[57].ec, "[Xe] 5d1 6s2");
        strcpy_s(elem[58].name, "Cerium- Ce");          strcpy_s(elem[58].ec, "[Xe] 4f1 5d1 6s2");
        strcpy_s(elem[59].name, "Praseodymium- Pr");    strcpy_s(elem[59].ec, "[Xe] 4f3 6s2");
        strcpy_s(elem[60].name, "Neodymium- Nd");       strcpy_s(elem[60].ec, "[Xe] 4f4 6s2");
        strcpy_s(elem[61].name, "Promethium- Pm");      strcpy_s(elem[61].ec, "[Xe] 4f5 6s2");
        strcpy_s(elem[62].name, "Samarium- Sm");        strcpy_s(elem[62].ec, "[Xe] 4f6 6s2");
        strcpy_s(elem[63].name, "Europium- Eu");        strcpy_s(elem[63].ec, "[Xe] 4f7 6s2");
        strcpy_s(elem[64].name, "Gadolinium- Gd");      strcpy_s(elem[64].ec, "[Xe] 4f7 5d1 6s2");
        strcpy_s(elem[65].name, "Terbium- Tb");         strcpy_s(elem[65].ec, "[Xe] 4f9 6s2");
        strcpy_s(elem[66].name, "Dysprosium- Dy");      strcpy_s(elem[66].ec, "[Xe] 4f10 6s2");
        strcpy_s(elem[67].name, "Holmium- Ho");         strcpy_s(elem[67].ec, "[Xe] 4f11 6s2");
        strcpy_s(elem[68].name, "Erbium- Er");          strcpy_s(elem[68].ec, "[Xe] 4f12 6s2");
        strcpy_s(elem[69].name, "Thulium- Tm");         strcpy_s(elem[69].ec, "[Xe] 4f13 6s2");
        strcpy_s(elem[70].name, "Ytterbium- Yb");       strcpy_s(elem[70].ec, "[Xe] 4f14 6s2");
        strcpy_s(elem[71].name, "Lutetium- Lu");        strcpy_s(elem[71].ec, "[Xe] 4f14 5d1 6s2");
        strcpy_s(elem[72].name, "Hafnium- Hf");         strcpy_s(elem[72].ec, "[Xe] 4f14 5d2 6s2");
        strcpy_s(elem[73].name, "Tantalum- Ta");        strcpy_s(elem[73].ec, "[Xe] 4f14 5d3 6s2");
        strcpy_s(elem[74].name, "Tungsten- W");         strcpy_s(elem[74].ec, "[Xe] 4f14 5d4 6s2");
        strcpy_s(elem[75].name, "Rhenium- Re");         strcpy_s(elem[75].ec, "[Xe] 4f14 5d5 6s2");
        strcpy_s(elem[76].name, "Osmium- Os");          strcpy_s(elem[76].ec, "[Xe] 4f14 5d6 6s2");
        strcpy_s(elem[77].name, "Iridium- Ir");         strcpy_s(elem[77].ec, "[Xe] 4f14 5d7 6s2");
        strcpy_s(elem[78].name, "Platinum- Pt");        strcpy_s(elem[78].ec, "[Xe] 4f14 5d9 6s1");
        strcpy_s(elem[79].name, "Gold- Au");            strcpy_s(elem[79].ec, "[Xe] 4f14 5d10 6s1");
        strcpy_s(elem[80].name, "Mercury- Hg");         strcpy_s(elem[80].ec, "[Xe] 4f14 5d10 6s2	");
        strcpy_s(elem[81].name, "Thallium- Tl");        strcpy_s(elem[81].ec, "[Xe] 4f14 5d10 6s2 6p1");
        strcpy_s(elem[82].name, "Lead- Pb");            strcpy_s(elem[82].ec, "[Xe] 4f14 5d10 6s2 6p2");
        strcpy_s(elem[83].name, "Bismuth- Bi");         strcpy_s(elem[83].ec, "[Xe] 4f14 5d10 6s2 6p3");
        strcpy_s(elem[84].name, "Polonium- Po");        strcpy_s(elem[84].ec, "[Xe] 4f14 5d10 6s2 6p4");
        strcpy_s(elem[85].name, "Astatine- At");        strcpy_s(elem[85].ec, "[Xe] 4f14 5d10 6s2 6p5");
        strcpy_s(elem[86].name, "Radon- Rn");           strcpy_s(elem[86].ec, "[Xe] 4f14 5d10 6s2 6p6");
        strcpy_s(elem[87].name, "Francium- Fr");        strcpy_s(elem[87].ec, "[Rn] 7s1");
        strcpy_s(elem[88].name, "Radium- Ra");          strcpy_s(elem[88].ec, "[Rn] 7s2");
        strcpy_s(elem[89].name, "Actinium- Ac");        strcpy_s(elem[89].ec, "[Rn] 6d1 7s2");
        strcpy_s(elem[90].name, "Thorium- Th");         strcpy_s(elem[90].ec, "[Rn] 6d2 7s2");
        strcpy_s(elem[91].name, "Protactinium- Pa");    strcpy_s(elem[91].ec, "[Rn] 5f2 6d1 7s2");
        strcpy_s(elem[92].name, "Uranium- U");          strcpy_s(elem[92].ec, "[Rn] 5f3 6d1 7s2");
        strcpy_s(elem[93].name, "Neptunium- Np");       strcpy_s(elem[93].ec, "[Rn] 5f4 6d1 7s2");
        strcpy_s(elem[94].name, "Plutonium- Pu");       strcpy_s(elem[94].ec, "[Rn] 5f6 7s2");
        strcpy_s(elem[95].name, "Americium- Am");       strcpy_s(elem[95].ec, "[Rn] 5f7 7s2");
        strcpy_s(elem[96].name, "Curium- Cm");          strcpy_s(elem[96].ec, "[Rn] 5f7 6d1 7s2");
        strcpy_s(elem[97].name, "Berkelium- Bk");       strcpy_s(elem[97].ec, "[Rn] 5f9 7s2");
        strcpy_s(elem[98].name, "Californium- Cf");     strcpy_s(elem[98].ec, "[Rn] 5f10 7s2");
        strcpy_s(elem[99].name, "Einsteinium- Es");     strcpy_s(elem[99].ec, "[Rn] 5f11 7s2");
        strcpy_s(elem[100].name, "Fermium- Fm");        strcpy_s(elem[100].ec, "[Rn] 5f12 7s2");
        strcpy_s(elem[101].name, "Mendelevium- Md");    strcpy_s(elem[101].ec, "[Rn] 5f13 7s2");
        strcpy_s(elem[102].name, "Nobelium- No");       strcpy_s(elem[102].ec, "[Rn] 5f14 7s2");
        strcpy_s(elem[103].name, "Lawrencium- Lr");     strcpy_s(elem[103].ec, "[Rn] 5f14 7s2 7p1");
        strcpy_s(elem[104].name, "Rutherfordium- Rf");  strcpy_s(elem[104].ec, "[Rn] 5f14 6d2 7s2");
        strcpy_s(elem[105].name, "Dubnium- Db");        strcpy_s(elem[105].ec, "[Rn] 5f14 6d3 7s2	");
        strcpy_s(elem[106].name, "Seaborgium- Sg");     strcpy_s(elem[106].ec, "[Rn] 5f14 6d4 7s2");
        strcpy_s(elem[107].name, "Bohrium- Bh");        strcpy_s(elem[107].ec, "[Rn] 5f14 6d5 7s2");
        strcpy_s(elem[108].name, "Hassium- Hs");        strcpy_s(elem[108].ec, "[Rn] 5f14 6d6 7s2");
        strcpy_s(elem[109].name, "Meitnerium- Mt");     strcpy_s(elem[109].ec, "[Rn] 5f14 6d7 7s2");
        strcpy_s(elem[110].name, "Darmstadtium- Ds");   strcpy_s(elem[110].ec, "[Rn] 5f14 6d8 7s2");
        strcpy_s(elem[111].name, "Roentgenium- Rg");    strcpy_s(elem[111].ec, "[Rn] 5f14 6d9 7s2");
        strcpy_s(elem[112].name, "Copernicium- Cn");    strcpy_s(elem[112].ec, "[Rn] 5f14 6d10 7s2");
        strcpy_s(elem[113].name, "Nihonium- Nh");       strcpy_s(elem[113].ec, "[Rn] 5f14 6d10 7s2 7p1");
        strcpy_s(elem[114].name, "Flerovium- Fl");      strcpy_s(elem[114].ec, "[Rn] 5f14 6d10 7s2 7p2");
        strcpy_s(elem[115].name, "Moscovium- Mc");      strcpy_s(elem[115].ec, "[Rn] 5f14 6d10 7s2 7p3");
        strcpy_s(elem[116].name, "Livermorium- Lv");    strcpy_s(elem[116].ec, "[Rn] 5f14 6d10 7s2 7p4");
        strcpy_s(elem[117].name, "Tennessine- Ts");     strcpy_s(elem[117].ec, "[Rn] 5f14 6d10 7s2 7p5");
        strcpy_s(elem[118].name, "Oganesson- Og");      strcpy_s(elem[118].ec, "[Rn] 5f14 6d10 7s2 7p6");
    }


    //Initializing atomic weight, atomic radius and electronegativity.
    {
        elem[1].atomicw = 1.008;           elem[1].atomicr = 53;            elem[1].en = 2.20;
        elem[2].atomicw = 4.002602;        elem[2].atomicr = 31;            elem[2].en = 0;
        elem[3].atomicw = 6.94;            elem[3].atomicr = 167;          elem[3].en = 0.98;
        elem[4].atomicw = 9.012182;        elem[4].atomicr = 112;           elem[4].en = 1.57;
        elem[5].atomicw = 10.81;           elem[5].atomicr = 87;            elem[5].en = 2.04;
        elem[6].atomicw = 12.011;          elem[6].atomicr = 67;            elem[6].en = 2.55;
        elem[7].atomicw = 14.007;          elem[7].atomicr = 56;            elem[7].en = 3.04;
        elem[8].atomicw = 15.999;          elem[8].atomicr = 48;            elem[8].en = 3.44;
        elem[9].atomicw = 18.9984032;      elem[9].atomicr = 42;            elem[9].en = 3.98;
        elem[10].atomicw = 20.1797;        elem[10].atomicr = 38;           elem[10].en = 0;
        elem[11].atomicw = 22.98976928;    elem[11].atomicr = 190;          elem[11].en = 0.93;
        elem[12].atomicw = 24.305;         elem[12].atomicr = 145;          elem[12].en = 1.31;
        elem[13].atomicw = 26.9815386;     elem[13].atomicr = 118;          elem[13].en = 1.61;
        elem[14].atomicw = 28.085;         elem[14].atomicr = 111;          elem[14].en = 1.90;
        elem[15].atomicw = 30.973762;      elem[15].atomicr = 98;           elem[15].en = 2.19;
        elem[16].atomicw = 32.06;          elem[16].atomicr = 88;           elem[16].en = 2.58;
        elem[17].atomicw = 35.45;          elem[17].atomicr = 79;           elem[17].en = 3.16;
        elem[18].atomicw = 39.948;         elem[18].atomicr = 71;           elem[18].en = 0;
        elem[19].atomicw = 39.0983;        elem[19].atomicr = 243;          elem[19].en = 0.82;
        elem[20].atomicw = 40.078;         elem[20].atomicr = 194;          elem[20].en = 1.00;
        elem[21].atomicw = 44.955912;      elem[21].atomicr = 184;          elem[21].en = 1.36;
        elem[22].atomicw = 47.867;         elem[22].atomicr = 176;          elem[22].en = 1.54;
        elem[23].atomicw = 50.9415;        elem[23].atomicr = 171;          elem[23].en = 1.63;
        elem[24].atomicw = 51.9961;        elem[24].atomicr = 166;          elem[24].en = 1.66;
        elem[25].atomicw = 54.938045;      elem[25].atomicr = 161;          elem[25].en = 1.55;
        elem[26].atomicw = 55.845;         elem[26].atomicr = 156;          elem[26].en = 1.83;
        elem[27].atomicw = 58.933195;      elem[27].atomicr = 152;          elem[27].en = 1.88;
        elem[28].atomicw = 58.6934;        elem[28].atomicr = 149;          elem[28].en = 1.91;
        elem[29].atomicw = 63.546;         elem[29].atomicr = 145;          elem[29].en = 1.90;
        elem[30].atomicw = 65.38;          elem[30].atomicr = 142;          elem[30].en = 1.65;
        elem[31].atomicw = 69.723;         elem[31].atomicr = 136;          elem[31].en = 1.81;
        elem[32].atomicw = 72.630;         elem[32].atomicr = 125;          elem[32].en = 2.01;
        elem[33].atomicw = 74.92160;       elem[33].atomicr = 114;          elem[33].en = 2.18;
        elem[34].atomicw = 78.96;          elem[34].atomicr = 103;          elem[34].en = 2.55;
        elem[35].atomicw = 79.904;         elem[35].atomicr = 94;           elem[35].en = 2.96;
        elem[36].atomicw = 83.798;         elem[36].atomicr = 88;           elem[36].en = 3.00;
        elem[37].atomicw = 85.4678;        elem[37].atomicr = 265;          elem[37].en = 0.82;
        elem[38].atomicw = 87.62;          elem[38].atomicr = 219;          elem[38].en = 0.95;
        elem[39].atomicw = 88.90585;       elem[39].atomicr = 212;          elem[39].en = 1.22;
        elem[40].atomicw = 91.224;         elem[40].atomicr = 206;          elem[40].en = 1.33;
        elem[41].atomicw = 92.90638;       elem[41].atomicr = 198;          elem[41].en = 1.6;
        elem[42].atomicw = 95.96;          elem[42].atomicr = 190;          elem[42].en = 2.16;
        elem[43].atomicw = 98;             elem[43].atomicr = 183;          elem[43].en = 1.9;
        elem[44].atomicw = 101.07;         elem[44].atomicr = 178;          elem[44].en = 2.2;
        elem[45].atomicw = 102.90550;      elem[45].atomicr = 173;          elem[45].en = 2.28;
        elem[46].atomicw = 106.42;         elem[46].atomicr = 169;          elem[46].en = 2.20;
        elem[47].atomicw = 107.8682;       elem[47].atomicr = 165;          elem[47].en = 1.93;
        elem[48].atomicw = 112.411;        elem[48].atomicr = 161;          elem[48].en = 1.69;
        elem[49].atomicw = 114.818;        elem[49].atomicr = 156;          elem[49].en = 1.78;
        elem[50].atomicw = 118.710;        elem[50].atomicr = 145;          elem[50].en = 1.96;
        elem[51].atomicw = 121.760;        elem[51].atomicr = 133;          elem[51].en = 2.05;
        elem[52].atomicw = 127.60;         elem[52].atomicr = 123;          elem[52].en = 2.1;
        elem[53].atomicw = 126.90447;      elem[53].atomicr = 115;          elem[53].en = 2.66;
        elem[54].atomicw = 131.293;        elem[54].atomicr = 108;          elem[54].en = 2.6;
        elem[55].atomicw = 132.9054519;    elem[55].atomicr = 298;          elem[55].en = 0.79;
        elem[56].atomicw = 137.327;        elem[56].atomicr = 253;          elem[56].en = 0.89;
        elem[57].atomicw = 138.90547;      elem[57].atomicr = 169;          elem[57].en = 1.10;
        elem[58].atomicw = 140.90765;      elem[58].atomicr = 131;          elem[58].en = 1.12;
        elem[59].atomicw = 140.90765;      elem[59].atomicr = 247;          elem[59].en = 1.13;
        elem[60].atomicw = 144.242;        elem[60].atomicr = 206;          elem[60].en = 1.14;
        elem[61].atomicw = 145;            elem[61].atomicr = 205;          elem[61].en = 0;
        elem[62].atomicw = 150.36;         elem[62].atomicr = 238;          elem[62].en = 1.17;
        elem[63].atomicw = 151.964;        elem[63].atomicr = 231;          elem[63].en = 0;
        elem[64].atomicw = 157.25;         elem[64].atomicr = 233;          elem[64].en = 1.20;
        elem[65].atomicw = 158.92535;      elem[65].atomicr = 225;          elem[65].en = 0;
        elem[66].atomicw = 162.500;        elem[66].atomicr = 228;          elem[66].en = 1.22;
        elem[67].atomicw = 164.93032;      elem[67].atomicr = 0;            elem[67].en = 1.23;
        elem[68].atomicw = 167.259;        elem[68].atomicr = 226;          elem[68].en = 1.24;
        elem[69].atomicw = 168.93421;      elem[69].atomicr = 222;          elem[69].en = 1.25;
        elem[70].atomicw = 173.054;        elem[70].atomicr = 222;          elem[70].en = 0;
        elem[71].atomicw = 174.9668;       elem[71].atomicr = 217;          elem[71].en = 1.27;
        elem[72].atomicw = 178.49;         elem[72].atomicr = 208;          elem[72].en = 1.3;
        elem[73].atomicw = 180.94788;      elem[73].atomicr = 200;          elem[73].en = 1.5;
        elem[74].atomicw = 183.84;         elem[74].atomicr = 193;          elem[74].en = 2.36;
        elem[75].atomicw = 186.207;        elem[75].atomicr = 188;          elem[75].en = 1.9;
        elem[76].atomicw = 190.23;         elem[76].atomicr = 185;          elem[76].en = 2.2;
        elem[77].atomicw = 192.217;        elem[77].atomicr = 180;          elem[77].en = 2.20;
        elem[78].atomicw = 195.084;        elem[78].atomicr = 177;          elem[78].en = 2.28;
        elem[79].atomicw = 196.966569;     elem[79].atomicr = 174;          elem[79].en = 2.54;
        elem[80].atomicw = 200.592;        elem[80].atomicr = 171;          elem[80].en = 2.00;
        elem[81].atomicw = 204.38;         elem[81].atomicr = 156;          elem[81].en = 1.62;
        elem[82].atomicw = 207.2;          elem[82].atomicr = 154;          elem[82].en = 2.33;
        elem[83].atomicw = 208.98040;      elem[83].atomicr = 143;          elem[83].en = 2.02;
        elem[84].atomicw = 209;            elem[84].atomicr = 135;          elem[84].en = 2.0;
        elem[85].atomicw = 210;            elem[85].atomicr = 0;            elem[85].en = 2.2;
        elem[86].atomicw = 222;            elem[86].atomicr = 120;          elem[86].en = 0;
        elem[87].atomicw = 223;            elem[87].atomicr = 0;            elem[87].en = 0.7;
        elem[88].atomicw = 226;            elem[88].atomicr = 0;            elem[88].en = 0.9;
        elem[89].atomicw = 227;            elem[89].atomicr = 0;            elem[89].en = 1.1;
        elem[90].atomicw = 232.03806;      elem[90].atomicr = 0;            elem[90].en = 1.3;
        elem[91].atomicw = 231.03588;      elem[91].atomicr = 0;            elem[91].en = 1.5;
        elem[92].atomicw = 238.02891;      elem[92].atomicr = 0;            elem[92].en = 1.38;
        elem[93].atomicw = 237;            elem[93].atomicr = 0;            elem[93].en = 1.36;
        elem[94].atomicw = 244;            elem[94].atomicr = 0;            elem[94].en = 1.28;
        elem[95].atomicw = 243;            elem[95].atomicr = 0;            elem[95].en = 1.3;
        elem[96].atomicw = 247;            elem[96].atomicr = 0;            elem[96].en = 1.3;
        elem[97].atomicw = 247;            elem[97].atomicr = 0;            elem[97].en = 1.3;
        elem[98].atomicw = 251;            elem[98].atomicr = 0;            elem[98].en = 1.3;
        elem[99].atomicw = 252;            elem[99].atomicr = 0;            elem[99].en = 1.3;
        elem[100].atomicw = 257;           elem[100].atomicr = 0;           elem[100].en = 1.3;
        elem[101].atomicw = 258;           elem[101].atomicr = 0;           elem[101].en = 1.3;
        elem[102].atomicw = 259;           elem[102].atomicr = 0;           elem[102].en = 1.3;
        elem[103].atomicw = 262;           elem[103].atomicr = 0;           elem[103].en = 1.3;
        elem[104].atomicw = 267;           elem[104].atomicr = 0;           elem[104].en = 1.3;
        elem[105].atomicw = 268;           elem[105].atomicr = 0;           elem[105].en = 1.3;
        elem[106].atomicw = 269;           elem[106].atomicr = 0;           elem[106].en = 0;
        elem[107].atomicw = 270;           elem[107].atomicr = 0;           elem[107].en = 0;
        elem[108].atomicw = 269;           elem[108].atomicr = 0;           elem[108].en = 0;
        elem[109].atomicw = 278;           elem[109].atomicr = 0;           elem[109].en = 0;
        elem[110].atomicw = 281;           elem[110].atomicr = 0;           elem[110].en = 0;
        elem[111].atomicw = 281;           elem[111].atomicr = 0;           elem[111].en = 0;
        elem[112].atomicw = 285;           elem[112].atomicr = 0;           elem[112].en = 0;
        elem[113].atomicw = 286;           elem[113].atomicr = 0;           elem[113].en = 0;
        elem[114].atomicw = 289;           elem[114].atomicr = 0;           elem[114].en = 0;
        elem[115].atomicw = 289;           elem[115].atomicr = 0;           elem[115].en = 0;
        elem[116].atomicw = 293;           elem[116].atomicr = 0;           elem[116].en = 0;
        elem[117].atomicw = 294;           elem[117].atomicr = 0;           elem[117].en = 0;
        elem[118].atomicw = 294;           elem[118].atomicr = 0;           elem[118].en = 0;
    }


    //Initializing melting point , boiling point and density.
    {
        elem[1].meltp = 14.01;            elem[1].boilp = 20.28;            elem[1].density = 0.00008988;
        elem[2].meltp = 0.95;             elem[2].boilp = 4.22;             elem[2].density = 0.0001785;
        elem[3].meltp = 453.69;           elem[3].boilp = 1560;             elem[3].density = 0.534;
        elem[4].meltp = 1560;             elem[4].boilp = 2742;             elem[4].density = 1.85;
        elem[5].meltp = 2349;             elem[5].boilp = 4200;             elem[5].density = 2.34;
        elem[6].meltp = 3800;             elem[6].boilp = 4300;             elem[6].density = 2.267;
        elem[7].meltp = 63.15;            elem[7].boilp = 77.36;            elem[7].density = 0.0012506;
        elem[8].meltp = 54.36;            elem[8].boilp = 90.20;            elem[8].density = 0.001429;
        elem[9].meltp = 53.53;            elem[9].boilp = 85.03;            elem[9].density = 0.001696;
        elem[10].meltp = 24.56;           elem[10].boilp = 27.07;           elem[10].density = 0.0008999;
        elem[11].meltp = 370.87;          elem[11].boilp = 1156;            elem[11].density = 0.971;
        elem[12].meltp = 923;             elem[12].boilp = 1363;            elem[12].density = 1.738;
        elem[13].meltp = 933.47;          elem[13].boilp = 2792;            elem[13].density = 2.698;
        elem[14].meltp = 1687;            elem[14].boilp = 3538;            elem[14].density = 2.3296;
        elem[15].meltp = 317.30;          elem[15].boilp = 550;             elem[15].density = 1.82;
        elem[16].meltp = 388.36;          elem[16].boilp = 717.87;          elem[16].density = 2.067;
        elem[17].meltp = 171.6;           elem[17].boilp = 239.11;          elem[17].density = 0.003214;
        elem[18].meltp = 83.80;           elem[18].boilp = 87.30;           elem[18].density = 0.0017837;
        elem[19].meltp = 336.53;          elem[19].boilp = 1032;            elem[19].density = 0.862;
        elem[20].meltp = 1115;            elem[20].boilp = 1757;            elem[20].density = 1.54;
        elem[21].meltp = 1814;            elem[21].boilp = 3109;            elem[21].density = 2.989;
        elem[22].meltp = 1941;            elem[22].boilp = 3560;            elem[22].density = 4.54;
        elem[23].meltp = 2183;            elem[23].boilp = 3680;            elem[23].density = 6.11;
        elem[24].meltp = 2180;            elem[24].boilp = 2944;            elem[24].density = 7.15;
        elem[25].meltp = 1519;            elem[25].boilp = 2334;            elem[25].density = 7.44;
        elem[26].meltp = 1811;            elem[26].boilp = 3134;            elem[26].density = 7.874;
        elem[27].meltp = 1768;            elem[27].boilp = 3200;            elem[27].density = 8.86;
        elem[28].meltp = 1728;            elem[28].boilp = 3186;            elem[28].density = 8.912;
        elem[29].meltp = 1357.77;         elem[29].boilp = 2835;            elem[29].density = 8.96;
        elem[30].meltp = 692.88;          elem[30].boilp = 1180;            elem[30].density = 7.134;
        elem[31].meltp = 302.9146;        elem[31].boilp = 2477;            elem[31].density = 5.907;
        elem[32].meltp = 1211.40;         elem[32].boilp = 3106;            elem[32].density = 5.323;
        elem[33].meltp = 1090;            elem[33].boilp = 887;             elem[33].density = 5.776;
        elem[34].meltp = 453;             elem[34].boilp = 958;             elem[34].density = 4.809;
        elem[35].meltp = 265.8;           elem[35].boilp = 332.0;           elem[35].density = 3.122;
        elem[36].meltp = 115.79;          elem[36].boilp = 119.93;          elem[36].density = 0.003733;
        elem[37].meltp = 312.46;          elem[37].boilp = 961;             elem[37].density = 1.532;
        elem[38].meltp = 1050;            elem[38].boilp = 1655;            elem[38].density = 2.64;
        elem[39].meltp = 1799;            elem[39].boilp = 3609;            elem[39].density = 4.469;
        elem[40].meltp = 2128;            elem[40].boilp = 4682;            elem[40].density = 6.506;
        elem[41].meltp = 2750;            elem[41].boilp = 5017;            elem[41].density = 8.57;
        elem[42].meltp = 2896;            elem[42].boilp = 4912;            elem[42].density = 10.22;
        elem[43].meltp = 2430;            elem[43].boilp = 4538;            elem[43].density = 11.5;
        elem[44].meltp = 2607;            elem[44].boilp = 4423;            elem[44].density = 12.37;
        elem[45].meltp = 2237;            elem[45].boilp = 3968;            elem[45].density = 12.41;
        elem[46].meltp = 1828.05;         elem[46].boilp = 3236;            elem[46].density = 12.02;
        elem[47].meltp = 1234.93;         elem[47].boilp = 2435;            elem[47].density = 10.501;
        elem[48].meltp = 594.22;          elem[48].boilp = 1040;            elem[48].density = 8.69;
        elem[49].meltp = 429.75;          elem[49].boilp = 2345;            elem[49].density = 7.31;
        elem[50].meltp = 505.08;          elem[50].boilp = 2875;            elem[50].density = 7.287;
        elem[51].meltp = 903.78;          elem[51].boilp = 1860;            elem[51].density = 6.685;
        elem[52].meltp = 722.66;          elem[52].boilp = 1261;            elem[52].density = 6.232;
        elem[53].meltp = 386.85;          elem[53].boilp = 457.4;           elem[53].density = 4.93;
        elem[54].meltp = 161.4;           elem[54].boilp = 165.03;          elem[54].density = 0.005887;
        elem[55].meltp = 301.59;          elem[55].boilp = 944;             elem[55].density = 1.873;
        elem[56].meltp = 1000;            elem[56].boilp = 2170;            elem[56].density = 3.594;
        elem[57].meltp = 1193;            elem[57].boilp = 3737;            elem[57].density = 6.145;
        elem[58].meltp = 1068;            elem[58].boilp = 3716;            elem[58].density = 6.77;
        elem[59].meltp = 1208;            elem[59].boilp = 3793;            elem[59].density = 6.773;
        elem[60].meltp = 1297;            elem[60].boilp = 3347;            elem[60].density = 7.007;
        elem[61].meltp = 1315;            elem[61].boilp = 3273;            elem[61].density = 7.26;
        elem[62].meltp = 1345;            elem[62].boilp = 2067;            elem[62].density = 7.52;
        elem[63].meltp = 1099;            elem[63].boilp = 1802;            elem[63].density = 5.243;
        elem[64].meltp = 1585;            elem[64].boilp = 3546;            elem[64].density = 7.895;
        elem[65].meltp = 1629;            elem[65].boilp = 3503;            elem[65].density = 8.229;
        elem[66].meltp = 1680;            elem[66].boilp = 2840;            elem[66].density = 8.55;
        elem[67].meltp = 1734;            elem[67].boilp = 2993;            elem[67].density = 8.795;
        elem[68].meltp = 1802;            elem[68].boilp = 3141;            elem[68].density = 9.066;
        elem[69].meltp = 1818;            elem[69].boilp = 2223;            elem[69].density = 9.321;
        elem[70].meltp = 1097;            elem[70].boilp = 1469;            elem[70].density = 6.965;
        elem[71].meltp = 1925;            elem[71].boilp = 3675;            elem[71].density = 9.84;
        elem[72].meltp = 2506;            elem[72].boilp = 4876;            elem[72].density = 13.31;
        elem[73].meltp = 3290;            elem[73].boilp = 5731;            elem[73].density = 16.654;
        elem[74].meltp = 3695;            elem[74].boilp = 5828;            elem[74].density = 19.25;
        elem[75].meltp = 3459;            elem[75].boilp = 5869;            elem[75].density = 21.02;
        elem[76].meltp = 3306;            elem[76].boilp = 5285;            elem[76].density = 22.61;
        elem[77].meltp = 2719;            elem[77].boilp = 4701;            elem[77].density = 22.56;
        elem[78].meltp = 2041.4;          elem[78].boilp = 4098;            elem[78].density = 21.46;
        elem[79].meltp = 1337.33;         elem[79].boilp = 3129;            elem[79].density = 19.282;
        elem[80].meltp = 234.43;          elem[80].boilp = 629.88;          elem[80].density = 13.5336;
        elem[81].meltp = 577;             elem[81].boilp = 1746;            elem[81].density = 11.85;
        elem[82].meltp = 600.61;          elem[82].boilp = 2022;            elem[82].density = 11.342;
        elem[83].meltp = 544.7;           elem[83].boilp = 1837;            elem[83].density = 9.807;
        elem[84].meltp = 527;             elem[84].boilp = 1235;            elem[84].density = 9.32;
        elem[85].meltp = 575;             elem[85].boilp = 610;             elem[85].density = 7;
        elem[86].meltp = 202;             elem[86].boilp = 211.3;           elem[86].density = 0.00973;
        elem[87].meltp = 300;             elem[87].boilp = 950;             elem[87].density = 1.87;
        elem[88].meltp = 973;             elem[88].boilp = 2010;            elem[88].density = 5.5;
        elem[89].meltp = 1323;            elem[89].boilp = 3471;            elem[89].density = 10.07;
        elem[90].meltp = 2115;            elem[90].boilp = 5061;            elem[90].density = 11.72;
        elem[91].meltp = 1841;            elem[91].boilp = 4300;            elem[91].density = 15.37;
        elem[92].meltp = 1405.3;          elem[92].boilp = 4404;            elem[92].density = 18.95;
        elem[93].meltp = 917;             elem[93].boilp = 4273;            elem[93].density = 20.45;
        elem[94].meltp = 912.5;           elem[94].boilp = 3501;            elem[94].density = 19.84;
        elem[95].meltp = 1449;            elem[95].boilp = 2880;            elem[95].density = 13.69;
        elem[96].meltp = 1613;            elem[96].boilp = 3383;            elem[96].density = 13.51;
        elem[97].meltp = 1259;            elem[97].boilp = 2900;            elem[97].density = 14.79;
        elem[98].meltp = 1173;            elem[98].boilp = 1743;            elem[98].density = 15.1;
        elem[99].meltp = 1133;            elem[99].boilp = 1269;            elem[99].density = 8.84;
        elem[100].meltp = 1125;           elem[100].boilp = 0;              elem[100].density = 0;
        elem[101].meltp = 1100;           elem[101].boilp = 0;              elem[101].density = 0;
        elem[102].meltp = 1100;           elem[102].boilp = 0;              elem[102].density = 0;
        elem[103].meltp = 1900;           elem[103].boilp = 0;              elem[103].density = 0;
        elem[104].meltp = 2400;           elem[104].boilp = 5800;           elem[104].density = 23.2;
        elem[105].meltp = 0;              elem[105].boilp = 0;              elem[105].density = 29.3;
        elem[106].meltp = 0;              elem[106].boilp = 0;              elem[106].density = 35.0;
        elem[107].meltp = 0;              elem[107].boilp = 0;              elem[107].density = 37.1;
        elem[108].meltp = 0;              elem[108].boilp = 0;              elem[108].density = 40.7;
        elem[109].meltp = 0;              elem[109].boilp = 0;              elem[109].density = 37.4;
        elem[110].meltp = 0;              elem[110].boilp = 0;              elem[110].density = 34.8;
        elem[111].meltp = 0;              elem[111].boilp = 0;              elem[111].density = 28.7;
        elem[112].meltp = 0;              elem[112].boilp = 357;            elem[112].density = 23.7;
        elem[113].meltp = 700;            elem[113].boilp = 1400;           elem[113].density = 16;
        elem[114].meltp = 340;            elem[114].boilp = 420;            elem[114].density = 14;
        elem[115].meltp = 670;            elem[115].boilp = 1400;           elem[115].density = 13.5;
        elem[116].meltp = 637;            elem[116].boilp = 1035;           elem[116].density = 12.9;
        elem[117].meltp = 623;            elem[117].boilp = 883;            elem[117].density = 7.3;
        elem[118].meltp = 0;              elem[114].boilp = 350;            elem[114].density = 5.1;
    }


    //Initializing origin of name.
    {
        strcpy_s(elem[1].origin, "the Greek 'hydro' and 'genes' meaning water-forming");
        strcpy_s(elem[2].origin, "the Greek 'helios' meaning sun");
        strcpy_s(elem[3].origin, "the Greek 'lithos' meaning stone");
        strcpy_s(elem[4].origin, "the Greek name for beryl, 'beryllo'");
        strcpy_s(elem[5].origin, "the Arabic 'buraq', which was the name for borax");
        strcpy_s(elem[6].origin, "the Latin 'carbo', meaning charcoal");
        strcpy_s(elem[7].origin, "the Greek 'nitron' and 'genes' meaning nitre-forming");
        strcpy_s(elem[8].origin, "the Greek 'oxy' and 'genes' meaning acid-forming");
        strcpy_s(elem[9].origin, "the Latin 'fluere', meaning to flow");
        strcpy_s(elem[10].origin, "the Greek 'neos', meaning new");
        strcpy_s(elem[11].origin, "the English word soda");
        strcpy_s(elem[12].origin, "Magnesia, a district of Eastern Thessaly in Greece");
        strcpy_s(elem[13].origin, "Magnesia, a district of Eastern Thessaly in Greece");
        strcpy_s(elem[14].origin, "the Latin 'silex' or 'silicis', meaning flint");
        strcpy_s(elem[15].origin, "the Greek 'phosphoros', meaning bringer of light");
        strcpy_s(elem[16].origin, "Either from the Sanskrit 'sulvere', or the Latin 'sulfurium', both names for sulfur");
        strcpy_s(elem[17].origin, "the Greek 'chloros', meaning greenish yellow");
        strcpy_s(elem[18].origin, "the Greek, 'argos', meaning idle");
        strcpy_s(elem[19].origin, "the English word potash");
        strcpy_s(elem[20].origin, "the Latin 'calx' meaning lime");
        strcpy_s(elem[21].origin, "Scandinavia");
        strcpy_s(elem[22].origin, "Titans, the sons of the Earth goddess of Greek mythology");
        strcpy_s(elem[23].origin, "Vanadis, an old Norse name for the Scandinavian goddess Freyja");
        strcpy_s(elem[24].origin, "the Greek 'chroma', meaning colour");
        strcpy_s(elem[25].origin, "from the black magnesium oxide, 'magnesia nigra'");
        strcpy_s(elem[26].origin, "the Anglo-Saxon name iren");
        strcpy_s(elem[27].origin, "the German word 'kobald', meaning goblin");
        strcpy_s(elem[28].origin, "the shortened of the German 'kupfernickel' meaning St. Nicholas's copper");
        strcpy_s(elem[29].origin, "derived from the Latin 'Cyprium aes', meaning a metal from Cyprus");
        strcpy_s(elem[30].origin, "the German, 'zinc', meaning stone");
        strcpy_s(elem[31].origin, "France");
        strcpy_s(elem[32].origin, "Germany");
        strcpy_s(elem[33].origin, "the Greek name 'arsenikon' for the yellow pigment orpiment");
        strcpy_s(elem[34].origin, "Moon");
        strcpy_s(elem[35].origin, "the Greek 'bromos' meaning stench");
        strcpy_s(elem[36].origin, "the Greek 'kryptos', meaning hidden");
        strcpy_s(elem[37].origin, "the Latin 'rubidius', meaning deepest red");
        strcpy_s(elem[38].origin, "Strontian, a small town in Scotland");
        strcpy_s(elem[39].origin, "Ytterby, Sweden");
        strcpy_s(elem[40].origin, "the Persian 'zargun', meaning gold coloured");
        strcpy_s(elem[41].origin, "Niobe, daughter of king Tantalus from Greek mythology");
        strcpy_s(elem[42].origin, "the Greek 'molybdos' meaning lead");
        strcpy_s(elem[43].origin, "the Greek 'tekhnetos' meaning artificial");
        strcpy_s(elem[44].origin, "Russia");
        strcpy_s(elem[45].origin, "the Greek 'rhodon', meaning rose coloured");
        strcpy_s(elem[46].origin, "the then recently-discovered asteroid Pallas, considered a planet at the time");
        strcpy_s(elem[47].origin, "the Anglo-Saxon name siolfur");
        strcpy_s(elem[48].origin, "the Latin name for the mineral calmine, 'cadmia'");
        strcpy_s(elem[49].origin, "the Latin 'indicium', meaning violet or indigo");
        strcpy_s(elem[50].origin, "the Anglo-Saxon word tin");
        strcpy_s(elem[51].origin, "the Greek 'anti – monos', meaning not alone");
        strcpy_s(elem[52].origin, "Earth, the third planet on solar system");
        strcpy_s(elem[53].origin, "the Greek 'iodes' meaning violet");
        strcpy_s(elem[54].origin, "the Greek 'xenos' meaning stranger");
        strcpy_s(elem[55].origin, "the Latin 'caesius', meaning sky blue");
        strcpy_s(elem[56].origin, "the Greek 'barys', meaning heavy");
        strcpy_s(elem[57].origin, "the Greek 'lanthanein', meaning to lie hidden");
        strcpy_s(elem[58].origin, "Ceres, the Roman God of agriculture");
        strcpy_s(elem[59].origin, "the Greek 'prasios didymos' meaning green twin");
        strcpy_s(elem[60].origin, "the Greek 'neos didymos' meaning new twin");
        strcpy_s(elem[61].origin, "Prometheus of Greek mythology who stole fire from the Gods and gave it to humans");
        strcpy_s(elem[62].origin, "Samarskite, the name of the mineral from which it was first isolated");
        strcpy_s(elem[63].origin, "Europe");
        strcpy_s(elem[64].origin, "Johan Gadolin, chemist, physicist and mineralogist");
        strcpy_s(elem[65].origin, "Ytterby, Sweden");
        strcpy_s(elem[66].origin, "the Greek 'dysprositos', meaning hard to get");
        strcpy_s(elem[67].origin, "Stockholm, Sweden");
        strcpy_s(elem[68].origin, "Ytterby, Sweden");
        strcpy_s(elem[69].origin, "Thule, the ancient name for Scandinavia");
        strcpy_s(elem[70].origin, "Ytterby, Sweden");
        strcpy_s(elem[71].origin, "Paris, France");
        strcpy_s(elem[72].origin, "Copenhagen, Denmark");
        strcpy_s(elem[73].origin, "King Tantalus, father of Niobe from Greek mythology");
        strcpy_s(elem[74].origin, "the Swedish 'tung sten' meaning heavy stone");
        strcpy_s(elem[75].origin, "Rhine, a river");
        strcpy_s(elem[76].origin, "the Greek 'osme', meaning smell");
        strcpy_s(elem[77].origin, "Iris, the Greek goddess of the rainbow");
        strcpy_s(elem[78].origin, "the Spanish 'platina', meaning little silver");
        strcpy_s(elem[79].origin, "the Anglo-Saxon word gold");
        strcpy_s(elem[80].origin, "Mercury, the first planet in the Solar System");
        strcpy_s(elem[81].origin, "the Greek 'thallos', meaning a green twig");
        strcpy_s(elem[82].origin, "the Anglo-Saxon lead");
        strcpy_s(elem[83].origin, "the German 'Bisemutum' a corruption of 'Weisse Masse' meaning white mass");
        strcpy_s(elem[84].origin, "Poland, the native country of Marie Curie, who first isolated the element");
        strcpy_s(elem[85].origin, "the Greek 'astatos', meaning unstable");
        strcpy_s(elem[86].origin, "From radium, as it was first detected as an emission from radium during radioactive decay");
        strcpy_s(elem[87].origin, "France, where it was first discovered");
        strcpy_s(elem[88].origin, "the Latin 'radius', meaning ray");
        strcpy_s(elem[89].origin, "the Greek 'actinos', meaning a ray");
        strcpy_s(elem[90].origin, "Thor, the Scandinavian god of thunder");
        strcpy_s(elem[91].origin, "the Greek 'protos', as a prefix to the element actinium");
        strcpy_s(elem[92].origin, "Uranus, the seventh planet in the Solar System");
        strcpy_s(elem[93].origin, "Neptune, the eighth planet in the Solar System");
        strcpy_s(elem[94].origin, "Pluto, a dwarf planet in the Solar System");
        strcpy_s(elem[95].origin, "Americas, the continent where the element was first synthesized");
        strcpy_s(elem[96].origin, "Pierre Curie, a physicist, and Marie Curie, a physicist and chemist");
        strcpy_s(elem[97].origin, "Berkeley, California, USA, where the element was first synthesized");
        strcpy_s(elem[98].origin, "State of California, USA, where the element was first synthesized");
        strcpy_s(elem[99].origin, "Albert Einstein, physicist");
        strcpy_s(elem[100].origin, "Enrico Fermi, physicist");
        strcpy_s(elem[101].origin, "Dmitri Mendeleyev, chemist and inventor");
        strcpy_s(elem[102].origin, "Alfred Nobel, chemist, engineer, innovator, and armaments manufacturer");
        strcpy_s(elem[103].origin, "Ernest O. Lawrence, physicist");
        strcpy_s(elem[104].origin, "Ernest Rutherford, chemist and physicist");
        strcpy_s(elem[105].origin, "Dubna, Russia");
        strcpy_s(elem[106].origin, "Glenn T. Seaborg, scientist");
        strcpy_s(elem[107].origin, "Hesse, Germany, where the element was first synthesized");
        strcpy_s(elem[108].origin, "Lise Meitner, physicist");
        strcpy_s(elem[109].origin, "Darmstadt, Germany, where the element was first synthesized");
        strcpy_s(elem[110].origin, "Wilhelm Conrad Röntgen, physicist");
        strcpy_s(elem[111].origin, "Nicolaus Copernicus, astronomer");
        strcpy_s(elem[112].origin, "IUPAC systematic element name");
        strcpy_s(elem[113].origin, "Georgy Flyorov, physicist");
        strcpy_s(elem[114].origin, "IUPAC systematic element name");
        strcpy_s(elem[115].origin, "Nicolaus Copernicus, astronomer");
        strcpy_s(elem[116].origin, "IUPAC systematic element name");
        strcpy_s(elem[117].origin, "Georgy Flyorov, physicist");
        strcpy_s(elem[118].origin, "IUPAC systematic element name");
    }


    //Initializing group number and block.
    {
        for (i = 1; i <= 118; ++i)
        {
            if (i == 1 || i == 3 || i == 11 || i == 19 || i == 37 || i == 55 || i == 87)
            {
                elem[i].group = 1;
                elem[i].block = 's';
            }
            else if (i == 4 || i == 12 || i == 20 || i == 38 || i == 56 || i == 88)
            {
                elem[i].group = 2;
                elem[i].block = 's';
            }
            else if (i == 21 || i == 39 || i == 57 || i == 89)
            {
                elem[i].group = 3;
                elem[i].block = 'd';
            }
            else if (i == 22 || i == 40 || i == 72 || i == 104)
            {
                elem[i].group = 4;
                elem[i].block = 'd';
            }
            else if (i == 23 || i == 41 || i == 73 || i == 105)
            {
                elem[i].group = 5;
                elem[i].block = 'd';
            }
            else if (i == 24 || i == 42 || i == 74 || i == 106)
            {
                elem[i].group = 6;
                elem[i].block = 'd';
            }
            else if (i == 25 || i == 43 || i == 75 || i == 107)
            {
                elem[i].group = 7;
                elem[i].block = 'd';
            }
            else if (i == 26 || i == 44 || i == 76 || i == 108)
            {
                elem[i].group = 8;
                elem[i].block = 'd';
            }
            else if (i == 27 || i == 45 || i == 77 || i == 109)
            {
                elem[i].group = 9;
                elem[i].block = 'd';
            }
            else if (i == 28 || i == 46 || i == 78 || i == 110)
            {
                elem[i].group = 10;
                elem[i].block = 'd';
            }
            else if (i == 29 || i == 47 || i == 79 || i == 111)
            {
                elem[i].group = 11;
                elem[i].block = 'd';
            }
            else if (i == 30 || i == 48 || i == 80 || i == 112)
            {
                elem[i].group = 12;
                elem[i].block = 'd';
            }
            else if (i == 5 || i == 13 || i == 31 || i == 49 || i == 81 || i == 113)
            {
                elem[i].group = 13;
                elem[i].block = 'p';
            }
            else if (i == 6 || i == 14 || i == 32 || i == 50 || i == 82 || i == 114)
            {
                elem[i].group = 14;
                elem[i].block = 'p';
            }
            else if (i == 7 || i == 15 || i == 33 || i == 51 || i == 83 || i == 115)
            {
                elem[i].group = 15;
                elem[i].block = 'p';
            }
            else if (i == 8 || i == 16 || i == 34 || i == 52 || i == 84 || i == 116)
            {
                elem[i].group = 16;
                elem[i].block = 'p';
            }
            else if (i == 9 || i == 17 || i == 35 || i == 53 || i == 85 || i == 117)
            {
                elem[i].group = 17;
                elem[i].block = 'p';
            }
            else if (i == 2 || i == 10 || i == 18 || i == 36 || i == 54 || i == 86 || i == 118)
            {
                elem[i].group = 18;
                elem[i].block = 'p';
            }

        }
        for (i = 57; i <= 71; ++i)
        {
            elem[i].block = 'f';
        }
        for (i = 89; i <= 103; ++i)
        {
            elem[i].block = 'f';
        }
    }


    //Initializing period number.
    {
        for (i = 1; i <= 2; ++i)
        {
            elem[i].period = 1;
        }
        for (i = 3; i <= 10; ++i)
        {
            elem[i].period = 2;
        }
        for (i = 11; i <= 18; ++i)
        {
            elem[i].period = 3;
        }
        for (i = 19; i <= 36; ++i)
        {
            elem[i].period = 4;
        }
        for (i = 37; i <= 54; ++i)
        {
            elem[i].period = 5;
        }
        for (i = 55; i <= 86; ++i)
        {
            elem[i].period = 6;
        }
        for (i = 87; i <= 118; ++i)
        {
            elem[i].period = 7;
        }
    }

    this->el = elem;
}

void AppState::updateInput(const float& dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		this->endState();
}

void AppState::updateButtons()
{
    std::map<std::pair<std::string, std::string>, Button*>::iterator it;
    for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
        it->second->update(this->mousePosView);
    }

    for (int i = 1; i <= 118; i++) {
        if (this->buttons[{"BOX_STATE", this->el[i].name}]->isPressed()) {
            this->states->push(new InfoState(this->window, this->states, this->el[i]));
        }
    }


    if (this->buttons[{"EXIT_STATE", ""}]->isPressed()) {
        this->endState();
    }
}

void AppState::update(const float& dt)
{
    this->updateMousePos(dt);
    this->updateInput(dt);
    this->updateButtons();
	
}

void AppState::render(sf::RenderTarget* target)
{
	if (!target)
		target = this->window;

    target->draw(this->background);
    this->renderButtons(target);


}

void AppState::renderButtons(sf::RenderTarget* target)
{
    std::map<std::pair<std::string, std::string>, Button*>::iterator it;
    for (it = this->buttons.begin(); it != this->buttons.end(); ++it) {
        it->second->render(target);
    }
}
