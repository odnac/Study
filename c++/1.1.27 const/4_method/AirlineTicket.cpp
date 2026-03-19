#include "AirlineTicket.h"
#include <iostream>

AirlineTicket::AirlineTicket() : m_passengerName{"Unknown Passenger"}, m_numberOfMiles{0}, m_hasEliteSuperRewardsStatus{false} {}
AirlineTicket::~AirlineTicket() {}

std::string AirlineTicket::getPassengerName() const { return m_passengerName; } // const
void AirlineTicket::setPassengerName(std::string name) { m_passengerName = name; }

int AirlineTicket::getNumberofMiles() const { return m_numberOfMiles; } // const
void AirlineTicket::setNumberOfMiles(int miles) { m_numberOfMiles = miles; }

bool AirlineTicket::hasEliteSuperRewardsStatus() const { return m_hasEliteSuperRewardsStatus; } // const
void AirlineTicket::setHasEliteSuperRewardsStatus(bool status) { m_hasEliteSuperRewardsStatus = status; }

double AirlineTicket::calculatePriceInDollars() const // const
{
    if (hasEliteSuperRewardsStatus())
    {
        return 0;
    }

    return getNumberofMiles() * 0.1;
}