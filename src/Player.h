#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>

class Player
{
private:
    sf::RectangleShape shape;

    void initVariables();
    void initShape();

    float movementSpeed;

public:
    Player(float x = 0.f, float y = 0.f);
    virtual ~Player();

    //Functions
    void updateInput();
    void update();
    void render(sf::RenderTarget * target);


};