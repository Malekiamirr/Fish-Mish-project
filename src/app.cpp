#include "SFML/Graphics.hpp"
#include <iostream>
#include "Player.cpp"
#include "draw.h"

int main()
{
	Player player;
	player.setName("Amir Maleki");
	cout << player.getName() << endl;
	draw(3);

	return 0;
}
// for (size_t column = 0; column < 8; column++)
// {
// 	cout << "-";
// }
// cout << endl;
// for (size_t row = 0; row < 6; row++)
// {
// 	cout << "-";
// 	for (size_t column = 0; column < 4; column++)
// 	{
// 		cout << " ";
// 	}
// 	cout << "-" << endl;
// }
// for (size_t column = 0; column < 8; column++)
// {
// 	cout << "-";
// }