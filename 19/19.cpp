// This lesson covers pointers & references, which basically allow values to reference eachother, instead of being copies. You'll see what I mean after you read this:

// What are pointers and references used for?
    // Pointers and references basically allow a programmer to directly manipulate a computer's memory,
    // which is, obviously, one of, if not the most, scarce resource in a computer.
    // This manipulation allows a programmer to make their program more efficient-- to optimize it.
#include <iostream>
#include "reference.h"
int main() {
// What are references?
    // References are alias for already-existing variables.

    int value = 30;
// How do we write a reference?
    // A reference's name is prepended with an ampersand, `&`, which tells the compiler to use the same value, just with a different name.
    // They're written like such:
    int &referedValue = value;
    // This tells the computer to use the same value for both of these variables, which means that if we decrease `referedValue`, `value` also decreases:
    referedValue--;
    std::cout << value << "\n";

    // Additionally, references **CANNOT** be changed to alias something else, so be careful with that.


// What is Pass-By-Reference?
    // Typically, when we write a function, we use pass-by-value, which creates a copy of the variable in question,
    // however, if we have VERY large variables, such as large, 64 bit, numbers, we might want to make a reference to the number
    // instead to save on memory.
    
    // Pass by reference functions are written using the same `&` that normal references use:
        // Read the "reference.h" file now.
    int squaredVal = 2;
    squareAndSetTo(squaredVal);
    // You may expect this to still print out two, but it actually prints 4, since the original value was modified:
    std::cout << squaredVal << "\n";

    // There's also something called const pass-by-reference, where we declare a parameter to be both constant and a reference,
    // but I'm not going to demo it since I'm too lazy :p
        // It's basically used for cases where you want to mutate a variable AND save the cost of making a copy of a variable.
    
// What does `&` actually mean?
    // Ampersand actually means "address of", which means that you can print the &of (address of) a variable like this:
    std::cout << "Address of squaredVal: " << &squaredVal << "\n";
    // This can be used to prove that one variable is a reference to another, by printing the refered variable's address:
    int &refVal = squaredVal;
    std::cout << "Address of refVal: " << &refVal << "\n";

// What are pointers?
    // Pointers are like Reference's younger brother-- you're okay with them, but you want to avoid them as much as possible.
    // Pointers were inheireted from C, so they're a bit odd-- they function basically identically to references, except they're more complex:
    // A pointer variable holds the memory address, instead of a reference to the original memory address.
    int* pointer = &value;
    // pointer now holds value's memory address, and it prints like this:
    std::cout << "Pointer: " << pointer << "\n"; // 0xWhateverInHex

    // We can also make null pointers, if we know we need a value, but don't know where to point it, yet.
    int* nullpointer = nullptr;
    // nullptr is a built-in since C++ verison 11, which replaces NULL, which could crash programs.

// What is a dereference? What is it used for?
    // Sometimes, we want to make a copy of a value that's a reference, and we can't just do this:
        // int copy = pointer;
    // because that will throw a compile error-- pointers or references cannot be copied like that, so we have to do something called a
    // dereference, which is done as such:
    int copy = *pointer;
    // copy now holds a 'copy' of the original value's value.
    std::cout << "Value of copy: " << copy << "\n"; // Prints 29-- the value of `value`.
}