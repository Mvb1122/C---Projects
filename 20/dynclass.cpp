#include "dynclass.hpp"
#include <iostream>

dynClass::~dynClass() {
    std::cout << "Destroying dynamic class.\n";
}

dynClass::dynClass() {
    std::cout << "Made dynamic class.\n";
}