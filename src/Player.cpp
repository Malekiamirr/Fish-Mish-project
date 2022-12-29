#include "Player.h"
#include <iostream>
using namespace std;

Player::Player()
{
}

string Player::getName()
{

  return this->name;
}

void Player::setName(string name)
{
  this->name = name;
}
