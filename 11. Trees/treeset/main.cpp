#include <iostream>
#include <vector>
#include "treeset.h"

void print_value(int x)
{
    std::cout << x << " ";
}

int suma_total = 0;

void suma(int x)
{
    suma_total += x;
}

int main()
{
    TreeSet<int> t {10, 5, 15, 2, 7, 11, 24};
    std::cout << t.contains(15) << "\n";
    std::cout << t.contains(1) << "\n";
    t.inorder(print_value);
    std::cout << "\n";
    t.inorder(suma);
    std::cout << suma_total << "\n";
    t.preorder(print_value);
    std::cout << "\n";
    t.postorder(print_value);
    std::cout << "\n";
    t.levelorder(print_value);
    std::cout << "\n";
    std::cout << t.height() << "\n";

    return 0;
}
