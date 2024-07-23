//
// Created by ok on 23.07.24.
//

#ifndef LEARNCPP_VEHICLE_H
#define LEARNCPP_VEHICLE_H


class Vehicle
{
    int passengers;
    int fuelcup;
    int mpg;
public:
    Vehicle(int p, int f, int m)
    {
        passengers = p;
        fuelcup = f;
        mpg = m;
    }
    int range();
    int get_passengers();
    int get_fuelcup();
    int get_mpg();
};

class Track : public Vehicle
{
    int cargocap;
public:
    Track(int p, int f, int m, int c) : Vehicle(p, f, m)
    {
        cargocap = c;
    }
    int get_cargocap();
};


#endif //LEARNCPP_VEHICLE_H
