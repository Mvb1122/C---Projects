#include <iostream>
#include <string>
using namespace std;

// Note: I'm using a function here, it's something we'll learn later on.
int leave() {
  std::cout << "You decide to leave McDonald's-- You've finished eating.";
  std::cout << "As you're walking home, you get run over by a car and die on impact.\nGame Over.\n\n\n\n";
  return 0;
}

int goToEat(string item) {
  std::cout << "You take a bit of your " << item << "\n";
  for (int i = 0; i < 10; i++) {
    std::cout << "Do you take another bite? Or are you done here?\n (1) - Chomp\n (2) - Leave\n";
    {
      int answer;
      std::cin >> answer;
      if (answer == 1) {
        srand(time(NULL));
        int chanceOfDeath = rand() % 10;
        if (chanceOfDeath > 2) {
          // Do nothing, continue the loop.
        } else {
          std::cout << "You choke on your " << item << " and die.\nGame Over.\n";
            return 0;
        }
      } else {
        std::cout << "You decide to leave, so you get up to walk out of the store.";
        leave();
        return 0;
      }
    }
  }
  leave();
  return 0;
}

int runGame() {
  std::cout << "You walk into McDonald's, what do you do?\n (1) - Ask for a burger\n (2) - Ask for a Whopper\n (3) - Get a Big Mac\n";
  int answer;
  std::cin >> answer;
  switch(answer) {
    case 1:
      std::cout << "The cashier says to you, \"That'll be $3.79.\"\nWhat do you do?\n (1) - Pay\n (2) - Refuse to pay because you're an anarchist.\n";
      std::cin >> answer;
      switch(answer) {
        case 1:
          std::cout << "\nYou hand the cashier a $5 bill and tell them to keep the change, then wait by the register for your food to be ready.\n";
          std::cout << "You pick up your food and decide to:\n (1) - Go to a table and eat your Quarter Pounder.\n (2) - Eat your food right at the counter, like a maniac.\n";
          std::cin >> answer;
          switch (answer) {
            case 1:
              goToEat("Quarter-Pounder");
              break;
            case 2:
              std::cout << "The cashier takes a pistol out from under the counter and shoots you in the head. \"We don't like nasties here.\"\nGame Over\n";
              return 0;
              break;
          }
          break;
        case 2:
          std::cout << "\nThe cashier calls the SWAT (don't ask me why it's not the Police) and they come and kill you.\nGame over.\n";
          return 0;
          break;
      }
      break;
    case 2:
      std::cout << "The cashier says to you, \"Sir, we serve *food* here,\" as they pull out a pistol and shoot you in the head.\nGame over.\n";

      return 0;
    case 3:
      std::cout << "The cashier says to you, \"That'll be $3.99.\"\nWhat do you do?\n (1) - Pay\n (2) - Refuse to pay because you just realized that you don't want to die sad and alone.\n";
      std::cin >> answer;
      switch (answer) {
        case 1:
          std::cout << "\nYou hand the cashier a $5 bill and tell them to keep the change, then wait by the register for your food to be ready.\n";
          std::cout << "You head to the nearest table in order to enjoy your Big-mac.";
          goToEat("Big Mac");
          break;
        case 2:
          std::cout << "The cashier shrugs and says, \"Okay, I'll cancel the order, then.\" You realize that nothing you do will ultimately effect the way you die, since you've already played this stupid game like three times, and you're going to die alone anyway. You lie sobbing on the floor in a fetal position, crying.\nGame Over\n";
          return 0;
          break;
      }
  }
  return 0;
}

int main() {
  runGame();
  int i = 1;
  while (true) {
    std::cout << "\nContinue? (Y/N)";
    std::string input;
    std::cin >> input;
    if (input == "N") break;
    std::cout << "\n\nRestarting game, just close the window if you want to end it. (This is run #" << i << ", by the way.)\n\n";
    runGame();
    i++;
  }
}