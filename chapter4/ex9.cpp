#include "std_lib_facilities.h"

// try to calculate the number of rice grains that the inventor asked
// for in exercise 8. You'll find that the number is so large that it
// won't fit in an int or a double observe what happens when the
// numbre gets too large to represent exactly as an int and as a
// double. what is the largest number of squares for ehich you can
// calculate the exact number of grains (using an int) what is the
// largest number of squares for a double?

int exp(int x, int y)
{
  // returns x**y, or y number of x's multiplied together
  int p {1};
  for (int i=0; i<y; ++i) // 0, 1, 2, ... , y-1
    p*=x;
  return p;
}

int log(int a, int b)
{
  // return log a base b
  // I do not trust this function...
  int l {0};
  while (a > 1)
    {
      ++l;
      a/=b;
    }
  return l;
}

int n_doubles_before_gt(int n)
{
  // return the number of times we must double, starting from 1.
  // before we are GreaterThan gt the int n passed to this function
  int current_square {0}; // 1 grain of rice on square 1
  int grains_on_previous_squares {0}; // counter for the number of grains we have already got
  int grains_on_current_square {1}; // 2^0 == 1, initialize to this
  // number of grains on the current square is equal to 2^current_square
  // we will calculate this each time during the loop.

  while ((grains_on_previous_squares+grains_on_current_square) < n)
    {
      // add the current square to the past squares
      // as we are about to step to the next square
      grains_on_previous_squares+=grains_on_current_square;
      // now step to the next square
      ++current_square; // go to the next square
      // now calcuate the new amount of rice grains on this square
      grains_on_current_square = exp(2, current_square);

      // now print them out for bugfixing
      // cout << "current square: " << current_square << '\n'
      // 	   << "grains on previous squares: " << grains_on_previous_squares << '\n'
      // 	   << "grains on current square: " << grains_on_current_square << '\n';
      
    }
  return current_square;
}

double max_safe_rice_from_n_squares(int n)
{
  double total_rice {0.0};
  double safe_rice {0.0};

  for (int i=0; i<n; ++i)
    {
      total_rice+= exp(2, i);
      if (total_rice > 0)
	safe_rice = total_rice;
      else
	return safe_rice;
    }
  return total_rice;
}

int rice_from_n_squares(int n)
{
  // return the amount of rice starting from 1 grain on square zero
  // and doubing each square so that the number of grains of rice on
  // the nth square on the interval [0,63] is equal to 2^n.  given an
  // integer n representing a square on the interval above, return the
  // amount of grains of rice up to and including that square.
  int total_rice {0}; // how much rice we have collected so far
  int current_square {0}; // where are we [0,63]
  int safe_total {0}; // a total which we save when we have ensured
		      // that it has not overflowed
  
  // for each square [0, n), calculate how much rice is on the square and add
  // it to our total.
  for (int i=0; i<n; ++i)
    {
      total_rice += exp(2,i);
      if (total_rice > 0)
	safe_total = total_rice;
      else
	return safe_total; // if total_rice has overflowed in this
			  // loop, return the last value
    }
  return total_rice;
}

int main()
{
  cout << "The integer number of rice grains on a 64 square chess board: "
       <<  rice_from_n_squares(64) << '\n';
  //  cout << "log_2 (16) == 4: " << log(16, 2) << '\n';
  cout << "The largest n square we can calculate using an int is: "
       << log(rice_from_n_squares(64), 2) << '\n';
  cout << "The largest n squares we can calcuate using a double is: "
       << log(max_safe_rice_from_n_squares(64), 2) << '\n';
}
