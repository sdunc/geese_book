#include "std_lib_facilities.h"

// write a program to solve quadratic equations.
// a quadratic equation is of the form: ax^2 + bx + c = 0


vector<double> quadratic_formula(double a, double b, double c)
{
  vector<double> solutions;
  double x1, x2, d;
  // lets first check and see how many roots there are going to be.
  // we do this using the discriminant: b^2 - 4ac = d
  d = (b*b) - (4*a*c);
  if (d > 0)
    {
      // there will be 2 real roots, calculate both of them
      d = sqrt(d); // since d is positive we can calc the sqrt
      x1 = (-b + d) / 2*a; // since d is already calculated we can do dis
      x2 = (-b - d) / 2*a;
      solutions.push_back(x1);
      solutions.push_back(0);
      solutions.push_back(x2);
      solutions.push_back(0);
      return solutions;
    }
  else if (d == 0)
    {
      // there is a single (repeated) real root
      // for trivia: this happens when the vertex is on the x axis
      // x1 will equal x2 so we need only calculate one of them
      x1 = -b / 2*a; // since d == 0 we simplify to this
      solutions.push_back(x1);
      solutions.push_back(0);
      solutions.push_back(x1);
      solutions.push_back(0);
      return solutions;
    }
  else
    {
      // we know that there will be two unreal roots.
      d*=-1; // make d positive (factoring out i)
      d = sqrt(d); // since d is positive we can calc the sqrt
      x1 = (-b + d) / 2*a; // since d is already calculated we can do dis
      x2 = (-b - d) / 2*a;
      solutions.push_back(x1);
      solutions.push_back(1); // + 1i
      solutions.push_back(x2);
      solutions.push_back(1);
      return solutions;
    } 
}

int main()
{
  double a,b,c;
  cout << "Enter coefficents a b c: ";
  cin>>a>>b>>c;
  cout << "calculating quad formula...\n";
  vector<double> roots;
  roots = quadratic_formula(a,b,c);
  for (double f: roots)
    {
      cout << f << '\n';
    }
}
