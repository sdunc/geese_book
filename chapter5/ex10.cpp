#include "std_lib_facilities.h"
// write a program that reads and stores a series of integers and then
// conmpiutes the sum of the first N inteers. First ask for the number
// of integers you want to sum

double sum(vector<double> arr, int x)
{
  if (x>arr.size()-1) error("param x of sum() out of range");
  if (arr.size()==0) error("param arr of sum() is empty");
  // error if the result is not an int
  double acc = 0; // closure of ints under addition hhaha 
  for (int i=0; i<x; ++i)
    acc+=arr[i]; // add index wise
  return acc;
}

int main()
{
  vector<double>sum_vec;
  vector<double>differences;
  int how_many;
  //int acc = 0; // holds sum

  cout << "How many ints do you want to sum? ";
  cin>>how_many;

  cout << "Please enter some floats (press '|' to stop)\n";
  for (double i; cin>>i;)
    {
      if (sum_vec.size() > 0)
	differences.push_back(sum_vec[sum_vec.size()-1]-i);
      else ; // first addition, do nothing
      sum_vec.push_back(i);
    }

  cout << "Doubles\tDifferences\n";
  cout << sum_vec[0] << '\t' << '\n';
    
  for (int i=0; i<differences.size(); ++i)
    cout << sum_vec[i+1] << '\t' << differences[i] << '\n';
  // for (int i=0; i<how_many; ++i)
  //   acc+=sum_vec[i];
    
  // cout << acc << '\n';
  cout << "Sum of the first " << how_many << " doubles\n";
  cout << sum(sum_vec, how_many) << '\n';
}
