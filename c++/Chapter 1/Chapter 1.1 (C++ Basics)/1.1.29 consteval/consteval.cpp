
// consteval : compiler work
consteval int getSquare(int n)
{
    return n * n;
}

int main()
{
    // 1. OK
    int a = getSquare(5);

    // 2. ERROR
    int x = 5;
    // int b = getSquare(x); // COMPILE ERROR!
}