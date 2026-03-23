#include <iostream>
#include <compare> // <=>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    auto result = (a <=> b); // auto / std::strong_ordering

    if (result < 0) // std::strong_ordering is designed to be comparable with the literal 0 through operator overloading.
    {
        cout << "a is less than b" << endl;
    }
    else if (result == 0)
    {
        cout << "a is equal to b" << endl;
    }
    else if (result > 0)
    {
        cout << "a is greater than b" << endl;
    }

    return 0;
}