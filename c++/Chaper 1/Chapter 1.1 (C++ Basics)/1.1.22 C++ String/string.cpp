#include <iostream>
#include <format>
#include <string> // for string

using namespace std;

int main()
{
    string myString{"Hello, World"}; // string

    cout << format("The value of myString is {}", myString) << endl;
    cout << format("The second letter is {}", myString[1]) << endl;

    return 0;
}