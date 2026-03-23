#include <iostream>
#include <stdexcept>

double divideNumbers(double numerator, double denominator)
{
    if (denominator == 0)
    {
        throw std::invalid_argument("Denominator cannot be 0."); // throw
    }

    return numerator / denominator;
}

int main()
{
    try
    {
        std::cout << divideNumbers(2.5, 0.5) << std::endl; // 5
        std::cout << divideNumbers(2.3, 0) << std::endl;   // Exception caught: Denominator cannot be 0.
        std::cout << divideNumbers(4.5, 2.5) << std::endl;
    }
    catch (const std::invalid_argument &exception)
    {
        std::cout << "Exception caught: " << exception.what() << std::endl; // exception.what()
    }

    return 0;
}