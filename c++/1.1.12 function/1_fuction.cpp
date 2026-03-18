#include <iostream>
#include <format>

using namespace std;

void myFunction(int i, char c);

void myFunction(int i, char c)
{
    cout << format("the value of i is {}", i) << endl;
    cout << format("the value of c is {}", c) << endl;

    cout << "Entering function" << __func__ << endl; // __func__: Returns current function name as a string. Useful for debugging and logging.
}

int main()
{

    myFunction(8, 'a');

    return 0;
}