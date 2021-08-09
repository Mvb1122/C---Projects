/*
scissors > paper
paper > rock
rock > lizard
lizard > spock
spock > scissors
scissors > lizard
lizard > paper
paper > spock
spock > rock
rock > scissors 
*/

#include <iostream>
int main() {
  int paper, rock, scissors, lizard, spock;
  paper = 1;
  rock = 2;
  scissors = 3;
  lizard = 4;
  spock = 5;



  srand(time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0;

  std::cout << "Choose: \n Rock (1), \n Paper (2), \n Scissors (3), \n Lizard (4), \n Spock (5)\n";
  std::cin >> user;
{
  if (user == scissors && computer == paper) {
    std::cout << "You win.\n";
  } else if (user == paper && computer == rock) {
    std::cout << "You win.\n";
  } else if (user == rock && computer == lizard) {
    std::cout << "You win.\n";
  } else if (user == lizard && computer == spock) {
    std::cout << "You win.\n";
  } else if (user == spock && computer == scissors) {
    std::cout << "You win.\n";
  } else if (user == scissors && computer == lizard) {
    std::cout << "You win.\n";
  } else if (user == lizard && computer == paper) {
    std::cout << "You win.\n";
  } else if (user == paper && computer == spock) {
    std::cout << "You win.\n";
  } else if (user == spock && computer == rock) {
    std::cout << "You win.\n";
  } else if (user == rock && computer == scissors) {
    std::cout << "You win.\n";
  } else if (user == computer) {
    std::cout << "Tie.\n";
  } else {
    std::cout << "You lose.\n";
  }
}

  std::string computerChoice;
  switch (computer) {
    case 1:
      computerChoice = "paper";
      break;
    case 2:
      computerChoice = "rock";
      break;
    case 3:
      computerChoice = "scissors";
      break;
    case 4:
      computerChoice = "lizard";
      break;
    case 5:
      computerChoice = "spock";
      break;
  }
  std::cout << "The computer chose " << computerChoice << ".\n";

  std::cout << "Press enter to close the game.";
  std::cin >> computer;
}