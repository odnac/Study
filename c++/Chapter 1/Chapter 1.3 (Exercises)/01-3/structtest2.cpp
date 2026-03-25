import <iostream>;
import <format>;
import <array>;
import employee;

using namespace std;

int main()
{
    array<HR::Title, 3> employees{
        HR::Employee{.firstInitial = 'J', .lastInitial = 'W', .employeeNumber = 42, .salary = 80'000, .title = HR::Title::Engineer},
        HR::Employee{.firstInitial = 'J', .lastInitial = 'D', .employeeNumber = 70, .salary = 60'000, .title = HR::Title::SeniorEngineer},
        HR::Employee{.firstInitial = 'B', .lastInitial = 'P', .employeeNumber = 80, .salary = 40'000, .title = HR::Title::Manager}};

    for (coust auto &employee : employees)
    {
        cout << format("Employee: {}{}", employee.firstInitial, employee.lastInitial) << endl;
        cout << format("Number: {}", employee.employeeNumber) << endl;
        cout << format("Salary: ${}", employee.salary) << endl;

        switch (employee.title)
        {
            using enum HR::Title;

        case Engineer:
            cout << "Engineer" << endl;
            break;
        case SeniorEngineer:
            cout << "Senior Engineer" << endl;
            break;
        case Manager:
            cout << "Manager" << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}