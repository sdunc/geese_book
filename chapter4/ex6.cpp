#include "std_lib_facilities.h"

// Make a vector holding the ten string values "zero" ... "nine" Use
// that in a program that converts a digit to its corresponding
// spelled-out value. input 7 -> "seven" Have the same program work in
// reverse as well. Inputting "seven" gives the output 7

int char2int(char c)
{
  return (int(c)-48);
}
    


int main()
{
  vector<string> num_string_vector
    = {"zero","one","two","three","four","five","six","seven","eight","nine"};

  // if the user enters a number that is the index which to get from
  // num_string_vector if the user enters a string, start a counter
  // and find the string in the vector, returning that number (index)
  // we have reached

  // the question becomes how do we determine if the input that we get is number or string?
  // We will need to reach in as a string and find out from there.

  for (string number_input; cin>>number_input;)
    {
      int length_of_input = number_input.size();
      if (length_of_input == 1)
	{
	  // this is an int
	  // int index = int(number_input[0]); // char -> int
	  cout << num_string_vector[char2int(number_input[0])] << '\n';
	}
      else
	{
	  // a word
	  int counter {0}; // start counting
	  for (string s : num_string_vector) {
	    if (number_input == s)
	      cout << counter << '\n';
	    else
	      ++counter;
	  }
	}
    }
}








