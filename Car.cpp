#include "Car.h"
Car::Car() : Vehicle() {
	noOfDoor = 0;
	noOfSeats = 0;
	transmission = deepCopy("0");
}
Car::Car(const char* name, const char* col, int wheel, int power, int doors, const char* tran, int seat) : Vehicle(name, col, wheel, power) {
	noOfDoor = doors;
	noOfSeats = seat;
	transmission = deepCopy(tran);
}
Car::Car(const Car& obj): Vehicle(obj) {
	this->noOfDoor = obj.noOfDoor;
	this->noOfSeats = obj.noOfSeats;
	this->transmission = deepCopy(obj.transmission);
}
int Car::getNoOfSeats() const {
	return noOfSeats;
}
int Car::getnoOfDoors() const {
	return noOfDoor;
}
char* Car::getTrasmission() const {
	return deepCopy(transmission);
}
