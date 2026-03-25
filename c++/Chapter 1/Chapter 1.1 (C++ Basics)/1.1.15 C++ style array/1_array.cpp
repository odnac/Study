#include <iostream>
#include <format>
#include <array> // For std::size (C++17) or std::array

using namespace std;

int main()
{
    array<int, 3> arr{9, 8, 7};

    cout << format("Array size = {}", arr.size()) << endl;
    cout << format("2nd element = {}", arr[1]) << endl;

    // CTAD : class template argument deduction
    array array{9, 8, 7, 6, 5};

    cout << format("Array size = {}", array.size()) << endl;
    cout << format("2nd element = {}", array[4]) << endl;

    return 0;
}