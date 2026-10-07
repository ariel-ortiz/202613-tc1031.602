#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>
void print_info(const std::vector<T>& v)
{
    std::cout << "v.capacity() = " << v.capacity() << "\n";
    std::cout << "v.size() = " << v.size() << "\n";
    for (T elem : v) {
        std::cout << elem << " ";
    }
    std::cout << "\n\n";
}

// Regresa true si a debe ir antes de b
bool compare_by_size(const std::string& a, const std::string& b)
{
    return a.size() <= b.size();
}

int main()
{
    std::vector<char> a(5, '*');
    std::vector<int> b {4, 8, 15, 16, 23, 42};
    std::vector<double> c;
    c.reserve(10);

    print_info(a);
    print_info(b);
    print_info(c);

    a.push_back('!');
    b.push_back(108);
    c.push_back(3.14);

    print_info(a);
    print_info(b);
    print_info(c);

    std::cout << "b.back() = " << b.back() << "\n";
    b.pop_back();
    print_info(b);

    std::cout << "b[5] = " << b[5] << "\n";
    std::cout << "b.at(5) = " << b.at(5) << "\n";

    std::vector<std::string> e {
        "lunes",
        "martes",
        "miercoles",
        "jueves",
        "viernes",
        "sabado",
        "domingo"
    };

    std::cout<< "\n";
    print_info(e);
    std::sort(e.begin(), e.end(), &compare_by_size);
    print_info(e);

    return 0;
}
