// Here in 16.h, we define said functions.
#include <string>
#include <iostream>

void sayHi() {
    std::cout << "Hi.\n";
};
void say(std::string input) {
    std::cout << input;
};

// Normally, you would only have your declarations here, and then set up a special compilation script like:
    // g++ 16.cpp 16a.cpp
// but because I'm making several compilations in this folder (C++ Projects), I can't do that very easily.
// The practice of putting your functions in a .h file is called inlining, because you're putting the function
// in-line with its header.