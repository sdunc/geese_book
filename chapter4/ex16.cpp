#include "std_lib_facilities.h"

// Create a program that finds the mode of a set of positive integers

int mode(vector<int> numbers)
{
  int current_max_number;
  int current_max_count;
  // return the mode of a vector of numbers the mode is the value that
  // is repeated the most amout of times.

  // we go through each index of the list and count all the occurances of that number
  for (int i = 0; i<numbers.size(); ++i)
    {
      int current_number = numbers[i];
      int count {0};
      // for each number add to count if 
      for (int n : numbers)
	if (n == current_number)
	  ++count;
	else ;
      if (count > current_max_count)
	{
	  current_max_count = count;
	  current_max_number = current_number;
	}
    }
  return current_max_number;
}

int main()
{
  // get a vector fillled with numberrs to find the mode of
  vector<int> number_set;
  cout << "Enter space delimited numbers terminated with a |\n";
  for (int x; cin>>x;)
    number_set.push_back(x);

  cout << mode(number_set) << '\n';
}
