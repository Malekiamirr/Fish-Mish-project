#include <iostream>
#include <string.h>

using namespace std;

string getInformation()
{
  cout << "Write your name: ";
  string name;
  getline(cin >> ws, name);
  return name;
}