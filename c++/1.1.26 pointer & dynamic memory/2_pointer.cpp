#include <iostream>

int main()
{
    /*
        int *myIntegerStackPointer; // error, uninitialized variable
    */

    /*
        Free Store (Dynamic Allocation)
    */
    int *pIntegerFreeStorePointer{nullptr}; // null pointer
    pIntegerFreeStorePointer = new int;     // free store

    *pIntegerFreeStorePointer = 8;

    std::cout << pIntegerFreeStorePointer << std::endl;  // 0x.....
    std::cout << *pIntegerFreeStorePointer << std::endl; // 8

    delete pIntegerFreeStorePointer;
    pIntegerFreeStorePointer = nullptr;

    /*
        Stack (Address-of Operator)
    */
    int i{8};
    int *pIntegerStackPointer{&i}; // stack

    std::cout << pIntegerStackPointer << std::endl;  // 0x.....
    std::cout << *pIntegerStackPointer << std::endl; // 8

    // NO DELETE!
    // pIntegerStackPointer will be gone automatically when main() ends.
}