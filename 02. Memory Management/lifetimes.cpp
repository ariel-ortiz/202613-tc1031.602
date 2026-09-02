#include <iostream>

class X {

public:

    X(const std::string name): _name(name)
    {
        std::cout << "Creando " << _name << "\n";
    }

    ~X()
    {
        std::cout << "Destruyendo " << _name << "\n";
    }

private:

    std::string _name;
};

X b("B");

void fun()
{
    std::cout << "Inicio de fun\n";
    X e("E");
    X f("F");
    std::cout << "Final de fun\n";
}

int main()
{
    std::cout << "Inicio de main\n";
    fun();
    X a("A");
    X d("D");
    X *p = new X("P");
    fun();
    std::cout << "Final de main\n";
    delete p;
    return 0;
}

X c("C");
