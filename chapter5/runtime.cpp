#include "std_lib_facilities.h"

int area(int length, int width) // calculate area of a rectangle
{
  if (length<=0||width<=0) error("non-positive area() argument")
  return length*width;
}

// // a. the caller handles errors:
// constexpr int frame_width = 2; // define a constant for use in framed_area
// int framed_area(int x, int y) // calculate area within frame
// {
//   return area(x-frame_width,y-frame_width);
// }

int framed_area(int x, int y)
{
  constexpr int frame_width = 2;
  if (x-frame_width<=0||y-frame_width<=0)
    error("non-positive area() argument called by framed_area()");
  return area(x-frame_width,y-frame_width);
}

int main()
{
  int x = -1;
  int y = 2;
  int z = 4;

  // a. the caller of area deals with bad arguments
  if (x<=0) error("non-positive x");
  if (y<=0) error("non-positive y");
  int area1 = area(x,y); // -2
  
  // a. to protect area 2 we need restrictions
  if (z<=frame_width)
    error("non-positive 2nd area() argument called by framed_area()");
  int area2 = framed_area(1,z); // -2

  // a. protect called for area 3.
  if (y<=frame_width||z<=frame_width)
    error("non-positive area() arugment called by framed_area()");
  int area3 = framed_area(y,z); // 0
  
  double ratio = double(area1)/area3;
  
  cout << ratio;

}
    
// we have 2 options for handling the error
// a. let the caller of area() deal with bad arguments
// we find this to be rather brittle and generating a lot of ugly code.
// instead we want to keep the original simple concept:
// int area2 = framed_area(1,z) ...
// we can put the check inside framed_area()
// this leads to situation b. 
// b. let area() the callee deal with bad arguments.

