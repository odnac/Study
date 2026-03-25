#include <iostream>

struct Employee
{
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
};

Employee *getEmployee()
{
    Employee *pNewEmp = new Employee;

    pNewEmp->firstInitial = 'J';
    pNewEmp->lastInitial = 'D';
    pNewEmp->employeeNumber = 42;
    pNewEmp->salary = 80000;

    return pNewEmp;
}

int main()
{
    /*
        struct pointer
    */
    Employee *pEmployee{getEmployee()};

    std::cout << (*pEmployee).salary << std::endl;
    std::cout << pEmployee->salary << std::endl;

    /*
        short-circuiting logic
    */
    bool isValidSalary{(pEmployee && pEmployee->salary > 0)};
    bool isValidSalary{(pEmployee != nullptr && pEmployee->salary > 0)};
}