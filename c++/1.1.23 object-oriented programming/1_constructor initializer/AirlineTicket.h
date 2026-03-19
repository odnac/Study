#ifndef AIRLINETICKET_H
#define AIRLINETICKET_H

#include <string>

class AirlineTicket
{
public:
    AirlineTicket();  // constructor
    ~AirlineTicket(); // destructor

    std::string getPassengerName();
    void setPassengerName(std::string name);

    int getNumberofMiles();
    void setNumberOfMiles(int miles);

    bool hasEliteSuperRewardsStatus();
    void setHasEliteSuperRewardsStatus(bool status);

    double calculatePriceInDollars();

private:
    std::string m_passengerName;
    int m_numberOfMiles;
    bool m_hasEliteSuperRewardsStatus;
};

#endif