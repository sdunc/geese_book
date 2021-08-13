#include "std_lib_facilities.h"

double quadratic(double a, double b, double c)
{
  // prints the roots to a quadratic equation given coeffients a b and c
  // y = a*x**2 + b*x + c
  // lets test input
  double x1, x2; // roots

 if ((b*b - 4*a*c)<0) error("no real roots\n");
  else if ((b*b - 4*a*c)==0) // 1 root
    {
      x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
      cout << "single root @ (" << x1 << ",0).\n";
    }
  else // two roots
    {
      x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
      x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
      cout << "two roots @ (" << x1 << ",0), (" << x2 << ",0).\n";
    }
  return 0;
} 

int main()
  try {
    double a, b, c;
    cout << "Enter a b c\n";
	    cin>>a>>b>>c;
    quadratic(a,b,c);
  }

  catch (...) {
    cout << "exception, unreal roots!";
  }
    
    
