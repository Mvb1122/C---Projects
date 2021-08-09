#include <iostream>
// You may have noticed that I haven't covered anything array-like, so far, well here it is:

// What is a `Vector?`
    // A vector is c++'s version of JavaScripts Arrays, or Java's ArrayLists.

// How do we write a `Vector?`
    // Since vectors aren't primatives, you have to include them from the `<vector>` header.
#include <vector>
int main() {
    // Like strings, vectors are declared using std, since it's a part of the standard library.
    std::vector<char> letters;
    //           ^ The `char` here decides what variable type is stored in the list.

    // Then, we can assign values to it:
    letters = {'h', 'e', 'l', 'l', 'o'};

    // We can then access the vector's values like so:
    std::cout << letters[0] << "\n";

    // It is of note that Vectors, unlike Java's Arrays, but like JavaScript's Arrays, aren't solid in their size; they can grow as you add/remove values.


// How do we add or remove elements from a Vector?
    // We can do add elements through two ways: addressing an empty index, or using .push_back(). Removing, on the other hand, can be done with either pop_back() or erase().
    // There are, of course, other methods which I'm not mentioning for brevity.

    // Adding:
        // Declare a vector.
    std::vector<int> numbersThrough10;
        // Add values. (I'm using a loop here, but you can do it in other ways.)
    for (int i = 1; i <= 11; i++) {
        // use push_back() to append the value to the vector.
            // push_back() "pushes" a value to the end of the vector.
        numbersThrough10.push_back(i);
    }

    // Removing:
        // I accidentally went up to 11, instead of ten, so let's remove that:
            // pop_back() removed a value from the end of the vector.
    numbersThrough10.pop_back();

// How do we know how big a vector is?
    // We can get a vector's length via the size() method.
    std::cout << "numbersThrough10 is " << numbersThrough10.size() << " elements big.\n"; // Outputs: numbersThrough10 is 10 elements big.

    // We could then take that size and use it to display all of the contents of that vector:
    std::cout << "Contents of numbersThrough10:\n";
    for (int j = 0; j < numbersThrough10.size(); j++) {
        std::cout << "\t" << numbersThrough10[j] << "\n";
    }
}

// C++ also has "arrays," how do those differ?
    // C++'s Arrays are inheirited from C, so they're harder to use, since C is a lower-level language than C++.
    // However, they can be created easily, like this:
int arrayDemo() {
    // They're declared how the class normally is, except square brackets and a number are appended.
    // The number is the length of the array, which initializes those values to the class's default value.
    int array[3]; // In this case, we're using int, so the default value is 0.
    
    // We can then add values like this:
    array[1] = 1;
    array[2] = 2;
    array[3] = 3;

    // Acessing values is done the same as vectors; eg:
    std::cout << array[1];
    return array[2];

    // Unlike Vectors, Arrays are static in size, so they can't get larger or smaller.
}