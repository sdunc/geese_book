#include "std_lib_facilities.h"

int main()
{
  int a = 20000;
  char c = a; // try to squeeze a large int into a small char
  int b = c;  // convert back to an int
  // b = 32. The ' ' spc character
  if (a != b)
    cout << "oops!: " << a << "!=" << b << '\n';
    else
    cout << "Wow! We have large characters\n";
}
