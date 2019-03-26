#include "pch.h"
#include "Vehicle.h"
#include "heap_monitor.h"
#include <iostream>



Vehicle::Vehicle(string numberPlate, double loadCapacity, double operatingCosts)
{
	this->numberPlate = numberPlate;
	this->loadCapacity = loadCapacity;
	this->operatingCosts = operatingCosts;
}

Vehicle::~Vehicle()
{
	numberPlate = "";
}
void Vehicle::writeVehicle()
{
	cout << "NumberPlate: " << numberPlate << "LoadCapacity: " << loadCapacity << "OperatingCosts: " << operatingCosts << endl;
}

