#include "Conditional.hpp"
#include <string>
#include <vector>
#include <iostream>

Conditional::Conditional(std::string input) {
    std::vector<std::string> results = splitStringToVector(input, ' ');
    a = results[0];
    symbol = results[1];
    b = results[2];
}

Conditional::Conditional(char a1, char inequality, char b1) {
    a = a1;
    symbol = inequality;
    b = b1;
}

bool Conditional::evaluate() {
    double aval = std::stod(a);
    double bval = std::stod(b);

    std::cout << "Evaluating: " << aval << " " << symbol << " " << bval << "\n";

    if (symbol == ">") {
        if (aval > bval) {
            return true;
        } else {
            return false;
        }
    } else if (symbol == "<") {
        if (aval < bval) {
            return true;
        } else {
            return false;
        }
    } else if (symbol == "&&") {
        if (aval != 0 && bval != 0) {
            return true;
        } else {
            return false;
        }
    } else if (symbol == "||") {
        if (aval != 0 || bval != 0) {
            return true;
        } else {
            return false;
        }
    } else {
        std::cout << "Error, incorrect inequality: " << symbol << "\n";
        return NULL;
    }
};

/**
 * @param input The string you want to split.
 * @param split The character you want to split by.
 * @returns A vector containing the split results.
 * */
std::vector<std::string> Conditional::splitStringToVector(std::string input, char split) {
    // Split input into a char array.
    std::vector<char> chars;
    for (int i = 0; i < input.length(); i++) chars.push_back(input[i]);

    std::vector<std::string> parts = {""};
    parts.resize(input.length());
    std::cout << "Length of chars: " << chars.size() << "\n";
    
    /*
        Loop through the chars[] and add each element onto the end of the selected parts element.
        If the element is " ", do nothing and move the selection onto the next element.
    */
   int selectedPart = 0;
   for (int i = 0; i < chars.size(); i++) {
       if (chars[i] == ' ') {
           selectedPart++;
           // parts.push_back("${replaceme}");
       } else {
           std::cout << "Part accepted, index " << i << ": " << chars[i] << "\n";
           parts[selectedPart] = parts.at(i) + chars[i];
           std::cout << "Its line is: " << parts.at(selectedPart) << ".\n";
       }
   }

    // Trim empty indicies.
    int actualIndex = 0;
    for (int i = 0; i < parts.size(); i++) {
        if (parts[i] == "") {
            std::cout << "Removing element #" << actualIndex << ": " << parts[i] << "\n";
            parts.erase(parts.begin() + i);
            i--;
        }

        actualIndex++;
    }

    return parts;
}