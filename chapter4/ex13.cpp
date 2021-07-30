
#include "std_lib_facilities.h"
// create a program to find primes using the sieve of eratosthenes

int sqrt(int n)
{
  // return the ceiling of the square root of the integer passed to
  // the function
  double guess {1.0};
  double eps {0.001};

  while (abs(guess*guess-n) > eps)
    guess = (guess+(n/guess))/2;

  // to ensure that we do not miss anything, we return the int()+1.
  // for example sqrt(10) ~ 3.162, int(3.162) == 3. so 3+1?
  return (int(guess)+1);
}

double abs(double f)
{
  // return the absolute value of the double passed
  if (f < 0)
    return (f*-1);
  else
    return f;
}

vector<int> sieve_of_eratosthenes (int n)
{
  // the vector of integers which we want to sieve through let A be an
  // array of boolean values indexed from 2 to n. initially all set to
  // true.
  // we go from 0 to n so that our indicies will line up.
  // ex: A[0]=A[1] = not primes but A[2] == 2.
  vector<int> primes;
  vector<int> A;
  for (int i=0; i<=n; ++i)
    A.push_back(1);

  // // we need an upper limit for our search. This is sqrt(n).
  int factors_upper_limit {sqrt(n)};
  for (int i=2; i<=factors_upper_limit; ++i)
    if (A[i]==1) // this value is true.
      // cross out all multiples
      for (int j = i*i; j<=n; j+=i)
 	A[j] = 0; // set all multiples to false (not primes)
    else ;

  for (int i=2; i<A.size(); ++i)
    if (A[i])
      primes.push_back(i);
    else ;

  return primes;
}
  
int main()
{
  vector<int> primes;
  primes = sieve_of_eratosthenes(100);
  for (int i : primes)
    cout << i << ' ';
  cout << '\n';
}
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
// 61, 67, 71, 73, 79, 83, 89, 97
