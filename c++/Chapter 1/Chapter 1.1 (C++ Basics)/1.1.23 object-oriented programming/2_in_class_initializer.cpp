#include <iostream>
#include <format>
#include <string>

class AirlineTicket
{
public:
    AirlineTicket();  // constructor
    ~AirlineTicket(); // destructor

private:
    // in-class initializer
    std::string m_passengerName{"Unknown Passenger"};
    int m_numberOfMiles{0};
    bool m_hasEliteSuperRewardsStatus{false};
};

int main()
{
    AirlineTicket myTicket;

    return 0;
}