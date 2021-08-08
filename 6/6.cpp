// This is just a mini-lesson on getting input from the user.

// How do you get input from the user?
    // As we have c-out for outputting characters, we also have c-in, for inputting characters.
    // It's used as the following:

#include <iostream>
int main() {
    // You must declare a variable to which you will apply the user's input.
    int uinput = 0;

    std::cout << "Enter a number to multiply by five: ";

    // Set tip to point to the input from the cin method.
    std::cin >> uinput;

    // You can then use that value in your program.
    int timesFive = uinput * 5;
    std::cout << "\nYour number: " << uinput << "\n";
    std::cout << "Your number times five: " << timesFive << "\n";

    return 0;
}