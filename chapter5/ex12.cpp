#include "std_lib_facilities.h"

// Implement a little guessing gameed called (for some obscure reason)
// "Bulls and Cows" The program has a vector of four different
// integers in the range of 0 to 9 (e.g., 1234 but not 1122) and it is
// the user's task to discover those numbers by repeated guesses. Say
// the number to be guessed is 1234 and the user guesses 1359; the
// response should be "1 bull and 1 cow" because the use got 1 digit
// right and in the correct location and 1 digit correct but in the
// wrong location (cow). The game continues until the player has 4
// bulls.

bool contains(vector<int> ints, int i)
{
  if (ints.size()==0) error("empty array of ints contains()");
  for (int x: ints)
    if (x==i) return true;
  return false;
}

int main()
{
  vector<int> bandc = {1,2,3,4};
  int bulls = 0;
  int cows = 0;
  bool four_bulls = false;
  int guess;

  while (!four_bulls)// until we have 4 bulls keep looping
    {
      // reset guess and number of bulls and cows
      int bulls = 0;
      int cows = 0;
      vector<int> guesses; // fresh and empty vector
      for (int i=0; i<4; ++i)
	{
	  cout << "Enter guess " << i+1 << "/4 for Bulls and Cows: ";
	  cin>>guess;
	  if (!cin) error("was not able to read guess input\n");
	  guesses.push_back(guess);
	}
      if (guesses.size() < 4) error("guesses vector is not long enough!");
      
      for (int i=0; i<bandc.size(); ++i)
	{
	  // for each element of the bandc array we see if our array
	  // matches at the same location (a bull) or has the same
	  // number elsewhere (a cow)
	  for (int j=0; j<guesses.size(); ++j)
	    {
	      if (i==j && bandc[i]==guesses[j]) bulls+=1;
	      else if (bandc[i]==guesses[j]) cows+=1;
	      else ; // not a bull or a cow
	    }
	}
      cout << "You entered ";
      for (int guess : guesses)
	cout << guess;
      cout << '\n';
      
      cout << "You got " << bulls << " bulls and " << cows << " cows.\n";
      if (bulls==4) four_bulls=true;
    }
}
          
