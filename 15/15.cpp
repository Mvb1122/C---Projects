// As I've used them in the fast few notes to make my code more efficient, here's functions.

// What are functions?
    // Functions are groups of code that you can reuse over and over, without copying and pasting your code.
    // They're useful because they make your code a lot cleaner and more space-efficient.

// Are there any functions I've already used?
    // Yes. The main() function used in every program is, obviously, a function.
    // There are other functions, like sqrt() you might've used, too.

// How do we write a function?
#include <iostream>
int multiply(int param1, int param2) {
    // First, we have the return type of the function (what it gives back to the calling program), and then we have the name of the function.
        // The return type can be `void` if your function doesn't return anything.
    // Then, we have the parameters, in circle brackets. It's formatted like: (class name, class name)
        // In this case, the case is int and the names are param1 and param2.
    // Body of the function...

    return param1 * param2;

    // Functions have to be written above the main() function, by the way.
    // Also, code written past a return statement will not execute.
    std::cout << "This will not be printed.";
}

// How do we call a function?
    // Simply put the function's name, then put the parameters inside the brackets to call it.
int main() {
    // Like this:
    int number = multiply(2, 2);
    std::cout << "2 * 2 = " << number << "\n";
}