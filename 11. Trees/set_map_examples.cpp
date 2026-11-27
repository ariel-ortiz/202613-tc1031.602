#include <iostream>
#include <set>
#include <map>

int main()
{
    std::set<int> x {6, 2, 4, 9, 5};
    x.insert(7);
    x.insert(1);
    for (int i : x) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    std::map<std::string, int> y;
    y["uno"] = 1;
    y["dos"] = 2;
    y["tres"] = 3;
    y["cuatro"] = 4;
    y["cinco"] = 5;
    for (auto p : y) {
        std::cout << p.first << ": " << p.second << "\n";
    }

    return 0;
}
