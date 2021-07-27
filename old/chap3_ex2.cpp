#include "std_lib_facilities.h"

int main()
{
  cout << "Enter a distance in miles: ";
  double distance_mi;
  cin >> distance_mi;
  cout << "That is " << distance_mi * 1.609 << " kilometers.\n";
}
