#include "std_lib_facilities.h"

int main() {
  // which has been modified to work in months
  cout << "Please enter your first name and age\n";
  string first_name;
  double age;
  cin >> first_name;
  cin >> age;
  age = age * 12;
  cout << "Hello, " << first_name << " (age " << age << ")\n";

  // cout << "please enter your first name and age\n";
  // string first_name = "???";
  // int age = 0;
  // cin >> first_name >> age;
  // cout << "hello, " << first_name << " (age " << age << ")\n";

  // // first and second names an example of two strings
  // cout << "Please enter your first name and second name\n";
  // string first;
  // string second;
  // cin >> first >> second;
  // cout << "Hello, " << first << " " << second << "\n";
}

