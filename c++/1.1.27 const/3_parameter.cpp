#include <iostream>
#include <string>

/*
    3. const Parameter
*/

// 1. Pointer Version: Pass by Address
// Uses '*' to access the value. Needs null check for safety.
void mysteryFunction(const std::string *someString)
{
    if (someString != nullptr)
    { // Safety first!
        // *someString = "Test"; // ERROR: Data is const
        std::cout << "Pointer version: " << *someString << std::endl;
    }
}

// 2. Reference Version: Pass by Alias (Industry Standard)
// No '*' needed. Guaranteed to exist (no null check needed).
void mysteryFunction(const std::string &someString)
{
    // someString = "Test"; // ERROR: Data is const
    std::cout << "Reference version: " << someString << std::endl;
}

int main()
{
    std::string myString{"The string"};

    // Calling the Pointer version (Passing the address)
    mysteryFunction(&myString);

    // Calling the Reference version (Passing the object itself)
    mysteryFunction(myString);

    return 0;
}