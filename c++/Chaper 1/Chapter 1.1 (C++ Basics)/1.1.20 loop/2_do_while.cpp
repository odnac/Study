#include <iostream>
#include <format>

using namespace std;

int main()
{
    int i{100};
    do
    {
        cout << format("This is silly. {}", i) << endl;
        ++i;
    } while (i < 5);

    return 0;
}