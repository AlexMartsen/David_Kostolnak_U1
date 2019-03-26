#include "pch.h"
#include "Company.h"
#include <iostream>
#include  <fstream>



Company::Company()
{
	vehiclePark = new ArrayList<Vehicle*>();
}


Company::~Company()
{
	
}

void Company::addVehicleToPark(Vehicle * vehicle)
{
	vehiclePark->add(vehicle);
}
void Company::writeVehiclesAddedToPark(Vehicle * vehicle)
{
	if (vehiclePark->isEmpty()) {
		cout << "Vozidla niesu dostupne!!" << endl;
	}
	else {
		for (auto *vehicle : *vehiclePark) {
			cout << vehicle->getNumberPlate() << endl;
		}
	}
	

}

