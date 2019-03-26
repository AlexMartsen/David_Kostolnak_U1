#include "pch.h"
#include "Drone.h"
#include "heap_monitor.h"




Drone::Drone(string serialNumber, bool typeDrone)
{
	this->serialNumber = serialNumber;
	this->typeDrone = typeDrone;
	 if(typeDrone)
	 {
		 this->maxLoadCapacity = 2;
		 this->maxSpeed = 80;
		 this->maxFlightTime = 40;
		 this->chargingTime = 30;//nabije sa na fullku lebo 10 percent nabije 3minuty
	 }
	 this->maxLoadCapacity = 5;
	 this->maxSpeed = 40;//km/h
	 this->maxFlightTime = 60;//cas
	 this->chargingTime = 50;//cas 

}

Drone::~Drone()
{
	serialNumber = "";
}
