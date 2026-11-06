#include <iostream>
#include <unordered_map>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> colores;

    colores.insert("rojo");
    colores.insert("verde");
    colores.insert("azul");
    colores.insert("rojo");

    std::cout << colores.size() << "\n";
    std::cout << colores.count("rojo") << "\n";
    std::cout << colores.count("negro") << "\n";

    for (std::string s : colores) {
        std::cout << s << " ";
    }
    std::cout << "\n";

    std::unordered_map<std::string, double> constantes;
    constantes["pi"] = 3.1416;
    constantes["e"] = 2.7182;
    constantes["sqrt2"] = 1.4142;
    constantes["phi"] = 1.618;

    std::cout << constantes.size() << "\n";
    std::cout << constantes["e"] << "\n";
    std::cout << constantes["x"] << "\n";
    std::cout << constantes.size() << "\n";
    constantes.erase("pi");
    std::cout << constantes.size() << "\n";

    for (auto p : constantes){
        std::cout << p.first << ": " << p.second << "\n";
    }

    std::cout << constantes.count("pi") << "\n";
    std::cout << constantes.count("e") << "\n";

    return 0;
}
