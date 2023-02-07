#include "Vehicle.h"
Vehicle::Vehicle() {
	companyName = deepCopy("0");
	color = deepCopy("0");
	numOfWheels = 0;
	powerCC = 0;
	typeOfVehicle = deepCopy("0");
}
Vehicle::Vehicle(const char* name, const char* col, int wheel, int power) {
	companyName = deepCopy(name);
	color = deepCopy(col);
	numOfWheels = wheel;
	powerCC = power;
	//typeOfVehicle = deepCopy("0");
}
Vehicle::Vehicle(const Vehicle& obj) {
	this->companyName = deepCopy(obj.companyName);
	this->color = deepCopy(obj.color);
	this->numOfWheels = obj.numOfWheels;
	this->powerCC = obj.powerCC;
	this->typeOfVehicle = deepCopy(obj.typeOfVehicle);
}
char* Vehicle::getCompanyName() const {
	return deepCopy(companyName);
}
char* Vehicle::getColor() const {
	return deepCopy(color);
}
int Vehicle::getNumOfWheels() const {
	return numOfWheels;
}
int Vehicle::getPowerCC() const {
	return powerCC;
}
char* Vehicle::getTypeOfVehicle() const {
	return deepCopy(typeOfVehicle);
}
void Vehicle::setCompanyName(const char* ptr) {
	companyName = deepCopy(ptr);
}
void Vehicle::setColor(const char* ptr) {
	color = deepCopy(ptr);
}
void Vehicle::setNumOfWheels(int x) {
	numOfWheels = x;
}
void Vehicle::setPowerCC(int x) {
	powerCC = x;
}
void Vehicle::setVehicleType(const char* ptr) {
	typeOfVehicle = deepCopy(ptr);
}
void Vehicle::display() const {

}
















char* deepCopy(const char* ptr) {
	int len = strlen(ptr);
	char* temp = new char[len + 1];
	for (int i = 0; i < len; i++) {
		temp[i] = ptr[i];
	}
	temp[len] = '\0';
	return temp;
}