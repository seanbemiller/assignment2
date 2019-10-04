//
// Created by Sean Bemiller on 10/4/19.
//

#include "Jet.h"

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("Custom");
}

Jet::Jet(string brand, string model, string fuelType, int numbOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumOfEngines(numbOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumOfEngines() {
    return numberOfEngines;
}

void Jet::setNumOfEngines(int numOfEngines) {
    if (numOfEngines >= 1) {
        numberOfEngines = numOfEngines;
    } else {
        numberOfEngines = 1;
    }

}

double Jet::mileageEstimate(double time) {
	//srand (static_cast <unsigned> (time(0)));
    double mileage = ((rand() % 61) + 40 ) * time;
    if (numberOfEngines > 2 && fuelType == "Rocket") {
        mileage = (mileage * 1.055 * (numberOfEngines));
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(numberOfEngines);
}