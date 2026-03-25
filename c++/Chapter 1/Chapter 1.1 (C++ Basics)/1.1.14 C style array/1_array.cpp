#include <iostream>

using namespace std;

int main()
{

    // C style
    int aArray[3]{}; // Zero-initialization: All elements are set to 0.

    int bArray[]{1, 2, 3, 4}; // Automatic sizing: The compiler counts the elements (Size is 4).

    int cArray[3]{2}; // Partial initialization: First element is 2, others are 0.

    auto arrayLen = sizeof(bArray) / sizeof(bArray[0]);

    return 0;
}