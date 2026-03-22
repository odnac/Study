#include <iostream>
#include <vector>

struct OddsAndEvens
{
    std::vector<int> odds, evens;
};

OddsAndEvens separateOddsAndEvens(const std::vector<int> &arr)
{
    std::vector<int> odds, evens;

    for (int i : arr)
    {
        if (i % 2 == 1)
        {
            odds.push_back(i);
        }
        else
        {
            evens.push_back(i);
        }
    }

    return OddsAndEvens{.odds = odds, .evens = evens};
}

int main()
{
    std::vector<int> vecUnSplit{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto result{separateOddsAndEvens(vecUnSplit)};

    std::cout << "Odds : ";
    for (int num : result.odds)
    {
        std::cout << num << " "; // 1 3 5 7 9
    }
    std::cout << "\n";

    std::cout << "Evens : ";
    for (int num : result.evens)
    {
        std::cout << num << " "; // 2 4 6 8 10
    }
    std::cout << "\n";

    return 0;
}