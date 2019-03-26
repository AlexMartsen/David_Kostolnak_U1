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

string Vehicle::getNumberPlate()
{
	return numberPlate;
}

double Vehicle::getLoadCapacity()
{
	return loadCapacity;
}

double Vehicle::getOperatingCosts()
{
	//tu bude treba dokodit bo sa nejak preratavaju
	return operatingCosts;
}


