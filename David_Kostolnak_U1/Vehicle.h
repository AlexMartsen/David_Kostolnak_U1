#pragma once
#include <string>
#include "heap_monitor.h"
using namespace std;
class Vehicle
{
private:
	string numberPlate;
	double loadCapacity;
	double operatingCosts;
public:

	Vehicle(string numberPlate,double loadCapacity,double operatingCosts);
	~Vehicle();
	string getNumberPlate();
	double getLoadCapacity();
	double getOperatingCosts();
	
};

