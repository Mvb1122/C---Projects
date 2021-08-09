// You can seperate code into different files by including it from a .h file which points to a .cpp file.
// See 16.h for more details.

#include <iostream>
// Then we include the .h file, accordingly:
#include "16a.h"
int main() {
    // Now we can use those functions, as if they were in this file.
    sayHi();
    say("Hello.\n");
}