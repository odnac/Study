
/*
    using IntPtr = int* // type alias

    int* p1;
    intPtr p2;

    p1 = p2;
    p2 = p1;
*/

#include <iostream>
#include <vector>
#include <string>

#if 0
void processVector(const std::vector<std::basic_string<char>> &vec) //
{
    /* ... */
}

int main()
{
 
    std::vector<std::basic_string<char>> myVector; //
    processVector(myVector);

return 0;
}

#else

using typeAlias = std::basic_string<char>; // type alias

void processVector(const std::vector<typeAlias> &vec) //
{
    /* ... */
}

int main()
{

    std::vector<typeAlias> myVector; //
    processVector(myVector);

    return 0;
}
#endif
