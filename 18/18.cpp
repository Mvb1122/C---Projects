// This one covers classes, which are basically objects from Javascript, or groups of named values, which can have behaviours.
    // This has to be compiled like:
        // g++ 18.cpp ExampleClass.cpp;

// What are classes?
    // In C++, classes are groups of variables which can have functions/methods/behaviours attached to them.

// What is the difference between a Class itself and an object?
    // You can think of a class being the blueprint for a house, and the house, when built, as being the object.
    // Classes only define values and behaviours, but objects carry them out.

// How do we write a class?
    // Just as we've included in functions from other files, we can make classes from them, too.
        // (Read on from exampleClass.hpp)
#include <iostream>
#include "ExampleClass.hpp"
#include <vector>
int main() {
    // Alright, now that we've made the `ExampleClass` class, we can now create an object from our class like so:
    ExampleClass example;
    // ^ this specifies the class.
        //          ^ and this specifies the name.
    // We could then call the class's methods like so:
    example.setMember("Hello");
    std::cout << example.getMember() << "\n";

// What if we don't want to call setMember() every time we want to use the ExampleClass?
    // We can use something called a Constructor to initialize the value everytime the class is created.
    // Go to line 17 in ExampleClass.hpp
    // Alright, now that we've done that, we can both create, and initialize, our class in one line:
    ExampleClass constructorExample("I was constructed!");
        // If you're coming from Java, you may notice that we don't use the `new` keyword like that language does, instead, we just put the constructor call right on the end of the name.
    // And we could now call the object's methods like so:
    std::cout << constructorExample.getMember() << "\n";

// What if we want to delete an object, like demolishing a house, persay?
    // We can create something called a destructor in order to delete the object.
    // Go to ExampleClass.hpp at line 24 now.
    // Destructors are run when:
        // The object moves out of scope.
            // EG: When the function it was being used in closes up.
        // the object is explicitly deleted.
            // I'll show you how to do this shortly.
        // Or when the program ends.
    
    // We can only call destructors on "dynamically allocated" variable, which are just objects created using the `new` keyword, like in Java.
    // We'll go into the difference between statically and dynamically allocated variable later on, if I ever get around to it.
    // Unfortunately, if I wanted to make ExampleClass dynamic, I'd have to refactor the whole program, and that means erasing my comments, so I'm not going to do it now.
        // I'll do it in a future one, probably.

// Can we create vectors from our classes?
    // Yes, we do it like so:
    std::vector<ExampleClass> array;
    array.push_back(ExampleClass("I'm index 0"));
    array.push_back(ExampleClass("And I'm index 1."));
    // We can do whatever we want with this vector, just like it's any other sort of array:
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i].getMember() << "\n";
    }
}