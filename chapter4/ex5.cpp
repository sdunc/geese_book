#include "std_lib_facilities.h"

int main()
{
  char operation {' '};
  double operand1, operand2;

  cout << "Enter two numbers and an operation: +-*/ \n";
  cin>>operand1>>operand2>>operation;

  switch (operation) {
  case '+':
    cout << "The sum of " << operand1 << " and " << operand2
	 << " is " << operand1+operand2 << '\n';
    break;
  case '-':
    cout << "The difference of " << operand1 << " and " << operand2
	 << " is " << operand1-operand2 << '\n';
    break;
  case '*':
    cout << "The product of " << operand1 << " and " << operand2
	 << " is " << operand1*operand2 << '\n';
    break;
  case '/':
    cout << "The quotient of " << operand1 << " and " << operand2
	 << " is " << operand1/operand2 << '\n';
    break;
  default:
    cout << "Enter a valid operation: +-*/ \n";
    break;
  }
}

