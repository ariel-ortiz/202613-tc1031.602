#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<int> a {1, 2, 3};
    a.insert_front(5);
    a.insert_front(7);
    a.insert_front(6);
    a.insert_back(8);
    a.insert_back(9);
    a.insert_back(10);
    std::cout << a << "\n";
    std::cout << a.remove_front() << "\n";
    std::cout << a << "\n";
    return 0;
}
