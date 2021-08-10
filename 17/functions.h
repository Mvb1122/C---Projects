#include <iostream>
#include <vector>
std::string draw(std::vector<char> boardState);
std::vector<char> parseMove(std::vector<char> boardState, std::string input, char symbol);
std::string detectWin(std::vector<char> boardState, char symbol);
std::string printWin(std::string state, int playerNum);