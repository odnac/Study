#include <iostream>

namespace mycode
{
    void foo()
    {
        std::cout << "foo() called in the mycode namespace" << std::endl;
    }
}

#if 1

int main()
{
    mycode::foo(); // scope resolution operator(::) // recommend
    return 0;
}

#else

using mycode::foo;      // using declaration
using namespace mycode; // using directive

int main()
{
    foo();
    return 0;
}

#endif

/*
    scope resolution operator(::) > using declaration > using directive
*/