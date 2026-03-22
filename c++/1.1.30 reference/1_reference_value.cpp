#include <iostream>
#include <format>

int main()
{
    int x = 10;
    int &xRef{x}; // reference value

    std::cout << std::format("x {}", x) << std::endl;       // 10
    std::cout << std::format("xRef {}", xRef) << std::endl; // 10

    int y{3}, z{4};
    int &yRef{y};

    std::cout << std::format("y {}", y) << std::endl;       // 3
    std::cout << std::format("z {}", z) << std::endl;       // 4
    std::cout << std::format("yRef {}", yRef) << std::endl; // 3

    yRef = z;

    std::cout << std::format("y {}", y) << std::endl;       // 4
    std::cout << std::format("z {}", z) << std::endl;       // 4
    std::cout << std::format("yRef {}", yRef) << std::endl; // 4

    return 0;
}