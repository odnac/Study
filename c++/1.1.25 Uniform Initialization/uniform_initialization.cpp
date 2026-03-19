
struct Employee
{
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary{75000};
};

// uniform initialization
Employee anEmployee{'J', 'D', 42, 80000};

// designated initializer
Employee anEmployee{
    .firstInitial = 'J',
    .lastInitial = 'D',
    .employeeNumber = '42',
    .salary = 80000};