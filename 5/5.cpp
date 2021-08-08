// This lesson covers math, so you practically already know it.

// What are C++'s operators?
    // C++ has 5 operators:
        // Addition: +
        // Subtraction: -
        // Multiplication: *
        // Division: /
        // Modulo: %
    // If you're unfamiliar what Modulo does, it basically just divides and gives you the remainder; so:
        // 11 % 5 would equal 1.

#include <iostream>    
int main() {
    std::cout << "Four plus five is: " << (4 + 5);
    std::cout << "\nFour minus five is: " << (4 - 5);
    std::cout << "\nFour times five is: " << (4 * 5);
    std::cout << "\nFour divided by five is: " << (4 / 5);
    std::cout << "\nThe remainder of four and five is: " << (4 % 5);
}