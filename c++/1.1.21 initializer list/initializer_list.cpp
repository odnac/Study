#include <iostream>
#include <format>
#include <initializer_list> // for initializer_list

using namespace std;

int makeSum(initializer_list<int> values) // <int>
{
    int total{0};
    for (int value : values)
    {
        total += value;
    }

    return total;
}

int main()
{
    int a{makeSum({1, 2, 3})};            // <int>
    int b{makeSum({10, 20, 30, 40, 50})}; // <int>

    cout << format("{} {}", a, b);

    return 0;
}