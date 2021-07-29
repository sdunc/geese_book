#include "std_lib_facilities.h"

int char2int(char c)
{
  return (int(c)-48);
}

int string2int(string number_input)
{
  vector<string> num_string_vector
    = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  int counter {0}; // start counting
  for (string s : num_string_vector) {
    if (number_input == s)
      return counter;
    else
      ++counter;
  }
  return 1;
}

int main()
{
  char operation {' '};
  string operand1, operand2;
  int op1, op2;

  cout << "Enter two numbers and an operation: +-*/ \n";
  cin>>operand1>>operand2>>operation;

  // convert to ints based on length of input
  if (operand1.size() == 1)
    op1 = char2int(operand1[0]);
  else
    op1 = string2int(operand1);

  if (operand2.size() == 1)
    op2 = char2int(operand2[0]);
  else
    op2 = string2int(operand2);
  
  // now we can calculate as usual
  switch (operation) {
  case '+':
    cout << "The sum of " << op1 << " and " << op2
	 << " is " << op1+op2 << '\n';
    break;
  case '-':
    cout << "The difference of " << op1 << " and " << op2
	 << " is " << op1-op2 << '\n';
    break;
  case '*':
    cout << "The product of " << op1 << " and " << op2
	 << " is " << op1*op2 << '\n';
    break;
  case '/':
    cout << "The quotient of " << op1 << " and " << op2
	 << " is " << op1/op2 << '\n';
    break;
  default:
    cout << "Enter a valid operation: +-*/ \n";
    break;
  }
}
