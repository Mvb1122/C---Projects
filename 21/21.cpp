// As you'll notice by the fact that I haven't commented anything out, this isn't done.

#include <iostream>
#include "Conditional.hpp"
#include <string>

void splitTest() {
    std::string test = "1 < 3";
    std::cout << test << "\n";
    std::vector<std::string> output = Conditional::splitStringToVector(test, ' ');
    std::cout << "Passed splitStringToVector.\n";
    for (int i = 0; i < output.size(); i++) { 
        std::cout << "Element #" << i << ": " << output[i] << "\n";
    }
}

void conditionalTest() {
  Conditional test = Conditional("36 < 40");
    bool output = test.evaluate();
    std::string value = "";
    if (output) {
      value = "True.";
    } else {
      value = "False.";
    }

    std::cout << "is 36 < 40?: " << value << "\n";
}

int main() {
    // splitTest();
    // conditionalTest();
    std::cout << "Enter your Conditional: ";

    std::string conditional;
    std::getline(std::cin, conditional);

    Conditional c = Conditional(conditional);
    bool output = c.evaluate(); 
    std::string value;
    if (output) {
        value = "True.";
    } else {
        value = "False.";
    }

    std::cout << "\nis " << conditional << "?: " << value << "\n";

    return 0;
}