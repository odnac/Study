#include "AirlineTicket.h"
#include <iostream>

AirlineTicket::AirlineTicket() : m_passengerName{"Unknown Passenger"}, m_numberOfMiles{0}, m_hasEliteSuperRewardsStatus{false} {}
AirlineTicket::~AirlineTicket() {}

std::string AirlineTicket::getPassengerName() { return m_passengerName; }
void AirlineTicket::setPassengerName(std::string name) { m_passengerName = name; }

int AirlineTicket::getNumberofMiles() { return m_numberOfMiles; }
void AirlineTicket::setNumberOfMiles(int miles) { m_numberOfMiles = miles; }

bool AirlineTicket::hasEliteSuperRewardsStatus() { return m_hasEliteSuperRewardsStatus; }
void AirlineTicket::setHasEliteSuperRewardsStatus(bool status) { m_hasEliteSuperRewardsStatus = status; }

double AirlineTicket::calculatePriceInDollars()
{
    if (hasEliteSuperRewardsStatus())
    {
        return 0;
    }

    return getNumberofMiles() * 0.1;
}