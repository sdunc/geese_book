#include "std_lib_facilities.h"


// simple program to exercise operators
// int main () {
//   cout << "Please enter a floating-point value: ";
//   double n;
//   cin >> n;
//   cout << "n == " << n
//        << "\nn+1 == " << n+1
//        << "\nthree times n == " << 3*n
//        << "\ntwice n == " << n+n
//        << "\nn squared == " << n*n
//        << "\nhalf of n == " << n/2
//        << "\nsquare root of n == " << sqrt(n)
//        << '\n';
// }


int main() {
  cout << "Enter an int: ";
  int n;
  cin >> n;
  cout << "n ==" << n
       << "\nthree times n == " << 3*n
       << "\ntwice n == " << n+n
       << "\nn squared == " << n*n
       << "\nhalf of n == " << n/2
       << "\nsquare root of n == " << sqrt(n)
       << "\nn mod 3 == " << n % 3
       << '\n';
}
