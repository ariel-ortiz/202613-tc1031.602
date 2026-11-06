#include <iostream>

int main()
{
    std::hash<int> h1;
    std::hash<double> h2;
    std::hash<std::string> h3;

    std::cout << h1(42) << "\n";
    std::cout << h2(3.1416) << "\n";
    std::cout << h3("Hello") << "\n";
    std::cout << h3("Hello") << "\n";
    std::cout << h3("hello") << "\n";

    return 0;
}
