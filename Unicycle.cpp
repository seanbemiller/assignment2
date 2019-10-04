//
// Created by Sean Bemiller on 10/4/19.
//
#include "Unicycle.h"


Unicycle::Unicycle(string brand, string model, int skill = 0) {
    setBrand(brand);
    setModel(model);
	setRiderSkill(skill);
}

Unicycle::~Unicycle() = default;

int getRiderSkill(){
	return riderSkill;
}

void setRiderSkill(int skill){ 
	if (skill < 0)
		skill = 0;
	if (skill > 5)
		skill =5;
	riderSkill = skill;

double Unicycle::mileageEstimate(double time) {
	double milage = ((riderSkill * (.1)) / 5) * time;
    if (riderSkill == 0)
		mileage = 0;
	return mileage;
}

string Unicycle::toString() {
    string s = "-> Unicycle\n\t";
    return "-> Unicycle\n" + Vehicle::toString() + " Rider Skill: " +
           to_string(riderSkill);
}