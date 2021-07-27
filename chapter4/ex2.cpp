#include "std_lib_facilities.h"

// If we define the median of a sequence as "a number so that exactly
// as many elements come before as come after it," fix the program in
// 4.6.3 so that it always prints out the median. A median need not be
// an element of the sequence

double average(double n1, double n2)
{
  return (n1+n2)/2;
}

int main()
{
  vector<double> sequence;
  for (double entry; cin>>entry;)
    sequence.push_back(entry);

  // compute the median
  // if the list is an even length we must average the two middle values
  // vector.size() gives the total length of the vector, an integer
  // Imagine we have a vector of length 4: [1,2,3,4]
  // With the indexes:                      0,1,2,3
  // vector.size()/2 == 2. vector[2] gives the right hand value of the median we want to avg
  // so we want vector[(vector.size()/2)-1] as well to average.
  // Imagine if instead we had a vector with an off number of elements:
  // v= [1,2,3]
  // v.size() == 3/2 == 1. This gives the correct middle value.
  sort(sequence);
  if ((sequence.size()%2)==0) // even
    cout << "The median of this even list is: "
	 << average(sequence[(sequence.size()/2)-1], sequence[sequence.size()/2])
	 << ".\n";
  else // odd length list, we can directly print median
    cout << "The median of this odd list is : " << sequence[sequence.size()/2] << ".\n";
}
