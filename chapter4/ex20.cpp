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
  bool duplicate_entry {false}; // edit so all bools are false by
				// default for simplicity.
  bool name_found {false};
  string input_string;
  int input_int; // dumb names but I will tcheck the type.

  // input is terminated by the pair NoName 0
  // if duplicates are entered terminate the output
  while (!duplicate_entry && name != "NoName")
    {
      // check what type of input we are getting.
      if (cin>>input_string)
	{
	  // this is either a name lookup or a name entry.
	  // depending on whether or not an integer follows this.
	  if (cin>>input_int)
	    {
	      // we have entered string int pair
	      // add this to the vector of names if there are no duplicates
	      for (string maybe_dupe:names)
		{
		  if (maybe_dupe==name)
		    {
		      // we have entered a duplicate.  terminate with
		      // an error message if there are duplicate
		      // inputs
		      duplicate_entry = true;
		      cout << "Error! You have entered a duplicate name.\n";
		    }
		  else ; // keep looking.
		}
	      // now if the entry was not a dupe we add to the vector
	      if (!duplicate_entry)
		{
		  names.push_back(name); // we add the name score pair.
		  scores.push_back(score);
		}
	      else ; // there are dupes. Do nothing and loop will terminate.
	    }
	  else
	    { 
	      // input was not int, look up a name.
	      // we did not load a score properly. look the name up and
	      // see if there is an associated score to return.
	      // from the correponding position in the name array.
	      for (int name_look_index=0;name_look_index<names.size();++name_look_index)
		{
		  if (names[name_look_index]==name)
		    {
		      name_found = true; // set we found name flag.
		      cout << name << "'s score: " << scores[name_look_index] << '\n'; // we
										       // found
										       // the
										       // index
		      // where the name
		      // is. return the score
		      // associated.
		    }
		  else ; // keep searching.
		}
	      // check if name was found and return error if not found.
	      if (!name_found)
		{
		  //name_found = false;
		  cout << "name not found\n";
		}
	      else ; // we have already printed the score above.
	    }
	}
      else if (cin>>input_int) // is it an int. does this require re entry...
	{
	  for (int score_lookup_index=0;score_lookup_index<names.size();++score_lookup_index)
	    {
	      if (scores[score_lookup_index] == input_int) // entered score is found in
					 // scores vect, print
					 // associated name
		cout << names[score_lookup_index] << " has a score of " << input_int << '\n';
	      else ; // score does not equal what was entered to look up, keep looking.
	    }
	}
      else
	cout << "invalid input\n";
    }


  // the while loop has ended, print out all name, score pairs
  for (int i=0; i<names.size(); ++i)
    cout << names[i] << '\t' << scores[i] << '\n';
}
