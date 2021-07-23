#include "std_lib_facilities.h"

int main()
{
  vector<string> disliked_words = {"red", "blue", "green"};
  string disliked = "orange";
  
  for(string temp; cin>>temp;)
    for(string s : disliked_words)
      if (temp == s)
	cout << "BLEEP\n";
  cout << temp << '\n';
}
