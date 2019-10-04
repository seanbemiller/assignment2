//
// Created by Sean Bemiller on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"
#include <cstdlib>
#include <ctime>

class Skateboard : public Vehicle {

private:

public:
    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Skateboard_H