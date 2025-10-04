// The const keyword in C++ is used to declare variables, pointers, function parameters, and member functions as constant, meaning their values cannot be modified after initialization. It enforces immutability, preventing accidental changes and helping ensure correctness.

//In C++, the naming convention for constants, including those declared with the const keyword, typically follows the style of using uppercase letters with words separated by underscores, such as MAX_SIZE, PI, or DEFAULT_VALUE. This convention helps to distinguish constants from other variables easily

#include<iostream>

int main () {

    const double PI = 3.14; // Variable declaration and initialization

    double radius = 5.0; // Variable declaration and initialization

    double circumference; // Variable declaration    

    circumference = pi * 2 * radius; // Variable initialization

    std::cout << "Circumference: " << circumference << '\n';
}