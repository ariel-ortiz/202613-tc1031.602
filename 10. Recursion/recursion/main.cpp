#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList a {4, 8, 15, 16};
    std::cout << sum(a) << "\n";
    std::cout << sum(IntList {}) << "\n";
    std::cout << duplicate(a) << "\n";
    std::cout << duplicate(duplicate(a)) << "\n";
    std::cout << last(a) << "\n";

    return 0;
}
