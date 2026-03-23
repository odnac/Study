#include <iostream>
#include <format>

using namespace std;

int main()
{
    for (int i{0}; i < 5; ++i)
    {
        cout << format("This is silly. {}", i) << endl;
    }

    return 0;
}