#include <string>
#include <utility>

float getFoo()
{
    /* ... */

    return 5.5;
}

const std::string message{"TEST"};
const std::string &foo() { return message; }

int main()
{

    // auto
    auto x{123};
    auto result{getFoo()};

    // auto&
    auto f1{foo()};        // string type / copy
    const auto &f2{foo()}; // const reference type

    std::string str{"C++"};
    auto result{as_const(str)}; // string type / copy

    // auto*
    int i{123};
    auto p{&i};  // int* type
    auto *p{&i}; // int* type/ recommend

    const auto p1{&i}; // int* const

    auto const p2{&i}; // int* const

    const auto *p3{&i}; // const int*

    auto *const p4{&i}; // int* const

    const auto *const p5{&i}; // const int* const
}