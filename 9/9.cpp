// This one covers Datatype modifiers and Type Conversion, which effectively change how C++ stores the variable, under the hood.

// What is a datatype modifier?
    // A datatype modifier is a keyword we can use to change the way that a variable interacts with C++.
    // Here's a few:
        // Const - Variables assigned this keyword cannot be changed; attempting to change them will crash the program.
        // signed - This variable is the default behaviour for an int variable.
        // unsigned - Restricts this variable to only holding positive values.
        // short - This variable is only given 2 bytes worth of space in memory, meaning it can only hold values from -32768 to 32767.
        // long - This variable is given 8 bytes of memory, meaning it can hold values from -2,147,483,648 to 2,147,483,647
        // volitile - Alerts the computer that this value may be externally modified. (Or that it will be changed in unexpected ways.)
        // restrict - Restricts access to this variable to only be availible to the object it points to.

// What is type conversion?
    // Type conversion is a handy trick we can use to preform narrowing conversions.
        // (You'll learn more about narrowing conversions when I get to them in classes.)

// How do you use type conversion?
    // Type conversion is used as follows:
#include <iostream>
int main() {
    double valueWithDecimals;
    std::cout << "Enter a value with decimals.\n";
    std::cin >> valueWithDecimals; // 13.1

    int valueWithoutDecimals = (int) valueWithDecimals; // 13
    // This is read as `convert valueWithDecimals to int`.
    std::cout << "Your value without decimals is " << valueWithoutDecimals << "\n";

    // Please be aware that casting (word for type conversion) from a double to an integer just cuts off the decimal; it does not round the number.
}