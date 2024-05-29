//
// Created by ok on 24.05.24.
//
#include <iostream>

using namespace std;

/*
 * Run:
    // To mars.
    auto [delay_in_second, delay_in_min] = signal_delay_to_mars();
    cout << "delay_in_second: " << delay_in_second << "; delay_in_min: " << delay_in_min << ";\n";

    // To moon.
    double distance_to_moon = 384400.0;
    auto [delay_second, delay_min] = delay_to_sky_object(distance_to_moon);
    cout << "delay_second: " << delay_second << "; delay_min: " << delay_min << ";\n";

    // Round trip delay to moon.
    cout << "Round trip to moon delay second: " << delay_second * 2 << "; Round trip to moon delay min: " << delay_min * 2 << ";\n";
*/

tuple<double, double> signal_delay_to_mars()
{
    double distance = 54600000.0;
    double lightspeed = 300000.0;
    double delay_in_second;
    double delay_in_min;

    delay_in_second = distance / lightspeed;
    delay_in_min = delay_in_second / 60;

    return {delay_in_second, delay_in_min };
}

/// Radio signal delay to sky object.
/// \param distance - kilometers.
/// \return tuple delay_in_second, delay_in_min
tuple<double, double> delay_to_sky_object(double distance)
{
    double lightspeed = 300000.0;
    double delay_in_second;
    double delay_in_min;

    delay_in_second = distance / lightspeed;
    delay_in_min = delay_in_second / 60;

    return {delay_in_second, delay_in_min};
}
