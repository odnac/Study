
/*
    // copy list initialization
    T obj = {arg1, arg2, ...};

    // direct list initialization
    T obj {arg1, arg2, ...};
*/

#include <initializer_list>

int main()
{
    // copy list
    auto a = {11};     // initializer_list<int>
    auto b = {11, 22}; // initializer_list<int>

    // direct
    auto c{11}; // initializer_list<int>
    // auto d{11, 22}; // COMPILE ERROR / requires exactly one element
    // auto e{11, 2.2}; // COMPILE ERROR / deduced conflicting types for parameter and requires exactly one element
}