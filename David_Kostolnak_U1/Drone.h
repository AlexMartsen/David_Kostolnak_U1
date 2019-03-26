#pragma once
#include <string>
#include "heap_monitor.h"
using namespace std;
class Drone
{
private:
	string serialNumber;
	bool typeDrone;
	double loadCapacity;
	double speed;
	double flightTime;
	double chargingTime;




public:
	Drone(string serialNumber, bool typeDrone);
	~Drone();
};

