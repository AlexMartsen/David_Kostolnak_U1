#include "pch.h"
#include "Drone.h"
#include "heap_monitor.h"




Drone::Drone(string serialNumber, bool typeDrone)
{
	this->serialNumber = serialNumber;
	this->typeDrone = typeDrone;
	 if(typeDrone)
	 {
		 this->loadCapacity = 2;
		 this->speed = 80;
		 this->flightTime = 40;
		 this->chargingTime = 30;//nabije sa na fullku lebo 10 percent nabije 3minuty
	 }
	 this->loadCapacity = 5;
	 this->speed = 40;//km/h
	 this->flightTime = 60;//cas
	 this->chargingTime = 50;//cas 

}

Drone::~Drone()
{
	serialNumber = "";
}
