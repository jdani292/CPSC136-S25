#include <iostream>
#include "clockType.h"
using namespace std;

int main()
{
  clockType c;
  c.setTime(8, 30, 0);
  c.printTime();
  cout << endl;
  c.incrementHours();
  c.printTime();
  cout << endl;

}
