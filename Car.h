#pragma once
#include "Vehicle.h"
class Car: public Vehicle
{
	int noOfDoor;
	char* transmission;
	int noOfSeats;
	static int numberOfCars;
public:
	Car();
	Car(const char* name, const char* col, int wheel, int power, int doors, const char* tran, int seat);
	Car(const Car& obj);

	//getters
	int getnoOfDoors() const;
	char* getTrasmission() const;
	int getNoOfSeats() const;
	int getNumberOfCars() const;

	//setters
	void setNoOfDoors(int x);
	void setNoOfSeats(int x);
	void setTransmission(const char* ptr);

	void checkType();
	void display() const;

	Car& operator =(const Car& obj);

	~Car();
};
istream& operator >>(istream& input, Car& obj);
ostream& operator <<(ostream& output, Car& obj);

