#include "Bike.h"
Bike::Bike(): Vehicle() {
	height = 0;
	selfStart = 0;
	discBrakes = 0;
	numOfBikes++;
}
Bike::Bike(const char* name, const char* col, int wheel, int power,
	double ht, bool self, bool disc): Vehicle(name, col, wheel, power) {
	height = ht;
	selfStart = self;
	discBrakes = disc;
	checkType();
	numOfBikes++;
}
Bike::Bike(const Bike& obj): Vehicle(obj) {
	this->height = obj.height;
	this->discBrakes = obj.discBrakes;
	this->selfStart = obj.selfStart;
	this->numOfBikes++;
}
void Bike::display() const {
	cout << "Company name: " << getCompanyName() << endl;
	cout << "Color: " << getColor() << endl;
	cout << "Type of vehicle: " << getTypeOfVehicle() << endl;
	cout << "No. of wheels: " << getNumOfWheels() << endl;
	cout << "Height: " << height << endl;
	cout << "Power CC : " << getPowerCC() << endl;
	cout << "Self Start: " << selfStart <<  endl;
	cout << "Disc Brakes: " << discBrakes << endl;
	cout << "\nTotal number bikes: " << numOfBikes << endl;
	
}
double Bike::getHeight() const {
	return height;
}
bool Bike::getSelfStart() const {
	return selfStart;
}
bool Bike::getDiscBrakes() const {
	return discBrakes;
}
int Bike::getNumOfBikes() const {
	return numOfBikes;
}
void Bike::setHeight(double x) {
	height = x;
}
void Bike::setDiscBrakes(bool x) {
	discBrakes = x;
}
void Bike::setSelfStart(bool x) {
	selfStart = x;
}

void Bike::checkType() {
	int num = getNumOfWheels();
	if (num == 2) {
		setVehicleType(deepCopy("Bike"));
	}
}


int Bike::numOfBikes = 0;
