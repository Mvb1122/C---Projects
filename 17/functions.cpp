#include <vector>
#include <iostream>
#include <string>
std::string draw(std::vector<char> boardState) {
    std::string line = " | ";
    std::string lineBreak = "\n--- --- ---\n";
    std::string output = boardState[0] + line + boardState[1] + line + boardState[2]
                       + lineBreak
                       + boardState[3] + line + boardState[4] + line + boardState[5]
                       + lineBreak
                       + boardState[6] + line + boardState[7] + line + boardState[8] + "\n";
    return output;
};

std::vector<char> parseMove(std::vector<char> boardState, std::string input, char symbol) {
    int row, column;
    try {
        row = std::stoi(input.substr(0, 1));
        column = std::stoi(input.substr(2, 1));
    } catch (std::out_of_range e) {
        std::cout << "Invalid Input! You lose your turn.\n";
        return boardState;
    }
    
    int posIndex;
    // Add 3 for each row above 0, if it's 0, then do nothing.
    if (row > 1) {
        row--;
        posIndex += 3 * row;
    }

    // If it's the second or third column, add 1 to the index.
    if (column > 1) {
        column--;
        posIndex += column;
    }

    // std::cout << "Index: " << posIndex << "\n";

    boardState[posIndex] = symbol;
    return boardState;
};

// Create static solutions array.
std::string detectWin(std::vector<char> boardState, char symbol) {
    int wins[8][3] = {{0, 1, 2}, {0, 4, 8}, {0, 3, 6}, {1, 4, 7}, {2, 4, 6}, {2, 5, 8}, {3, 4, 5}, {6, 7, 8}};
    for (int i = 0; i < 8; i++) {
        int win[3] = {wins[i][0], wins[i][1], wins[i][2]};
        int cell1 = boardState[win[0]];
        int cell2 = boardState[win[1]];
        int cell3 = boardState[win[2]];
        if (cell1 == symbol && cell2 == symbol && cell3 == symbol) return "win";
    }
    return "no win.";
};

std::string printWin(std::string state, int playerNum) {
    if (state == "win") {
        std::string output = "Congrats, Player " + std::to_string(playerNum) + ", you won.";
        return output;
    }
    return " ";
};