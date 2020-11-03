#include "player.h"

Player::Player()
{
    this->_Texture.loadFromFile("Player.png");
    if (this->_Texture.loadFromFile("Player.png"))
        std::cout<<"Img error";

    this->_Sprite.setTexture(_Texture);

    float x = 500;
    float y = 500;

    this->_Sprite.setPosition(x, y);
    
    this->_Position = {x,y};
}


void Player::moving(sf::Vector2f _Position ){
    this->_Position.x += _Position.x;
    this->_Position.y += _Position.y;

    this->_Sprite.setPosition(this->_Position );
}
