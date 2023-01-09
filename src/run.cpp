#include <iostream>
#include "menu.cpp"
#include "startGame.cpp"
#include "help.cpp"
#include "clear.cpp"
using namespace std;

void run()
{
  int choice = menu();
  Clear();

  switch (choice)
  {
  case 1:
    startGame();
    break;

  case 2:
    help();
    break;

  case 3:
    break;

  default:
    break;
  }
}