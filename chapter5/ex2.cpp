#include "std_lib_facilities.h"

// exercise 2 thr following program takes in a temp in Celsius and converts it to Kelvin. this code has many erors in it. Find the errors, list them, and correct the code.

double ctok(double c)
{
  double k = c + 273.15;
  return k;
}

int main()
{
  double c = 0;
  cin >> c;
  double k = ctok(c);
  cout << k << '\n';
}
