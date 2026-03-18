#include <iostream>
#include <format>

using namespace std;

int main()
{

    int uninitializedInt;
    int zeroInitializedInt{}; // {} : zero initialization
    int initializedInt{7};    // uniform initialization

    cout << format("Uninitialized (Garbage): {}\n", uninitializedInt);
    cout << format("Zero-initialized: {}\n", zeroInitializedInt);
    cout << format("Uniformly-initialized: {}\n", initializedInt);

    return 0;
}