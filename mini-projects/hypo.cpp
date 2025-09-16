#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a;
    double b;
    double c;

    std::cout << "Enter size of a: ";
    std::cin >> a;

    std::cout << "Enter size of b: ";
    std::cin >> b;

    a = pow(a,2);
    b = pow(b,2);
    c= sqrt (a+b);

    std::cout << "The hypotenuse of the triangle is: " << c << endl;

    return 0;
}
