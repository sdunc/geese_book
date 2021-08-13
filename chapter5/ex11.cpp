#include "std_lib_facilities.h"

// write a program that writtes out the first so many values of the
// Fibonacci series, that is, the series that starts with 1 1 2 3 5 8
// 13 21 34. The next number of the series is always the sum of the
// two previous ones. Find the largest fibonacci number that fits
// inside an int.

int fibonacci(int n)
{
  // return the nth fibonacci number starting with 1 1...
  if (n<=0) error("argument n in fibonacci() must be >=0.");
  int a = 0; // first fib number, the one which gets returned
  int b = 1; // second fib number
  int c = 0; // used to store next number

  for (int i=0; i<n; ++i)
    {
      c=a+b; // next fib number is the previous two added together
      a=b;
      b=c;
    }
  return a;
}

int main()
{
  int n;
  cout << "Enter n to get the nth fibonacci number: \n";
  cin>>n;

  for (int i=1; i<=n; ++i)
    cout << fibonacci(i) << ' ';
  // n=46 is the largest fib that we can fit in an int.
}
