#include <iostream>
#include <string>

using namespace std;

struct User
{
    string name;
    int id;
};

int main()
{
    User myUser = {"Gemini", 7};

    auto [userName, userId]{myUser}; // structured binding

    cout << "Name: " << userName << ", ID: " << userId << endl;
    return 0;
}