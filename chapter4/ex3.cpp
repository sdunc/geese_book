#include "std_lib_facilities.h"

// read a sequence of double values into a vector
// each value is the distance between two cities along a given route
// Compute and print the total distance, smallest distance, largest distance, mean

double sum(vector<double> vect)
{
  double s {0.0};
  for (double x: vect) s+=x;
  return s;
}

double min(vector<double> vect)
{
  // returns min of a vector of size >= 1
  double m {vect[0]}; // grab first element of vector as initial min
  for (double x: vect)
    {
      if (x < m)
	m = x;
      else ;
    }
  return m;
}

double max(vector<double> vect)
{
  // returns max of a vector of size >= 1
  double m {vect[0]}; // grab first element of vector as initial max
  for (double x: vect)
    {
      if (x > m)
	m = x;
      else ;
    }
  return m;
}

double avg(vector<double> vect)
{
  double s = sum(vect);
  return (s/vect.size());
}

int main()
{
  // create a vector of doubles to hold all distances
  vector<double> distances_vect;
  // continue to read standard in until we reach a |
  for(double input; cin>>input;)
    distances_vect.push_back(input);

  cout << "The total distance is : " << sum(distances_vect) << '\n'
       << "The smallest distance is: " << min(distances_vect) << '\n'
       << "The largest distance is: " << max(distances_vect) << '\n'
       << "The avg distance is: " << avg(distances_vect) << '\n';
}
    
    
  
  
