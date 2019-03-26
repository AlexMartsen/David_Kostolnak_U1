#pragma once
#include <string>
#include "heap_monitor.h"
using namespace std;
class Drone
{
private:
	string serialNumber;
	bool typeDrone;
	double maxLoadCapacity;
	double maxSpeed;
	double maxFlightTime;
	double chargingTime;




public:
	Drone(string serialNumber, bool typeDrone);
	~Drone();
	string getSerialNumber();
	bool getTypeDrone();
	double getMaxLoadCapacity();
	double getMaxSpeed();
	double getMaxFlightTime();
	double getChargingTime();
};

