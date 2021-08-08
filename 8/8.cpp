#include <iostream>
#include <cmath>
// cmath is a bunch of math functions which are imported from C++'s inbuilt library, they're accessed like:
    // std::FUNCTION(PARAM)
    // Where function is the name of the function you want to use, like square root, which is sqrt,
    // and PARAM is the value you want to operate on.

int main() {
  // Declare variables to hold the three components of a Quadratic equation.
  double a, b, c;
  
  // Load information from user.
  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  // Declare variables to hold the roots of the quad. equation.
  double root1, root2;

  // Calculate said roots.
  root1 = ((-1 * b) + std::sqrt((b * b) - 4 * a * c)) / (2 * a);
  root2 = ((-1 * b) - std::sqrt((b * b) - 4 * a * c)) / (2 * a);

  // Output said roots to screen.
  std::cout << "Root one is " << root1;
  std::cout << "\nRoot two is " << root2 << "\n";
}