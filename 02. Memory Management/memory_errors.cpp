#include <iostream>

int main()
{
    int *a = new int {5};
    int *b = new int[5] {4, 8, 16};

    std::cout << "a = " << a << "\n";
    std::cout << "*a = " << *a << "\n";

    std::cout << "b = " << b << "\n";
    std::cout << "*b = " << *b << "\n";
    std::cout << "b[2] = " << b[2] << "\n";
    std::cout << "4[b] = " << 4[b] << "\n";  // No recomendable
    std::cout << "b[100] = " << b[100] << "\n";

    delete a;
    a = nullptr;

    delete [] b;

    return 0;
}
