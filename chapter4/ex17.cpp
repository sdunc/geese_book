#include "std_lib_facilities.h"

// Create a program that finds the min, max, and mode of a sequence of strings

string mode(vector<string> string_vector)
{
  // iterate through string_vector and remove all occurances of the
  // same string adding each occurance to a counter. The counter is
  // stored in one vector and the associated string is placed into
  // another vector at the same index. Ideally I could use a hashmap
  // or something here? but is ok.

  vector<string> counted_strings;
  vector<int> string_count;

  
  for (string s: string_vector)
    {
      int index {0}; // index for the inner loop so I know where to inc the counter
      bool new_word {true}; // is the current string s new?
      for (string s2 : counted_strings)
	{
	  if (s == s2)
	    {
	      new_word = false;
	      ++string_count[index]; // we have found another
				     // occurance of the same string
				     // s1, increment the counter for
				     // that string in the index of
				     // string_count
	    }
	  else
	    {
	      // strings are not equal
	      ++index; // maybe the next value in counted_strings is equal to s?
	    }
	}
      // we have gone through all the counted_strings. If it is still
      // a new word, we need to add that to the counted_strings vector
      // with a count of 1
      if (new_word)
	{
	  counted_strings.push_back(s); // add new string s to counted_strings vect
	  string_count.push_back(1); // we have counted 1 of this new string so far
	}
      else ; // not a new word, we do not need to add
    }

  int highest_count {0};
  int highest_index {0};
  int current_index {0};
  for (int c : string_count)
    {
      if (c > highest_count)
	{
	  highest_count = c; // update to reflect the new highest count found
	  highest_index = current_index; // highest count was found at this index
	  ++current_index; // go to next val
	}
      else
	++current_index; // go to next index and see if it is higher than current highest
    }
  return counted_strings[highest_index];
}

string min(vector<string> string_vect)
{
  // start by assuming the min string is the first in the vector
  string current_min_string {string_vect[0]};
  for (int i=1; i<(string_vect.size()); ++i)
    {
      if (string_vect[i]<current_min_string)
	current_min_string = string_vect[i];
      else ; // not less
    }
  return current_min_string;
}

string max(vector<string> string_vect)
{
  string current_max_string {string_vect[0]};
  for (int i=1; i<(string_vect.size()); ++i)
    {
      if (string_vect[i]>current_max_string)
	current_max_string = string_vect[i];
      else ; // not less
    }
  return current_max_string;
}


int main()
{
  
  vector<string> string_set;
  cout << "Enter space delimited words terminated with a |\n";
  for (string x; cin>>x;)
    {
      string_set.push_back(x);
    }
  cout << mode(string_set) << '\n';
  cout << min(string_set) << '\n';
  cout << max(string_set) << '\n';  
}
