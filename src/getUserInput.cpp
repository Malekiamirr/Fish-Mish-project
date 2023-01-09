#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <iostream>
#include <conio.h>
#include <future>
using namespace std;

int getUserInput(double time)
{
  auto startClock = (double)clock();
  while (((double)clock() - startClock) / CLOCKS_PER_SEC < time)
  {
    if (_kbhit())
    {
      char ch = _getch();
      if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
      {
        return ch - '0';
      }
    }
  }
  return 0;
}