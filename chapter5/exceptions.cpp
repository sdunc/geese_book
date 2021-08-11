
#include "std_lib_facilities.h"

// with exceptions we get the best of both detecting errors as a
// caller and callee. instead of returning they throw an exception
// which can be caught.

class Bad_area {}; // a type specifically for reporting errors from area()

int area(int length, int width)
{
  if (length<=0 || width<=0) throw Bad_area{};
  return length*width;
}

int framed_area(int x, int y)
{
  constexpr int frame_width = 2;
  if (x-frame_width<=0||y-frame_width<=0) error("Error! bad dim! in framed_area()\n");
  return area(x-frame_width, y-frame_width);
}

int main()
  try {
    int x = -1;
    int y = 2;
    int z = 4;

    int area1 = area(x,y);
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    double ratio = area1/area3;
  }
  catch (Bad_area) {
    cerr << "Oops! bad arguments to area()\n";
  }
