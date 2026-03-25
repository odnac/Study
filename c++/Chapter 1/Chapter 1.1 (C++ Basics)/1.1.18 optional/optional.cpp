#include <iostream>
#include <optional>
#include <vector>
#include <string>

using namespace std;

optional<string> findUser(int id)
{
    if (id == 7)
    {
        return "Gemini";
    }
    return nullopt;
}

int main()
{
    auto user = findUser(7);

    if (user) // or user.has_value()
    {
        cout << "User found: " << *user << endl;
        cout << "User found: " << user.value() << endl;
    }
    else
    {
        cout << "User not found." << endl;
    }

    string name = findUser(99).value_or("Guest"); // .value_or()
    cout << "Welcome, " << name << endl;

    return 0;
}