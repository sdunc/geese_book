#include "std_lib_facilities.h"

// write a program where you first enter a set of names and value
// pairs such as joe 17 and barbara 22. For each pair add the name to
// a vector called names and the number too a vector called scores. In
// corresponding poistions. Terminate input with NoName 0. Check that
// each name is unique and termninae with an error messgae if a name
// is entered twice. EWritew out all the name score pairs, one per
// line.

int main()
{
  vector<string> names;
  vector<int> scores;
  string name;
  int score;
  bool no_dupes {true};
  
  // input is terminated by the pair NoName 0
  // so when we detect that input we break the while loop.
  // if someone enters a duplicate name the no_dupes flag is flipped and
  // the loop will terminate
  // instead of having to check for both NoName and score of 0
  // since we cannot repeat names no one would be able to use the name NoName
  while (name != "NoName" && no_dupes)
    {
      cin>>name>>score;
      // we need to check our vectors names and scores to ensure that
      for (string n : names)
	{
	  if (n == name)
	    no_dupes = false;
	  else ;
	}
      if (no_dupes)
	{
	  names.push_back(name);
	  scores.push_back(score);
	}
      else
	  cout << "You have entered a duplicate name: " << name << '\n';
    }
  // the while loop has ended, print out all name, score pairs
  for (int i=0; i<names.size(); ++i)
      cout << names[i] << '\t' << scores[i] << '\n';
}
