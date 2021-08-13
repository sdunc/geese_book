#include "std_lib_facilities.h"
// write a program that reads and stores a series of integers and then
// conmpiutes the sum of the first N inteers. First ask for the number
// of integers you want to sum

double sum(vector<int> arr, int x)
{
  if (x>arr.size()-1) error("param x of sum() out of range");
  if (arr.size()==0) error("param arr of sum() is empty");
  int acc = 0; // closure of ints under addition hhaha 
  for (int i=0; i<x; ++i)
    acc+=arr[i]; // add index wise
  return acc;
}

int main()
{
  vector<int>sum_vec;
  int how_many;
  int acc = 0; // holds sum

  cout << "How many ints do you want to sum? ";
  cin>>how_many;

  cout << "Please enter some integers (press '|' to stop)\n";
  for (int i; cin>>i;)
    sum_vec.push_back(i);
  
  // for (int i=0; i<how_many; ++i)
  //   acc+=sum_vec[i];
    
  // cout << acc << '\n';
  cout << sum(sum_vec, how_many) << '\n';
}
