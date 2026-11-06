#include <iostream>
#include <unordered_map>
#include <cctype>

int main()
{
    std::string frase = "Pablito clavo un clavito en la calva de un calvito";
    std::unordered_map<char, int> simbolos;

    for (char c : frase) {
        c = toupper(c);
        if (simbolos.count(c) == 0) {
            simbolos[c] = 1;
        } else {
            simbolos[c]++;
        }
    }

    for (auto p : simbolos) {
        std::cout << p.first << ": " << p.second << "\n";
    }

    return 0;
}
