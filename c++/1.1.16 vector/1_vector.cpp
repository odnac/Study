#include <iostream>
#include <format>
#include <vector> // For std::vector

using namespace std;

int main()
{
    vector<int> myVec{11, 22};

    myVec.push_back(33); // push_back
    myVec.push_back(44); // push_back

    cout << format("1st element = {}", myVec[0]) << endl;
    cout << format("2nd element = {}", myVec[1]) << endl;

    // CTAD : class template argument deduction
    vector myVector{11, 22};

    return 0;
}