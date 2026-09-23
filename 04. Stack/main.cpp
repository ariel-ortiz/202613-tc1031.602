#include <iostream>
#include "stack.h"

int main()
{
    Stack<int> s(4);

    std::cout << "Capacity = " << s.capacity() << "\n";
    std::cout << "Size = " << s.size() << "\n";

    s.push(4);
    s.push(8);
    s.push(15);

    std::cout << "Capacity = " << s.capacity() << "\n";
    std::cout << "Size = " << s.size() << "\n";
    std::cout << "Peek = " << s.peek() << "\n";
    std::cout << "Pop = " << s.pop() << "\n";
    std::cout << "Size = " << s.size() << "\n";
    std::cout << "Peek = " << s.peek() << "\n";
    s.clear();
    std::cout << "Capacity = " << s.capacity() << "\n";
    std::cout << "Size = " << s.size() << "\n";

    return 0;
}
