#include <iostream>
#include <utility> // for std::pair
#include <string>

using namespace std;

int main()
{
    pair<string, int> student{"Gemini", 100};

    cout << "Name: " << student.first << endl;   // first
    cout << "Score: " << student.second << endl; // second

    // CTAD
    pair myPair{1.1, "Apple"}; // pair<double, const char*>

    return 0;
}