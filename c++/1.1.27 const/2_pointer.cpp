
int main()
{
    /*
        2. const Pointer
    */
    const int *ip;
    ip = new int[10]; // OK: 'ip' can point to a new address.
    ip[4] = 5;        // Error: You cannot change the VALUE inside the room.

    int const *ip;
    ip = new int[10]; // OK
    ip[4] = 5;        // Error: Value is still constant.

    int *const ip{nullptr}; // Must be initialized immediately.
    ip = new int[10];       // Error: You cannot change the ADDRESS once set.
    ip[4] = 5;              // OK: You CAN change the value inside the room.

    const int(*p);   // 값 상수화
    int *(const ip); // 주소 상수화
}