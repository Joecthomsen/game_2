#include "Player.h"

class Game
{
private:

    //Window
    sf::VideoMode videoMode;
    sf::RenderWindow * window;
    bool endGame;

    //Pool event
    sf::Event windowEvent;

    //Functions
    void initVariables();
    void initWindow();

    Player player;

public:
    //Constructors and deconstructors
    Game();
    ~Game();

    //Accessors

    //Modifiers

    //Functions
    void update();
    void render();
    bool const running(); 
    void poolevent();

};