// Conditionals in C++ function exactly like they do in JavaScript or Java.
    // You can view my notes on Java and C++'s other conditional operators here:
    // https://github.com/Mvb1122/Java-Projects/blob/main/%238/src/com/company/Main.java
    // Starts on line 71.
        // C++ does not have the same bitwise shift operators, by the way, since they use the same symbols for other things.
        // You can just google it or contact me if you have any questions.

// What conditional operators does C++ have?
    // C++ has the following normal operators:
        // > Greater Than
        // < Less than
        // >= Greater than or Equal To
        // <= Less than or Equal to
        // && AND
        // || OR
        // == Equal to
        // != Not Equal to
        // ! Unary Not (Inverts Value)

// I'm not going to really talk about how to properly use conditionals, since you'd probably learn it better from Codecademy directly.
#include <iostream>
int main() {
    int value;
    std::cout << "Enter a number.\n";
    std::cin >> value;

    // Simple if-elif-else statement:
    if (value > 10) {
        std::cout << "Your number is greater than 10.\n";
    } else if (value == 10) {
        std::cout << "Your number is equal to 10.\n";
    } else {
        std::cout << "Your number is less than 10.\n";
    }

    // You can also use switch/case statements.
    std::cout << "Enter another number.\n";
    std::cin >> value;

    switch (value) {
        case 11: 
            std::cout << "Wow you put 11 that's insane.\n";
            break;
        default:
            std::cout << "Try again, you guessed wrong.\n";
            break;
    }

    std::cout << "Press enter to close the program.";
    std::cin >> value;
}