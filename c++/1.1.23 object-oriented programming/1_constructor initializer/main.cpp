#include <iostream>
#include <format>
#include "AirlineTicket.h"

int main()
{
    AirlineTicket myTicket;
    myTicket.setPassengerName("Sherman T. Socketwrench");
    myTicket.setNumberOfMiles(700);
    double cost{myTicket.calculatePriceInDollars()};

    std::cout << std::format("This ticket will cost ${}", cost) << std::endl;

    return 0;
}