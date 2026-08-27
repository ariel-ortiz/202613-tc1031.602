// Program that exemplifies the memory layout of a C++ program.
// See class notes for more details.
// 2026-08-26

#include <iostream>

int c = 3;
int d = 4;

void some_fun()
{
}

int e;

const int a = 1;
const int b = 2;

int f;

int main()
{
    int *g = new int(5);
    int *h = new int(6);

    int i;
    int j;

    std::cout << "Text Segment\n";
    std::cout << "&some_fun = " << reinterpret_cast<void*>(&some_fun) << "\n";
    std::cout << "&main     = " << reinterpret_cast<void*>(&main) << "\n\n";

    std::cout << "Read Only Data Segment\n";
    std::cout << "&a        = " << &a << "\n";
    std::cout << "&b        = " << &b << "\n\n";

    std::cout << "Initialized Data Segment\n";
    std::cout << "&c        = " << &c << "\n";
    std::cout << "&d        = " << &d << "\n\n";

    std::cout << "Uninitialized Data Segment\n";
    std::cout << "&e        = " << &e << "\n";
    std::cout << "&f        = " << &f << "\n\n";

    std::cout << "Heap\n";
    std::cout << "g         = " << g << "\n";
    std::cout << "h         = " << h << "\n\n";

    delete g;
    delete h;

    std::cout << "Stack\n";
    std::cout << "&i        = " << &i << "\n";
    std::cout << "&j        = " << &j << "\n\n";

    return 0;
}
