#include <iostream>
#include <utility>

int main()
{
    std::string str{"C++"};
    const std::string &constStr{as_const(str)};

    return 0;
}