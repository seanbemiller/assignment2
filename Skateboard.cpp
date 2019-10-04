//
// Created by Sean Bemiller on 10/4/19.
//
#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
	//srand (static_cast <unsigned> (time(0)));
    double mileage = 0.1 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.1-0.5))); // algorithm from stackoverflow post
    if (time > 25 && time < 250)
		mileage = mileage + (rand() % ((int)((1.0/3.0) * time)) + 1);
	return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}