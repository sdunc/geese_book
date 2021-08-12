#include "std_lib_facilities.h"

// convert c to f and f to c temps

double ctof(double c)
{
  // f = (9/5) *c + 32
  constexpr double conversion_factor = (9/5.0); //
  constexpr int b = 32; // constant offset
  double f = c*conversion_factor + b;
  // check if f is reasonable
  return f;
}

double ftoc(double f)
{
  constexpr double conversion_factor = (9/5.0); 
  constexpr int b = 32; // constant offset
  
  double c = (f-b)/conversion_factor;
  // check if c is reasonable
  return c;
}

int main()
{
  double temp;
  char unit;
  cout << "Enter a temp followed by a char (c or f) which indicates the unit:\n";
  cin>>temp>>unit;
  switch (unit) {
  case 'c':
    cout << ctof(temp) << " Degrees fahrenheit\n";
    break;
  case 'f':
    cout << ftoc(temp) << " Degrees celsius\n";
    break;
  default:
    cout << unit << " is not a recognized unit\n";
    break;
  }
}
