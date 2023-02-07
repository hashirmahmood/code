#include "Car.h"
Car::Car() : Vehicle() {
	noOfDoor = 0;
	noOfSeats = 0;
	transmission = deepCopy("0");
	this->numberOfCars++;
}
Car::Car(const char* name, const char* col, int wheel, int power, int doors, const char* tran, int seat) : Vehicle(name, col, wheel, power) {
	noOfDoor = doors;
	noOfSeats = seat;
	transmission = deepCopy(tran);
	checkType();
	this->numberOfCars++;
}
Car::Car(const Car& obj): Vehicle(obj) {
	this->noOfDoor = obj.noOfDoor;
	this->noOfSeats = obj.noOfSeats;
	this->transmission = deepCopy(obj.transmission);
	this->numberOfCars++;
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
void Car::setTransmission(const char* ptr) {
	transmission = deepCopy(ptr);
}
void Car::setNoOfSeats(int x) {
	noOfSeats = x;
}
void Car::setNoOfDoors(int x) {
	noOfDoor = x;
}
void Car::checkType() {
	int num = getNumOfWheels();
	if (num == 4) {
		setVehicleType(deepCopy("Car"));
	}
}
int Car::getNumberOfCars() const {
	return numberOfCars;
}
void Car::display() const {
	cout << "Company name: " << getCompanyName() << endl;
	cout << "Color: " << getColor() << endl;
	cout << "Type of vehicle: " << getTypeOfVehicle() << endl;
	cout << "No. of wheels: " << getNumOfWheels() << endl;
	cout << "Power CC : " << getPowerCC() << endl;
	cout << "No of seats: " << noOfSeats << endl;
	cout << "No of doors: " << noOfDoor << endl;
	cout << "Transmission: " << transmission << endl;
	cout << "\nTotal number Cars: " << numberOfCars << endl;
}
Car& Car:: operator =(const Car& obj) {
	if (this != &obj) {
		this->setCompanyName(obj.getCompanyName());
		this->setColor(obj.getColor());
		this->setNoOfDoors(obj.getnoOfDoors());
		this->setNoOfSeats(obj.getNoOfSeats());
		this->setVehicleType(obj.getTypeOfVehicle());
		this->setNumOfWheels(obj.getNumOfWheels());
		this->setTransmission(obj.getTrasmission());
		this->setPowerCC(obj.getPowerCC());
	}
	return *this;
}
istream& operator >>(istream& input, Car& obj) {
	cout << "Enter details for Car: " << endl;
	cout << "Enter company name: " << endl;
	char* temp = new char[strlen(obj.getCompanyName())];
	input >> temp;
	obj.setCompanyName(temp);
	cout << "Enter color: " << endl;
	input >> temp;
	obj.setColor(temp);
	cout << "Enter number of wheels : " << endl;
	int x = 0;
	input >> x;
	obj.setNumOfWheels(x);
	cout << "Enter Power: " << endl;
	input >> x;
	obj.setPowerCC(x);
	cout << "Enter Transmission: " << endl;
	input >> temp;
	obj.setTransmission(temp);
	cout << "Enter the number of seats: " << endl;
	input >> x;
	obj.setNoOfSeats(x);
	return input;
}

ostream& operator <<(ostream& out, Car& obj) {
	out << "Company name: " << obj.getCompanyName() << endl;
	out << "Color: " << obj.getColor() << endl;
	out << "Type of vehicle: " << obj.getTypeOfVehicle() << endl;
	out << "No. of wheels: " << obj.getNumOfWheels() << endl;
	out << "Power CC : " << obj.getPowerCC() << endl;
	out << "No of seats: " << obj.getNoOfSeats() << endl;
	out << "No of doors: " << obj.getnoOfDoors() << endl;
	out << "Transmission: " << obj.getTrasmission() << endl;
	out << "\nTotal number Cars: " << obj.getNumberOfCars() << endl;
	return out;
}

Car::~Car() {
	delete[] transmission;
	transmission = nullptr;
}

int Car::numberOfCars = 0;