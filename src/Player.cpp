#include "Player.h"

/////////////////////////Constructors and deconstructors//////////////////////////////////
Player::Player(float x, float y) {

    this->shape.setPosition(200, 200);
    this->initVariables();
    this->initShape();
}

Player::~Player() {
    
}

/////////////////////////Accessors////////////////////////////////////


/////////////////////////Modifiers////////////////////////////////////


/////////////////////////Functions////////////////////////////////////

void Player::initVariables() 
{
    this->movementSpeed = 10.f;
}

void Player::initShape() 
{
    this->shape.setFillColor(sf::Color::Green);
    this->shape.setSize(sf::Vector2f(50.f, 50.f));
}

void Player::update() 
{
    //Window bounse collision

    this->updateInput();

    //Ketboard input
   

}

void Player::render(sf::RenderTarget * target) 
{
    target->draw(this->shape);
}

void Player::updateInput() 
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        this->shape.move(-this->movementSpeed, 0.f);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        this->shape.move(this->movementSpeed, 0.f);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        this->shape.move(0.f, -this->movementSpeed);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        this->shape.move(0.f, this->movementSpeed);
    }

}
