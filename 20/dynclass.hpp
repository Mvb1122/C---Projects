#include <iostream>
class dynClass {
    // We have to make both the constructor and destructor public, so that we can access them from wherever,
    // although you could change this based off of whatever it is that you're doing.
    public:
        // The key to a class being dynamic is creating a destructor, so we'll do it like so:
        ~dynClass();

        // And we have to have a constructor, as well, in order to make it.
        dynClass();

    // (You can optionally check out dynclass.cpp, but you could also go back to 20.cpp if you want.)
};