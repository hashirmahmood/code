#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
	char* companyName;
	char* color;
	int numOfWheels;
	int powerCC;
	char* typeOfVehicle;
public:
	//constructors
	Vehicle();
	Vehicle(const char* name, const char* col, int wheel, int power);
	Vehicle(const Vehicle& obj);
	//getters
	char* getCompanyName() const;
	char* getColor() const;
	int getNumOfWheels() const;
	int getPowerCC() const;
	char* getTypeOfVehicle() const;
	//setters
	void setCompanyName(const char* ptr);
	void setColor(const char* ptr);
	void setNumOfWheels(int x);
	void setPowerCC(int x);
	void setVehicleType(const char* ptr);
	//required methods
	virtual void checkType() = 0;
	virtual void display() const;
};
char* deepCopy(const char* ptr);







