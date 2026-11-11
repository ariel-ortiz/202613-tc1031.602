#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList a {4, 8, 15, 16};
    std::cout << a << "\n";
    std::cout << first(a) << "\n";
    std::cout << rest(a) << "\n";
    std::cout << cons(42, a) << "\n";
    std::cout << cons(108, cons(42, a)) << "\n";
    std::cout << first(IntList {6, 7, 8}) << "\n";
    std::cout << is_empty(a) << "\n";
    std::cout << is_empty(IntList {}) << "\n";
    std::cout << size(rest(a)) << "\n";
    std::cout << cons_end(108, a) << "\n";

    return 0;
}
