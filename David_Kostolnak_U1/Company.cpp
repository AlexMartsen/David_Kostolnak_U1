#include "pch.h"
#include "Company.h"
#include <iostream>
#include  <fstream>



Company::Company()
{

}


Company::~Company()
{
	vehiclePark = new ArrayList<Vehicle*>();
}

void Company::addVehicleToPark(Vehicle * vehicle)
{
	vehiclePark->add(vehicle);
}
void Company::writeVehiclesAddedToPark()
{
	int i = 0;
	for (auto *vehicle_park : *vehiclePark) {
		cout << i << "." << vehicle_park->writeVehicle()  << endl;
		i++;
	}
	

}

