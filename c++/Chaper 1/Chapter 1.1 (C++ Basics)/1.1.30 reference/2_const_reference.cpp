#include <iostream>
#include <format>
#include <string>

std::string getString()
{
    return "Hello World!";
}

int main()
{
    int z{20};
    const int &zRef{z};

    // 1. const COMPILE ERROR
    // zRef = 4;

    z = 30;
    std::cout << std::format("zRef {}", zRef) << std::endl;

    // 2. R-value COMPILE ERROR
    // int &unnamedRef1{5};

    // const T& + R-value
    const int &unnamedRef2{10};

    // 3. function return R-value
    // std::string &string1{getString()}; // COMPILE ERROR
    const std::string &string2{getString()};

    // 4. pointer reference , reference pointer
    int *intP{nullptr};
    int *&ptrRef{intP};

    ptrRef = new int;
    *ptrRef = 5;

    std::cout << std::format("intP : {}\n", (void *)intP);     // 0x...
    std::cout << std::format("intP : {}\n", *intP);            // 5
    std::cout << std::format("ptrRef : {}\n", (void *)ptrRef); // 0x...
    std::cout << std::format("ptrRef : {}\n", *ptrRef);        // 5

    int x{3};
    int &xRef{x};
    int *xPtr{&xRef};
    *xPtr = 100;

    std::cout << std::format("x : {}\n", x);                // 100
    std::cout << std::format("&x: {}\n", (void *)&x);       // 0x...
    std::cout << std::format("xRef : {}\n", xRef);          // 100
    std::cout << std::format("&xRef: {}\n", (void *)&xRef); // 0x...
    std::cout << std::format("*xPtr : {}\n", *xPtr);        // 100
    std::cout << std::format("xPtr : {}\n", (void *)xPtr);  // 0x...

    // 5.structured binding and reference
    std::pair myPair{"hello", 5};
    auto &[theString, theInt]{myPair};
    const auto &[theString, theInt]{myPair};

    return 0;
}