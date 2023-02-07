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
Bike& Bike:: operator =(const Bike& obj) {
	if (this != &obj) {
		this->setCompanyName(obj.getCompanyName());
		this->setColor(obj.getColor());
		this->setDiscBrakes(obj.getDiscBrakes());
		this->setHeight(obj.getHeight());
		this->setVehicleType(obj.getTypeOfVehicle());
		this->setNumOfWheels(obj.getNumOfWheels());
		this->setSelfStart(obj.getSelfStart());
		this->setPowerCC(obj.getPowerCC());
	}
	return *this;
}
istream& operator >>(istream& input, Bike& obj) {
	cout << "Enter details for Bike: " << endl;
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
	
	cout << "Enter height: " << endl;
	input >> x;
	obj.setHeight(x);
	char y = 0;
	cout << "Is it Self start? enter Y for Yes and N for no : " << endl;
	cin >> y;
	if (y == 'Y') {
		obj.setSelfStart(true);
	}
	else {
		obj.setSelfStart(false);
	}
	cout << "does it have disc brakes? enter Y for Yes and N for no : " << endl;
	cin >> y;
	if (y == 'Y') {
		obj.setDiscBrakes(true);
	}
	else {
		obj.setDiscBrakes(false);
	}
	return input;
}

ostream& operator <<(ostream& out, Bike& obj) {
	out << "Company name: " << obj.getCompanyName() << endl;
	out << "Color: " << obj.getColor() << endl;
	out << "Type of vehicle: " << obj.getTypeOfVehicle() << endl;
	out << "No. of wheels: " << obj.getNumOfWheels() << endl;
	out << "Power CC : " << obj.getPowerCC() << endl;
	out << "Self start : " << obj.getSelfStart() << endl;
	out << "Disc brakes: " << obj.getDiscBrakes() << endl;
	out << "Height: " << obj.getHeight() << endl;
	out << "\nTotal number Bikes: " << obj.getNumOfBikes() << endl;
	return out;
}
void Bike::checkType() {
	int num = getNumOfWheels();
	if (num == 2) {
		setVehicleType(deepCopy("Bike"));
	}
}

Bike::~Bike() {
	
}

int Bike::numOfBikes = 0;
