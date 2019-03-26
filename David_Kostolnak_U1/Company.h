#pragma once
#include "array_list.h"
#include "Vehicle.h"

using namespace structures;
class Company
{
private:
	/**
	 * \VozovyPark na vozidla spolocnosti 
	 */
	List<Vehicle*> *vehiclePark;

public:
	Company();
	~Company();
	void addVehicleToPark(Vehicle* vehicle);
	void writeVehiclesAddedToPark(Vehicle * vehicle);
};

