#include "std_lib_facilities.h"

int main()
  try{
    int x1 = narrow_cast<int>(2.9); // throws
    int x2 = narrow_cast<int>(2.0); // OK
    char c1 = narrow_cast<char>(1066); // Throws
    char c2 = narrow_cast<char>(85); //OK

  }

  catch (...) {
    cerr << "OOps unknown exception\n";
    return 1;
  }
    
