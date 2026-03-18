#include <iostream>
#include <format>

using namespace std;

int main()
{
    for (array arr{1, 2, 3, 4}; int i : arr)
    {
        cout << i << endl;
    }

    return 0;
}