#include "std_lib_facilities.h"

// there is an old story that the emperor wanted to thank the inventor
// of the game of chess and asked the inventor to name his reward. The
// inventor asked for one grain of rice tfor the first square, two for
// the secod, 4 for the third and so on, doubling for each of the 64
// squares. That may sound modest, but there wasn't wnough rice in the
// empire! Write a program to calculate how many squares are required
// to give the inventor at least 1000 grains of rice, At least
// 1,000,000 grains of rice, and at least 1,000,000,000 grains of
// rice. You'll need a loop an probably an int to keep track of whch
// square you are at, n int to keep track of the numbner of grains on
// the current square and an into to keep track of the grains on all
// previous squares. We suggest that you write out each value of all
// the variables each iteration


int exp(int x, int y)
{
  // returns x**y, or y number of x's multiplied together
  int p {1};
  for (int i=0; i<y; ++i) // 0, 1, 2, ... , y-1
    p*=x;
  return p;
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
int main()
{
  cout << "Squares needed for 1,000 grains of rice: " << n_doubles_before_gt(1000) << '\n';
  cout << "Squares needed for 1,000,000 grains of rice: " << n_doubles_before_gt(1000000) << '\n';
  cout << "Squares needed for 1,000,000,000 grains of rice: " << n_doubles_before_gt(1000000000) << '\n';
}


