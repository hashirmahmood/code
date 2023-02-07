#pragma once
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Bike.h"
class BilalMotors
{
	Vehicle* arr[4];
	int numberOfVehicles = 4;
public:
	BilalMotors();
	void addVehicle(Vehicle* obj);
	//void SearchVehicle();
	~BilalMotors();
};

