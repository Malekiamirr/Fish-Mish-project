#include "SFML/Graphics.hpp"
#include <iostream>
#include "Player.cpp"

int main()
{
	Player player;
	player.setName("Amir Maleki");
	cout << player.getName();
	return 0;
}