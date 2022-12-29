#include <iostream>
using namespace std;

void draw(int index)
{

  cout << "    1   2   3  \n";
  cout << "  +---+---+---+\n";
  int num = 1;
  for (int i = 1; i <= 3; i++)
  {
    cout << i << " ";
    for (int j = i; j < i + 3; j++)
    {
      if (num == index)
        cout << "| "
             << "*"
             << " ";
      else
        cout << "| " << num << " ";

      num++;
    }
    cout << "|";
    cout << '\n';
    cout << "  +---+---+---+\n";
  }
}