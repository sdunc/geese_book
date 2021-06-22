#include "std_lib_facilities.h"

int main()
{
  int i1, i2, i3;
  cout << "Enter three integers: ";
  cin >> i1 >> i2 >> i3;

  // with 3 numbers I need to do 2-3 conditional checks?

  if (i1 < i2)
    if (i1 < i3)
      if (i2 < i3)
	cout << i1 << ", " << i2 << ", " << i3 << "\n";
      else
	cout << i1 << ", " << i3 << ", " << i2 << "\n";
    else
      cout << i3 << ", " << i1 << ", " << i2 << "\n";
  else
    if (i2 < i3)
      if (i1 < i3)
	cout << i2 << ", " << i1 << ", " << i3 << "\n";
      else
	cout << i2 << ", " << i3 << ", " << i1 << "\n";
    else
      cout << i3 << ", " << i2 << ", " << i1 << "\n";
}
