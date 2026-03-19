#include <iostream>
#include <format>
#include <string>

class AirlineTicket
{
public:
    AirlineTicket();  // constructor
    ~AirlineTicket(); // destructor

private:
    std::string m_passengerName;
    int m_numberOfMiles;
    bool m_hasEliteSuperRewardsStatus;
};

// constructor initializer
#if 1
AirlineTicket::AirlineTicket() : m_passengerName{"Unknown Passenger"}, m_numberOfMiles{0}, m_hasEliteSuperRewardsStatus{false} // recommend
{
}
#elif
AirlineTicket::AirlineTicket()
{
    m_passengerName = "Unknown Passenger";
    m_numberOfMiles = 0;
    m_hasEliteSuperRewardsStatus = false;
}
#endif

int main()
{
    AirlineTicket myTicket;

    return 0;
}