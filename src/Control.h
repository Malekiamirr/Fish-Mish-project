#ifndef CONTROL_H
#define CONTROL_H
#include <stdlib.h>

class Control
{
private:
  int fish;
  int ncl;
  int createRandomNumber()
  {
    int number = rand() % 9 + 1;
    return number;
  }

public:
  Control(int a);
  void draw();
};

#endif // !