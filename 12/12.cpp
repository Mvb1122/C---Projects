// Loops in C++ work effectively the same as Java or JavaScript:

// What kinds of loops does C++ have?
    // C++ has both For and While loops, including the do-while loop that Java and JavaScript have.

// How do we write a loop in C++?
    // There are two kinds of loops in C++ (and OOP programming in general), the while loop, and the for loop. Here's a while loop:
#include <iostream>
int main() {
    {
        int i = 3;
        while (i < 10) {
            std::cout << "Looped, i = " << i << "\n";
            i++;
        }
    }

    // And here's a for loop:
    for (int i = 0; i < 10; i++) {
        std::cout << "Looped";
    }

    // The main difference between the For and While loops is that the For loop will always execute a set number of times, while a While loop will execute while a condition is true.
    // Additionally, you can make empty loops, like this:
    for (int i = 0; i < 10; i++);
    // Which does nothing. These are useful if the type of your counter (i in this case) has a side effect that increases its value.

    // You can, of course, make decrementing loops, too, if you need it:
    for (int i = 9; i != 0; i--);
}