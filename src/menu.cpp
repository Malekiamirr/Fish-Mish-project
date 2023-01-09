#include <iostream>
#include "clear.cpp"

using namespace std;

int menu()
{
  Clear();
  cout
      << endl
      << "---- Welcome to Fish-Mish game ----" << endl
      << endl
      << "choose between options below" << endl;
  cout << "1: Start new game" << endl;
  cout << "2: Help" << endl;
  cout << "3: Exit" << endl;
  cout << "Your choice: ";

  int choice;
  cin >> choice;

  // DEBUG : check number must be integer.
  // typeid(choice).name() == "i"

  while (choice < 1 || choice > 4)
  {
    Clear();

    cout << endl
         << "Wrong choice, pleace choose between options below" << endl;
    cout << "1: Start new game" << endl;
    cout << "2: Load game" << endl;
    cout << "3: Help" << endl;
    cout << "4: Exit" << endl;
    cout << "Your choice: ";
    cin >> choice;
  }

  return choice;
}