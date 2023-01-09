#include <iostream>
#include <math.h>
#include "Control.h"

using namespace std;

void Control::draw()
{
  int count = sqrt(this->ncl);

  cout
      << "    1   2   3  \n";
  cout << "  +---+---+---+\n";
  int num = 1;
  for (int i = 1; i <= count; i++)
  {
    cout << i << " ";
    for (int j = i; j < i + count; j++)
    {
      if (num == this->fish)
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