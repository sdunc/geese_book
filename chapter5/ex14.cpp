#include "std_lib_facilities.h"

// Read (day-of-the-week,value) pairs from standard input. For
// example: Tuesday 23 Firday 56 Tuesday -3 Thursday 99 Collect all
// the values for each day of the week in a vector<int>. Write out the
// values in each vector. Ignore illegal days of the week such as
// Funday but accept common synonyms usych as Mon and monday. Write
// out the number of rejected values

bool contains(vector<string> vec, string s)
{
  // return true if vec contains int i
  for (string f: vec)
    if (s==f) return true;
  return false;
}

int vsum(vector<int> vec)
{
  // return the sum of an  entire vector
  int acc = 0;
  for (int x: vec)
    acc+=x;
  return acc;
}

int printsum_vector(vector<int> vec)
{
  int acc = 0;
  cout << "(";
  for (int x: vec)
    {
      acc+=x;
      cout << x << ' ';
    }
  cout << ") sum: ";
  return acc;
}

int main()
{
  int value;
  string day;
  int no_rejected_values = 0;
  vector<int> Monday;
  vector<string> Monday_synonyms = {"Mon", "monday", "M"};
  vector<int> Tuesday;
  vector<string> Tuesday_synonyms = {"Tue", "tuesday", "T"};
  vector<int> Wednesday;
  vector<string> Wednesday_synonyms = {"Wed", "wednesday", "W"};
  vector<int> Thursday;
  vector<string> Thursday_synonyms = {"Thurs", "thursday", "R"};
  vector<int> Friday;
  vector<string> Friday_synonyms = {"Fri", "friday", "F"};
  vector<int> Saturday;
  vector<string> Saturday_synonyms = {"Sat", "saturday"};
  vector<int> Sunday;
  vector<string> Sunday_synonyms = {"Sun", "sunday"};
  bool getting_input = true;
  bool valid_name = false;

  while (getting_input)
    {
      valid_name = false;
      if (cin>>day>>value)
	{
	  // while taking in day value pairs
	  // depending upon what day is, add value to a different vector
	  if (day=="Monday"||contains(Monday_synonyms,day)) {
	    Monday.push_back(value);
	    valid_name = true; }
	  if (day=="Tuesday"||contains(Tuesday_synonyms,day)) {
	    Tuesday.push_back(value);
	    valid_name = true; }
	  if (day=="Wednesday"||contains(Wednesday_synonyms,day)) {
	    Wednesday.push_back(value);
	    valid_name = true; }
	  if (day=="Thursday"||contains(Thursday_synonyms,day)) {
	    Thursday.push_back(value);
	    valid_name = true; }
	  if (day=="Friday"||contains(Friday_synonyms,day)) {
	    Friday.push_back(value);
	    valid_name = true; }
	  if (day=="Saturday"||contains(Saturday_synonyms,day)) {
	    Saturday.push_back(value);
	    valid_name = true; }
	  if (day=="Sunday"||contains(Sunday_synonyms,day)) {
	    Sunday.push_back(value);
	    valid_name = true; }
	  if (!valid_name) ++no_rejected_values;
	} // read in data and try to get good values
      else
	getting_input=false; // was not able to read in, end loop.
    }
  
  cout << "Monday array: " << printsum_vector(Monday) << '\n';
  cout << "Tuesday array: " << printsum_vector(Tuesday) << '\n';
  cout << "Wednesday array: " << printsum_vector(Wednesday) << '\n';
  cout << "Thursday array: " << printsum_vector(Thursday) << '\n';
  cout << "Friday array: " << printsum_vector(Friday) << '\n';
  cout << "Saturday array: " << printsum_vector(Saturday) << '\n';
  cout << "Sunday array: " << printsum_vector(Sunday) << '\n';
  cout << "Number of invalid inputs: " << no_rejected_values << '\n';
}

