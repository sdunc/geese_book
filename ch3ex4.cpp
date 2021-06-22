#include "std_lib_facilities.h"

int main()
{
  int val1, val2;
  // we cal initialize both of these on the same line!
  // int val1;
  // int val2;
  cout << "Enter two integers: \n";
  cin >> val1;
  cin >> val2;
  cout << val1 << ' ' << val2 << '\n';

  int val_sum = val1 + val2;
  int val_difference = val1 - val2;
  int val_product = val1 * val2;
  // double val_ratio = val1 / val2;
  double val_ratio;
  double val1_d = val1;
  double val2_d = val2;
  val_ratio = val1_d / val2_d;
  
  if (val1 > val2)
    cout << "Val1 (" << val1 << ") is larger and Val2 (" << val2 << ") is smaller.\n";
  else
    cout << "Val2 (" << val2 << ") is larger and Val1 (" << val1 << ") is smaller.\n";

  cout << "The sum is: " << val_sum << "\n"
       << "The difference is: " << val_difference << "\n"
       << "The product is: " << val_product << "\n"
       << "The ratio is: " << val_ratio << ".\n";
  
}
