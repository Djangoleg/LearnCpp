#include <iostream>
#include <cstring>
#include "Сlasses/CharSet.h"
#include "Сlasses/Inheritance/Vehicle.h"

using namespace std;


int main()
{
    Track semi(2, 200, 7, 44000);
    Track pickup(3, 28, 15, 2000);
    int dist = 252;

    cout << "Semi can carry " << semi.get_cargocap() << " pounds.\n";
    cout << "It has a range of " << semi.range() << " miles.\n";
    cout << "To do " << dist << " miles semi needs " << dist / semi.get_mpg() << " gallons of fuel.\n\n";

    cout << "Pickup can carry " << pickup.get_cargocap() << " pounds.\n";
    cout << "It has a range of " << pickup.range() << " miles.\n";
    cout << "To do " << dist << " miles pickup needs " << dist / pickup.get_mpg() << " gallons of fuel.\n\n";

    return 0;
}

