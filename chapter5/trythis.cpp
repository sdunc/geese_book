#include "std_lib_facilities.h"

// page 138 seeing different debug messages
int area(int length, int width)
 {
   if (length<=0||width<=0) error("non-positive area() argument");
   return length*width;
 }
// link time bug if we remove the function defintion

int framed_area(int x, int y) // calculate area within frame
{
  constexpr int frame_width = 2;
  if (x-frame_width<=0||y-frame_width<=0)
    error("non-positive area() argument called by frame_area()");
  return area(x-frame_width, y-frame_width);
}

int f(int x, int y, int z)
{
  // those are all checks we can make after to ensure that the result
  // is valid but we can start earlier and define what good input for
  // this function looks like for example we want to accomplish x*y
  // with a result >=0.  this means x>=0, y>=0 we also want to
  // calculate framed_area with z and y. Since we have an internal
  // border defined we can check that the parameters we are passing
  // are large enough
  int area1 = area(x,y);
  if (area1<=0) error("non-positive area1");
  int area2 = framed_area(3,z);
  if (area2<=0) error("non-positive area2");
  int area3 = framed_area(y,z);
  if (area3<=0) error("non-positive area3");
  double ratio = double(area1)/area3;

  cout << "Area1\tArea2\tArea3\tRatio\n"
       << area1 << '\t' << area2 << '\t'
       << area3 << '\t' << ratio << '\n';

  return 0;
}

int main()
{
  bool alive {true};
  int x,y,z;
  while (alive)
    {
      cout << "Enter x, y, z: \n";
      cin>>x>>y>>z;
      if (cin)
	f(x,y,z);
      else
	alive=false; // kill loop if no input
    }
}
      
//   int x0 = arena(7); // undeclared function
//   int x1 = area(7); // wrong number of arguments
// //   int x2 = area("seven",2); // 1st argument has a wrong type
  
//   // non-errors but bad behavior
//   int x4 = area(10,-7); // OK: but what is rectangle with a width of minus 7?
//   int x5 = area(10.7,9.3); // OK: but calls area(10,9)
//   char x6 = area(100,9999); // OK: but truncates the result

//   cout << "area(10,-7): " << x4 << '\t'
//        << "area(10.7,9.3): " << x5 << '\t'
//        << "area(100,9999): " << x6 << '\n';

  
