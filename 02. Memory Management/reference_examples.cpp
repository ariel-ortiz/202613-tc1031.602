#include <iostream>

void fun3(int &a)
{
    a++;
}

int main()
{
    int x = 5;
    int &r = x;

    std::cout << "x = " << x << "\n";
    std::cout << "r = " << r << "\n";

    r = 10;

    std::cout << "x = " << x << "\n";
    std::cout << "r = " << r << "\n";

    int y = 0;
    std::cout << "y = " << y << "\n";
    fun3(y);
    std::cout << "y = " << y << "\n";

    return 0;
}
