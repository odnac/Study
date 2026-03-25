#include <iostream>
#include <format>
#include "employee.h"

using namespace std;

int main()
{
#if 1                                         // Initialization
    Employee anEmployee{'J', 'D', 42, 80000}; // Setting the initial value when the variable is born.

#else
    Employee anEmployee;
    anEmployee.firstInitial = 'J'; // Assignment
    anEmployee.lastInitial = 'D';  // Changing the value after the variable already exists.
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;
#endif

    cout << format("Employee: {} {}", anEmployee.firstInitial, anEmployee.lastInitial) << endl;
    cout << format("Number: {}", anEmployee.employeeNumber) << endl;
    cout << format("Salary: ${}", anEmployee.salary) << endl;

    return 0;
}