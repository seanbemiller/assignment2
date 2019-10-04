//
// Created by Sean Bemiller on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_UNICYCLE_H
#define DRIVINGSIMULATOR_UNICYCLE_H

#include "Vehicle.h"

class Unicycle : public Vehicle {

private:
	int riderSkill; //value from 0 to 5
public:
    explicit Unicycle(string brand, string model);

	int getRiderSkill();
	void setRiderSkill();

    virtual ~Unicycle();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Unicycle_H