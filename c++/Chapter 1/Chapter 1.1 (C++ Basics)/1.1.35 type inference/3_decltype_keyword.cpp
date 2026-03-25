#include <string>

const std::string message{"TEST"};
const std::string &foo() { return message; }

int main()
{
    int x{123};
    decltype(x) y{456}; // int type

    decltype(foo()) f2{foo()}; // const string& type
}