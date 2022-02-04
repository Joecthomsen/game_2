#include "Game.h"

/////////////////////////Constructors and deconstructors////////////////////////////////////
Game::Game() 
{
    this->initVariables();
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
}



/////////////////////////Accessors////////////////////////////////////

/////////////////////////Modifiers////////////////////////////////////


/////////////////////////Functions////////////////////////////////////

void Game::initVariables() 
{
    
}

void Game::initWindow() 
{
    this->videoMode = sf::VideoMode(800, 800);
    this->window = new sf::RenderWindow(this->videoMode, "Pick_up_Balls", sf::Style::Titlebar | sf::Style::Close);
    this->window->setFramerateLimit(60);
}


void Game::update() 
{
    this->poolevent();
    this->player.update();
}

void Game::render() 
{
    this->window->clear();

    this->player.render(this->window);

    this->window->display();
}

bool const Game::running() 
{
    return this->window->isOpen();
}


void Game::poolevent() 
{
    while (this->window->pollEvent(this->windowEvent))
    {
        switch (this->windowEvent.key.code)
        {
        case sf::Keyboard::Escape :
            this->window->close();
            break;

        default:
            break;
        }
    }
    
}
