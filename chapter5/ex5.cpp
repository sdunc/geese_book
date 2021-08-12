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

double ktoc(double k)
{
  // k>=0
  constexpr double k_offset = 273.15;
  if (k < 0) error("Error ktoc() argument below absolute zero!\n");
  double c = k - k_offset;
  return c;
}


int main()
// try
{
  double c = 0;
  cin >> c;
  double k = ctok(c);
  cout << k << "deg kelvin\n";
  double c2 = ktoc(c);
  cout << c2 << "deg celsius\n";
  
  return 0; 
}

// catch (...) {
//     cout << "AGGG";
//     return 1;
//  }
