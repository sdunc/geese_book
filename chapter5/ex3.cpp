#include "std_lib_facilities.h"

// exercise 2 thr following program takes in a temp in Celsius and converts it to Kelvin. this code has many erors in it. Find the errors, list them, and correct the code.

double ctok(double c)
{
  // c needs to be valid
  constexpr double k_offset = 273.15;
  if (c+k_offset < 0) error("Error ctok() argument below absolute zero!\n");
  double k = c + 273.15;
  return k;
}

int main()
// try
{
  double c = 0;
  cin >> c;
  double k = ctok(c);
  if (k < 0) error("k is less than 0!");
  cout << k << '\n';
  return 0; 
}

// catch (...) {
//     cout << "AGGG";
//     return 1;
//  }
