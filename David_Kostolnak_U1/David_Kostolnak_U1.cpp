// David_Kostolnak_U1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "heap_monitor.h"
#include "Company.h"

int main()
{
	initHeapMonitor();
	auto* company1 = new Company();
	auto* vehicle1 = new Vehicle("BA12345",1200.0,100);
	
	company1->addVehicleToPark(vehicle1);
	company1->writeVehiclesAddedToPark(vehicle1);
	cout << "Mohlo by to ist ci??" << endl;
    cout << "Hello World!\n";
	
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
