// What is C++?
    // C++ is a Object-Oriented programming language, which means it has classes, which means it's just Java with extra steps.
    // It was made in 1979 by Bjarne Stroustrup (how do you pronunce that?).
    // It has extremely low level functionality, yet is pretty abstract, meaning you can do all sorts of interesting stuff with it.

// How do you write C++ code?
    // Since C++ (and the C languages) are compiled, you have to use a compiler.
    // The files which contain the source code use the extension `.cpp`, which stands for C Plus Plus.
    // C++ is also case sensitive, which means we can have two variables with the same name, but different capitalization and it'll be fine.
        // Confusing, sure, although it'll be fine.

// What does a `Hello World` look like, in C++?
    // Calls for the iostream package to be imported, like Java's import statements.
    // It's known as a `Pre-processor Directive`, since it's executed in compilation.
#include <iostream>
    // Create the main() method, which is run on startup.
int main() {
    // Call the character out method of the C++ Standard library and pass the String literal "Hello World!\n" to it.. (STD stands for standard library, apparently.)
  std::cout << "Hello World!\n";
    // By the way, cout is short for Character output Stream.
    // Additionally, we're not overwriting the entirety of the c-out stream, since it's a stream, we're only appending to it.
  std::cout << "Hello again :)\n";

}

// How do we run C++ code?
    // After using a compiler (Control Shift B in VSC if you set it up properly,) we open a termanal to the folder, and run it like:
    // .\1
    // This causes the termanal to search the local folder for a file called 1.exe, and run it.