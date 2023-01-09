#include <iostream>
#include <fstream>

using namespace std;

void createNewFile(string name, int scores)
{
  fstream file;
  file.open("file.txt", ios::app);
  if (!file.is_open())
  {
    cout << "Something went wrong" << endl;
  }
  else
  {
    file << "Name: " << name << "\t"
         << "Score: " << scores << endl;
  }
}