#include <iostream>
#include <ctime>
#include "Player.h"
#include "getInformation.cpp"
#include "createRandom.cpp"
#include "draw.cpp"
#include "clear.cpp"
#include "createNewFile.cpp"
#include "getUserInput.cpp"

using namespace std;

void startGame()
{
  string playerName = getInformation();
  Player player{playerName};

  int score = 0;
  int health = 3;
  while (health != 0)
  {

    int randomNumber = createRandomNumber();
    draw(randomNumber);
    cout << "Enter the fish index: ";
    int index = getUserInput(4);

    if (index == randomNumber)
    {
      score++;
    }
    else
    {
      health--;
    }

    Clear();
    if (score == 10)
    {
      cout << "Score: " << score << "\t"
           << "Health: " << health << endl;
      cout << "you Win the game!!!!" << endl;

      break;
    }
    else if (health == 0)
    {
      cout << "Score: " << score << "\t"
           << "Health: " << health << endl;
      cout << "you loose the game!!!" << endl;
      break;
    }
    else
    {
      cout << "Score: " << score << "\t"
           << "Health: " << health << endl;
    }
  }
  // string names = player.getName();
  // createNewFile(names, score);
}