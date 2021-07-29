#include "std_lib_facilities.h"

// Write a program that plays the game Rock, Paper, Scissors.
// use a switch statement to solve this exercise

int main()
{
  vector<char> computer_moves;
  int number_of_games {0};
  char move;
  int computer_score {0};
  int human_score {0};
    
  cout << "How many games would you like to play? ";
  cin>>number_of_games;
  for (int i=0; i<number_of_games; i++)
    {
      cout << "Enter some moves (r p s) for the computer to play: ";
      cin>>move;
      if (move == 'r' || move == 'p' || move == 's')
	computer_moves.push_back(move);
      else ;
    }
  
  cout << "Weclome to Rock Paper Scissors!\n";
  for (char computer_move : computer_moves)
    {
      cout<<"Enter (r)ock (p)aper (s)cissors: ";
      cin>>move;
      switch (move) {
      case 'r':
	// we have rock, now we switch on computers possible moves
	switch (computer_move) {
	case 'r':
	  cout << "You: Rock\tComputer: Rock\nTie!\n";
	  break;
	case 'p':
	  cout << "You: Rock\tComputer: Paper\nYou lose!\n";
	  ++computer_score;
	  break;
	case 's':
	  cout << "You: Rock\tComputer: Scissors\nYou win!\n";
	  ++human_score;
	  break;
	default:
	  cout << "Computer has made a disallowed move.\n";
	  break;
	}
	break;
	
      case 'p':
	// we have paper, switch based on what the computer plays
	switch (computer_move) {
	case 'r':
	  cout << "You: Paper\tComputer: Rock\nYou win!\n";
	  ++human_score;
	  break;
	case 'p':
	  cout << "You: Paper\tComputer: Paper\nTie!\n";
	  break;
	case 's':
	  cout << "You: Paper\tComputer: Scissors\nYou lose!\n";
	  ++computer_score;
	  break;
	default:
	  cout << "Computer has made a disallowed move.\n";
	  break;
	}
	break;
	
      case 's':
	switch (computer_move) {
	case 'r':
	  cout << "You: Scissors\tComputer: Rock\nYou Lose!\n";
	  ++computer_score;
	  break;
	case 'p':
	  cout << "You: Scissors\tComputer: Paper\nYou win!\n";
	  ++human_score;
	  break;
	case 's':
	  cout << "You: Scissors\tComputer: Scissors\nTie!\n";
	  break;
	default:
	  cout << "Computer has made a disallowed move.\n";
	  break;
	}
	break;

      default:
	cout << "Please enter r or p or s to play Rock, Paper, Scissors.\n";
	break;
      }
    }
  cout << "Score:\nYou: " << human_score << "\tComputer: " << computer_score <<'\n';
}
