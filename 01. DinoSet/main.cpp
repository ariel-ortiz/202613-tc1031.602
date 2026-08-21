#include <iostream>
#include "dinoset.h"

int main()
{
    DinoSet a, b, c;
    
    a.add(DinoId::velociraptor);
    a.add(DinoId::pteranodon);
    a.add(DinoId::tyrannosaurus);
    
    b.add(DinoId::tyrannosaurus);
    b.add(DinoId::stegosaurus);
    
    c = a + b;
    
    std::cout << "a = " << a.to_string() << "\n";
    std::cout << "b = " << b.to_string() << "\n";
    std::cout << "c = " << c.to_string() << "\n";

    return 0;
}
