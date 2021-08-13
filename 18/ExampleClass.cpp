#include "ExampleClass.hpp"

std::string ExampleClass::getMember() {
    // Method declarations function similarly to function declarations, except a method's name follows its class's name, except seperated by two colons,
    // so this is the getMember() function of the ExampleClass class.
    return exampleMember;
}

void ExampleClass::setMember(std::string input) {
    exampleMember = input;
}

// With that being declared, we have now finished making the `ExampleClass` class, so you can head back to the 18.cpp file now.

// Now, we're going to define the constructor like so:
ExampleClass::ExampleClass(std::string member) {
    exampleMember = member;
}

// Now, I'm going to make a default constructor, like so:
ExampleClass::ExampleClass() {
    // This is just to prevent errors and allow for the first example object to still work.
}
// You can now head back to 18.cpp at line 29.

// We can now define the destructor as such:
ExampleClass::~ExampleClass() {
    // We can put any code here to run when the variable is deleted.
}
// Go back to 18.cpp at line 38 now.