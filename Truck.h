#pragma once
#include "Vehicle.h"
class Truck:public Vehicle
{
	double containerSize;
	char* category;
	bool fourWheelDrive;
	static int numberOfTrucks;
public:
	Truck();
	Truck(const char* name, const char* col, int wheel, int power, double size, const char* cat, bool four);
	Truck(const Truck& obj);
	//getters
	double getContainerSize() const;
	char* getCategory() const;
	bool getFourWheel() const;
	int getNumOfTrucks() const;
	//setters
	void setSize(double x);
	void setCategory(const char* ptr);
	void setFourWheel(bool x);

	void checkType();
	void display() const;


	Truck& operator =(const Truck& obj);

	~Truck();

};

istream& operator >>(istream& input, Truck& obj);
ostream& operator <<(ostream& output, Truck& obj);
