#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter the name of the person you want to write to: ";
  string first_name;
  cin >> first_name;
  cout << "Dear " << first_name << ",\n"
       << "How are you doing?\n"
       << "This is the final line.\n";
  cout << "Enter the name of another friend: ";
  string friend_name;
  cin >> friend_name;
  cout << "Have you seen " << friend_name << " lately?\n";
  char friend_sex {'0'};
  cout << "Enter the sex of this friend (m/f): ";
  cin >> friend_sex;
  if (friend_sex == 'm')
    cout << "If you see " << friend_name << " please ask him to call me.\n";
  if (friend_sex == 'f')
    cout << "If you see " << friend_name << " please ask her to call me.\n";
  cout << "Enter the age of the recipient: ";
  int recipient_age;
  cin >> recipient_age;
  cout << "I hear you just had a birthday and you are " << recipient_age << " years old.\n";

  if (recipient_age<0)
    simple_error("you're kidding!");
  if (recipient_age>=110)
    simple_error("You're kidding!");

  if (recipient_age < 12)
    cout << "Next year you will be " << recipient_age+1 << ".\n";
  if (recipient_age == 17)
    cout << "Next year you will be able to vote.\n";
  if (recipient_age > 70)
    cout << "I hope you are enjoying retirement.\n";

  cout << "Yours sincerely,\n\nStephen Duncanson\n";
	  

}

