#include <iostream>
#include <cstdlib>
#include <time.h>

int createRandomNumber()
{
  int number = rand() % 9 + 1;
  return number;
}