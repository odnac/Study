#include <iostream>

int main()
{
    int arraySize{8};
    int *pVariableSizedArray{new int[arraySize]}; // stack + free store

    pVariableSizedArray[3] = 2;
    *(pVariableSizedArray + 3) = 2;

    delete[] pVariableSizedArray;
    pVariableSizedArray = nullptr;
    return 0;
}