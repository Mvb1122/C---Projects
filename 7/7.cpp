// Convert Celsius to Fahrenheit.
#include <iostream>
int main() {
    // Declare and initialize temperature in Fahrenheit. I'm going to get it from the user.
    double tempf;
    std::cout << "Enter a temperature in Fahrenheit: ";
    std::cin >> tempf;

    // Declare the variable to hold our converted temperature.
    double tempc;

    // Calculate the Celsius temperature.
        // Remember, the formula is `C = (F - 32) / 1.8`.
    tempc = (tempf - 32) / 1.8;

    std::cout << "\nYour temperature in Celsius: " << tempc;
}