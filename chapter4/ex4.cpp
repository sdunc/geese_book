#include "std_lib_facilities.h"

// Write a program to play a number guessing game. User thinks of a
// number between 1 and 100 and programs asks questions to figure out
// what the number is. Should be able to determine any number in no
// more than seven questions

int avg(int a, int b)
{
  return (a+b)/2;
}


int main()
{
  // read a number from standard input
  // ensure that it is in the correct range
  int number_to_guess {0};
  int guesses {0};


  // we need to store the last guess as well in order to average THEM together
  // and move towards the real value
  while (number_to_guess < 1 || number_to_guess> 100)
    {
    cout << "Enter a number for the computer to guess for between [1,100]: ";
    cin>>number_to_guess;
    }

  int computer_guess_upper {100}; 
  int computer_guess_lower {1};
  int avg_computer_guess {50};
  int last_guess; 
  while (avg_computer_guess != number_to_guess)
    {
      cout << "Is the number you are thinking of less than " << avg_computer_guess << "?\n";
      char lt_guess {' '};
      cin>>lt_guess;
      switch (lt_guess) {
      case 'y':
	++guesses;
	computer_guess_upper = avg_computer_guess;
	avg_computer_guess = avg(computer_guess_upper, computer_guess_lower);
	break;
      case 'n':
	++guesses;
	computer_guess_lower = avg_computer_guess;
	avg_computer_guess = avg(computer_guess_upper, computer_guess_lower);
	break;
      default:
	cout << "Is the number you are thinking of less than " << avg_computer_guess << "yn?\n";
	char lt_guess {' '};
	cin>>lt_guess;
	break;
      }
    }
      cout << avg_computer_guess << " Is the number you were thinking of.\n"
	   << "It took me " << guesses << " guesses to find your number.\n";
}
  




