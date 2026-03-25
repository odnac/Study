#include <iostream>
#include <string>

void printString(const std::string &myString) // const
{
    std::cout << myString << std::endl;
}

int main()
{
    std::string someString{"Hello World"};
    printString(someString);
    printString("Hello World"); // const

    return 0;
}