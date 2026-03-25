#include <iostream>

void func(int i) { std::cout << "func(int)" << std::endl; }
void pfunc(int *p) { std::cout << "func(int*)" << std::endl; }

int main()
{
    // NULL is essentially a macro for 0 (an integer).
    // The compiler treats this as passing the number 0 to the function.
    func(NULL);

    // nullptr is a pointer literal introduced in C++11.
    // It strictly represents a "null pointer" and cannot be confused with an integer.
    pfunc(nullptr);
}