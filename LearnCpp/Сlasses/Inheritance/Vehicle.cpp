//
// Created by ok on 23.07.24.
//

#include "Vehicle.h"

/*
    Track semi(2, 200, 7, 44000);
    Track pickup(3, 28, 15, 2000);
    int dist = 252;

    cout << "Semi can carry " << semi.get_cargocap() << " pounds.\n";
    cout << "It has a range of " << semi.range() << " miles.\n";
    cout << "To do " << dist << " miles semi needs " << dist / semi.get_mpg() << " gallons of fuel.\n\n";

    cout << "Pickup can carry " << pickup.get_cargocap() << " pounds.\n";
    cout << "It has a range of " << pickup.range() << " miles.\n";
    cout << "To do " << dist << " miles pickup needs " << dist / pickup.get_mpg() << " gallons of fuel.\n\n";
*/

int Vehicle::range()
{
    return mpg * fuelcup;
}

int Vehicle::get_passengers()
{
    return passengers;
}

int Vehicle::get_fuelcup()
{
    return fuelcup;
}

int Vehicle::get_mpg()
{
    return mpg;
}

int Track::get_cargocap()
{
    return cargocap;
}
