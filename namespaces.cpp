// Namespaces in C++ are used to group related identifiers — such as variables, functions, classes, and objects — under a unique name, helping to organize code and prevent naming conflicts when different libraries or parts of code use the same names. This is especially useful as projects grow larger or when integrating multiple libraries that may have overlapping names.

   // The scope resolution operator in C++ is written as :: and is used to specify the scope in which an identifier (such as a variable, function, or class) is defined, helping resolve ambiguities when the same name exists in multiple scopes.


#include <iostream>

namespace first {

    int x = 1;
}
int main() {

    int x = 0;

    std::cout << x << std::endl;        // Outputs: 0 (local x)

    std::cout << first::x << std::endl; // Outputs: 1 (x from namespace first)


    return 0;
}