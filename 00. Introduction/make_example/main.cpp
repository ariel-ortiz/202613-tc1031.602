#include <iostream>
#include "fact.h"

int main()
{
    int x = 5;
    std::cout << x << "! = " << factorial(x) << "\n";
    x = 6;
    std::cout << x << "! = " << factorial(x) << "\n";
    x = 3;
    std::cout << x << "! = " << factorial(x) << "\n";
    return 0;
}
