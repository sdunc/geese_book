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
  bool name_found {false};
  
  // input is terminated by the pair NoName 0
  // if duplicates are entered terminate the output
  for (string name; cin>>name && name != "NoName" && no_dupes;)
    {
      if (cin>>score)
	{
	  // if we also got a score passed to us we want to add an entry
	  // first we need to check if the name has been added already
	  for (string s: names)
	    {
	      if (s == name)
		no_dupes = false;
	      else ;
	    }
	  if (no_dupes

	}
      else
	{
	  // 
	}
    }
  cout << "WOW";

  while (name != "NoName" && no_dupes)
    {
      // for exercise 20 if we enter a single name the program must
      // output the corresponding score or Name not found!
      name_found = false; // reset name find flag 
      cin>>name; // read a string into name
      if (cin>>score) // if input is a int we have entered a pair: name score this score should be added to the dictionary a
	{
	  // we need to check our vectors names and scores to ensure that
	  for (string n : names)
	  if (no_dupes)
	    {
	      names.push_back(name);
	      scores.push_back(score);
	    }
	  else
	    cout << "You have entered a duplicate name: " << name << '\n';
	}
      else // you have not entered a score, look up a name.
	{
	  for (int i=0; i<names.size(); ++i)
	    {
	      if (names[i] == name)
		{
		  cout << scores[i]; // return the associated score
		  name_found = true;
		}
	      else ;
	    }
	  if (!name_found)
	    cout << "Name not found!\n";
	  else ; // score already has been printed
	}
    }
  
  // the while loop has ended, print out all name, score pairs
  for (int i=0; i<names.size(); ++i)
      cout << names[i] << '\t' << scores[i] << '\n';
}



