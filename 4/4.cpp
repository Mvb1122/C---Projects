// This lesson covers variables, which are basically just bits of information that your program can interact with.

// Since C++ uses classes, it has several types of variables, of which here are the primatives:
    // int: Integer Numbers, like 0, 1, 2, 3, or higher. (Whole numbers only, since it's integers.)
    // double: Floating-point Numbers, like 0.3, 1.2, or 3.14.
    // char: Characters, like 'a', 'b', or 'c'.
    // string: This isn't actually a primative, it's just an in-built char[] with the usual methods.
    // bool: Boolean values, like true or false.

// How are variables declared?
#include <iostream>
int main() {
    // In a method, you can declare them by following the type's name with the name of the variable:
    int score;
    // You can then give it a value by doing the following:
    score = 0;

    // You can also combine the declaration and initialization stages by doing something like this:
    double pi = 3.14;

    std::cout << pi;
    // (Variables are converted to strings before they are printed to the console.)
}