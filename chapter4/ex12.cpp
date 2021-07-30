#include "std_lib_facilities.h"

// create a program to find all the prime numbers between 1 and
// 100. One way to do this is to write a function that will check if a
// number is prime (i.e., see if the number can be divided by a prime
// number smaller than itself) using a vector of primes in order (so
// that if the vector is called primes, primes[0]==2, primes[1]==3,
// primes[2]==5, etc.). Then write a loop that goes from 1 to 100,
// checks each number to see if it is prime, and stores each prime
// found in a vector. Write another loop that lists the primes you
// found. You might cchecl your results by comparing your vector of
// prime numbers found with primes. Consider 2 the first prime.

// this exercise is quite weird, the method proposed to find primes
// seems to require the list?

bool is_prime(int n, vector<int> prime_vector)
{
  for (int i : prime_vector)
    {
      if ((n!=i && n%i == 0) || n < 2)
	return false;
      else ;
    }
    return true;
}

vector<int> get_primes(int n)
{
  // return all the primes from 1 to the argument n
  vector<int> primes
    = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,
    41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  for(int i=1; i<n+1; ++i)
    if (is_prime(i,primes))
      found_primes.push_back(i);

int main()
{
  vector<int> found_primes;
  vector<int> primes = {2,3,5};

  // 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
  // 61, 67, 71, 73, 79, 83, 89, 97 are the primes below 100.
  for (int i=1; i<101; ++i)
    if (is_prime(i,primes))
      found_primes.push_back(i);
    else
      cout << i << " is not prime!\n";

  for (int i : found_primes)
    cout << i << ' ';

}
