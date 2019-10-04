//
// Created by Sean Bemiller on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <cstdlib>
#include <ctime>

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numberOfEngines);

    virtual ~Jet();
    int getNumOfEngines();
    void setNumOfEngines(int numberOfEngines);
    virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
