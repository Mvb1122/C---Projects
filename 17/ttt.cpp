// Must be compiled like:
    // g++ ttt.cpp functions.cpp;
#include <iostream>
#include <vector>
#include "functions.h"

std::string draw(std::vector<char> boardState);

int main() {
    std::vector<char> boardState = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::cout << "Moves are entered in this form: row:column, eg: You would enter 1:2 to take the box in the top-middle.\n";
    std::string linebreak = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    int i = 1;
    while (true) {
        std::string output;
        if (i == 1) {
            output = draw(boardState);
        } else {
            output = linebreak + draw(boardState);
        }
        std::cout << output;
        int playerNum = (++i % 2) + 1;

        std::cout << "Enter your move, Player " << playerNum << ".\n";

        // Do the actual game logic.
        std::string input;
        std::cin >> input;
        char symbol;
        if (playerNum == 1) {
            symbol = 'X';
            
        } else {
            symbol = 'O';
        }

        // Commit transfer on the board to impliment the move specified by the player.
        boardState = parseMove(boardState, input, symbol);
        // Check to see if the player has won.
        std::string state = detectWin(boardState, symbol);
        std::cout << linebreak << printWin(state, playerNum);
        if (state == "win") {
            break;
        }
    }
    std::cout << draw(boardState);

    std::cout << "Enter a letter, then press enter to close the program.\n";
    std::string input;
    std::cin >> input;

    return 0;
}