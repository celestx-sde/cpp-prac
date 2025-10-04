#include <iostream>
#include <vector>

// Typedefs in C++ are used to create an alias for an existing type, making code more readable and easier to manage. They can simplify complex type definitions, especially when dealing with templates or long type names. This is particularly useful in large codebases or when working with third-party libraries, as it allows developers to use more meaningful names for types that better convey their purpose or usage.

// typedef std::string text_t;

// int main() {

//     text_t greeting = "Hello, World!";

//     std::cout << greeting << '\n'; // Outputs: Hello, World!

//     return 0;

// }

typedef int number_t;
int main() {

    number_t count = 42;

    std::cout << "Count: " << count << '\n'; // Outputs: Count: 42

    return 0;

}


//The reason int doesn't have std:: is because int is a basic built-in type in C++. It's part of the core language itself and not inside any namespace.

//On the other hand, std::string is a class defined inside the standard library, which is organized within the std namespace. This namespace helps keep library code separate and avoids name conflicts.

