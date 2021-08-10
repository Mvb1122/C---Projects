// As I've used them in the fast few notes to make my code more efficient, here's functions.

// What are functions?
    // Functions are groups of code that you can reuse over and over, without copying and pasting your code.
    // They're useful because they make your code a lot cleaner and more space-efficient.

// Are there any functions I've already used?
    // Yes. The main() function used in every program is, obviously, a function.
    // There are other functions, like sqrt() you might've used, too.

// How do we write a function?
#include <iostream>
int multiply(int param1, int param2 = 2) {
    // First, we have the return type of the function (what it gives back to the calling program), and then we have the name of the function.
        // The return type can be `void` if your function doesn't return anything.
        // You can set default parameters (what's used if you don't enter the parameter) by placing an `=` and then a value after the declaration.
    // Then, we have the parameters, in circle brackets. It's formatted like: (class name, class name)
        // In this case, the case is int and the names are param1 and param2.
    // Body of the function...

    return param1 * param2;

    // Functions have to be written above the main() function, by the way.
    // Also, code written past a return statement will not execute.
    std::cout << "This will not be printed.";
}

// What is Function Overloading?
    // Function overloading is the practice of giving identical names to functions with different signatures.
    // In order to do it, the function has to output the same type, and have either a different type of parameters or have a different number of parameters.
    // It's done like this:
int multiply(double param1, double param2) {
    // It's common for overloaded functions just to call the normal version, but with converted values.
    return multiply((int) param1, (int) param2);
}

// How do we call a function?
    // Simply put the function's name, then put the parameters inside the brackets to call it.
int main() {
    // Like this:
    int number = multiply(2, 2);
    std::cout << "2 * 2 = " << number << "\n";

    // Called with the default parameters it looks like:
    number = multiply(2);
    std::cout << "2 * a secret number = " << number << "\n";

    // Please be aware that default parameters are filled in from left to right, with the ones you pass being squeezed forward,
        // So you can't have any empty spots in your function usages which you expect to be filled.
        // EG: You can't have a function with a default value in the middle of the declaration, it **has** to be at the end.
        // EG: We couldn't have multiply's signature be multiply(int param1 =2, int param2)
            // Because calling this variant of multiply would just either cause the program not to compile or unexpected output at runtime. (Read: an error.)
}