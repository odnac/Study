#ifndef AIRLINETICKET_H
#define AIRLINETICKET_H

#include <string>

class AirlineTicket
{
public:
    AirlineTicket();
    ~AirlineTicket();

    std::string getPassengerName() const; // const
    void setPassengerName(std::string name);

    int getNumberofMiles() const; // const
    void setNumberOfMiles(int miles);

    bool hasEliteSuperRewardsStatus() const; // const
    void setHasEliteSuperRewardsStatus(bool status);

    double calculatePriceInDollars() const; // const

private:
    std::string m_passengerName;
    int m_numberOfMiles;
    bool m_hasEliteSuperRewardsStatus;
};

#endif