#include <iostream>
#include <format>

using namespace std;

int main()
{
    int i{0};
    while (i < 5)
    {
        cout << format("This is silly. {}", i) << endl;
        ++i;
    }

    return 0;
}