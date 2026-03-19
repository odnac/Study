#include <iostream>
#include <format>
#include <string>

class Demo
{
private:
public:
    int get() { return 5; }
};

int get() { return 10; }

namespace NS
{
    int get() { return 20; }
}

int main()
{
    Demo d;
    std::cout << d.get() << std::endl;   // 5
    std::cout << NS::get() << std::endl; // 20
    std::cout << ::get() << std::endl;   // 10 // only global
    std::cout << get() << std::endl;     // 10 // local -> global

    return 0;
}