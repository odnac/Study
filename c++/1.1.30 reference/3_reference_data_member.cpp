#include <iostream>
#include <format>
#include <string>

class MyClass
{
public:
    MyClass(int &ref) : m_ref{ref}
    {
        std::cout << std::format("ref : {}\n", ref);               // 10
        std::cout << std::format("&ref : {}\n", (void *)&ref);     // 0x...
        std::cout << std::format("m_ref : {}\n", m_ref);           // 10
        std::cout << std::format("&m_ref : {}\n", (void *)&m_ref); // 0x...
    }

private:
    int &m_ref;
};

main()
{
    int x = 10;
    MyClass myObj(x);

    std::cout << std::format("x : {}\n", x);           // 10
    std::cout << std::format("&x : {}\n", (void *)&x); // 0x...

    return 0;
}