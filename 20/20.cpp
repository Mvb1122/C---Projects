// We can dynamically allocate memory by using a dynamic class, and that's what this is going to cover creating and usage of.

// What is a dynamic class and what are they useful for?
    // Dynamic classes are classes which have dynamically-allocated memory-- they can have custom destruction methods and
    // are useful for memory-intensive applications, like if you had some sort of very expensive object that you wanted to clean up
    // in order to let you have more wiggle-room, when it comes to whatever it is that you're doing.

// How do we make a dynamic class?
    // Go read 'dynclass.hpp'

int main() {
#include <iostream>
#include "dynclass.hpp"
// How do we create a dynamic object?
    // Dynamic objcets are created by using the new keyword, like Java:
    // When using the * like this, it tells the computer to make a dynamic version of this object so it can be deleted.
    dynClass *d = new dynClass();

    // We can then destroy our new dynClass object with the delete keyword:
    delete d;
}

// What's the difference between a static and dynamically allocated object?
    // Statically allocated objects fall under the compiler's will to deconstruct the object,
    // whereas Dynamically allocated variables have to be destructed by the programmer.
    // This means that they're useful if your object has members which need to be specially
    // treated when they are destructed, like if you need to specifically execute XXX method on XXX object, for instance.