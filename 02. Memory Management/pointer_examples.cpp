#include <iostream>

void fun1(int a)
{
    a++;
}

void fun2(int *q)
{
    (*q)++;
}

int main()
{
    int x = 5;
    std::cout << "x  = " << x << "\n";
    std::cout << "&x = " << &x << "\n";
    std::cout << "sizeof(x) = " << sizeof(x) << "\n";

    int *p = &x;
    std::cout << "p  = " << p << "\n";
    std::cout << "&p = " << &p << "\n";
    std::cout << "sizeof(p) = " << sizeof(p) << "\n";
    std::cout << "*p = " << *p << "\n";

    *p = 10;
    std::cout << "x  = " << x << "\n";

    int y = 0;
    std::cout << "y = " << y << "\n";
    fun1(y);
    std::cout << "y = " << y << "\n";
    fun2(&y);
    std::cout << "y = " << y << "\n";

    return 0;
}
