#include <iostream>
// We declare a class as follows:
class ExampleClass {
    // We can then add a value (attribute or member is what it's actually called) to the class like so:
    std::string exampleMember;

    // We can also add a method like so:
    public:
    // ^ The public keyword here specifies that the method is availible to all programs which import the class.
        // By default, everything in a class is private, meaning that it can only be accessed from the class in which it is declared.

        // Just as with functions, we're only supposed to keep our declarations in the header file, then put the definitions in another file.
        std::string getMember();
        void setMember(std::string input);
        // Continue reading from ExampleClass.cpp

        // We can make a constructor like so:
        ExampleClass(std::string member);
        // It's just the class name, followed by any parameters you might want to pass into its constructor.
        // We can also define default constructors by overloading the constructor with a version that doesn't accept any parameters.
        ExampleClass();
        // You can now go to ExampleClass.cpp at line 15.

        // We can declare a destructor like so:
        ~ExampleClass();
        // They don't accept any parameters, and they don't return anything, so it's just the class's name, prepended by a `~`.
        // Go to line 26 in ExampleClass.cpp now.

    private:
        // We can also make stuff exclusively private, if we want only the class in which it is declared to be able to access it.
        bool is_balls;

};
// ^ Notice the semicolon! This is used because we can declare multiple classes in one file, so we need to know where the class ends.