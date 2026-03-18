#include <iostream>
#include <format>
#include <limits>

using namespace std;

int main()
{
    cout << "int:\n";
    cout << format("Max int value: {}\n", numeric_limits<int>::max());       // For integers
    cout << format("Min int value: {}\n", numeric_limits<int>::min());       // min() and lowest() are the same.
    cout << format("Lowest int value: {}\n", numeric_limits<int>::lowest()); // lowest() and min() are the same.

    cout << "double:\n";
    cout << format("Max double value: {}\n", numeric_limits<double>::max());       // For floating-points:
    cout << format("Min double value: {}\n", numeric_limits<double>::min());       // min()    : Smallest POSITIVE value (closest to 0).
    cout << format("Lowest double value: {}\n", numeric_limits<double>::lowest()); // lowest() : Smallest NEGATIVE value (most negative).

    return 0;
}

/*
    Visualizing Floating-Point (double/float) Limits:

    lowest()             0     min()              max()
    <----|-----------------|-------|------------------|---->
    (Most Negative)             (Smallest Positive)   (Largest Positive)
                                 (Closest to zero)
*/
