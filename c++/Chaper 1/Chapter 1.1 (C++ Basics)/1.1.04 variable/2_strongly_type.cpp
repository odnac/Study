
/*
    signed -, 0, +
    unsigned 0, +
*/

/*
    (signed) short 2byte      : short s {13};, signed short s {13};
    (signed) int   4byte      : int i {-7};,   signed int i {-7};
    (signed) long  4byte      : long l {-7L};
    (signed) long  long  8byte: long long ll {14LL};

    unsigned short 2byte      : unsigned short s {2U};
    unsigned int   4byte      : unsigned int i {5U};
    unsigned long  4byte      : unsigned long l {5400UL};
    unsigned long  long  8byte: unsigned long long ll {14ULL};
*/

/*
         float : float f {7.2f};
         double: double d {7.2};
    long double: long double d {16.98L};
*/

/*
             char: char ch {'m'};
    unsigned char:
    signed   char:
*/

/*
    char8_t  : char8_t c8 {u8'm'};   // u8
    char16_t : char16_t c16 {u'm'};  // u
    char32_t : char32_t c8 {U'm'};   // U
*/

/*
    wchar_t : wchar_t w {L'm'};  // L
*/

/*
    bool: bool b {true};
*/

/*
    #include <cstddef>

    std::byte b {42}; // 1byte
*/