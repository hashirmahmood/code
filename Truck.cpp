#include "Truck.h"
Truck::Truck() : Vehicle() {
	containerSize = 0;
	fourWheelDrive = 0;
	category = deepCopy("0");
	this->numberOfTrucks++;
}
Truck::Truck(const char* name, const char* col, int wheel, int power, double size, const char* cat, bool four) : Vehicle(name, col, wheel, power) {
	containerSize = size;
	fourWheelDrive = four;
	category = deepCopy(cat);
	checkType();
	this->numberOfTrucks++;
}
Truck::Truck(const Truck & obj) : Vehicle(obj) {
	this->category = deepCopy(obj.category);
	this->containerSize = obj.containerSize;
	this->fourWheelDrive = obj.fourWheelDrive;
	this->numberOfTrucks++;
}
void Truck::setCategory(const char* ptr) {
	category = deepCopy(ptr);
}
void Truck::setFourWheel(bool x) {
	fourWheelDrive = x;
}
void Truck::setSize(double x) {
	containerSize = x;
}
char* Truck::getCategory() const {
	return deepCopy(category);
}
bool Truck::getFourWheel() const {
	return fourWheelDrive;
}
double Truck::getContainerSize() const {
	return containerSize;
}
int Truck::getNumOfTrucks() const {
	return numberOfTrucks;
}
void Truck::checkType() {
	int num = getNumOfWheels();
	if (num >= 6) {
		setVehicleType(deepCopy("Truck"));
	}
}
void Truck::display() const {
	cout << "Company name: " << getCompanyName() << endl;
	cout << "Color: " << getColor() << endl;
	cout << "Type of vehicle: " << getTypeOfVehicle() << endl;
	cout << "No. of wheels: " << getNumOfWheels() << endl;
	cout << "Power CC : " << getPowerCC() << endl;
	cout << "Four wheel drive: " << fourWheelDrive << endl;
	cout << "Category:  " << category << endl;
	cout << "Container size: " << containerSize << endl;
	cout << "\nTotal number Trucks: " << numberOfTrucks << endl;
}
Truck& Truck:: operator =(const Truck& obj) {
	if (this != &obj) {
		this->setCompanyName(obj.getCompanyName());
		this->setColor(obj.getColor());
		this->setCategory(obj.getCategory());
		this->setVehicleType(obj.getTypeOfVehicle());
		this->setNumOfWheels(obj.getNumOfWheels());
		this->setFourWheel(obj.getFourWheel());
		this->setSize(obj.getContainerSize());
		this->setPowerCC(obj.getPowerCC());
	}
	return *this;
}
istream& operator >>(istream& input, Truck& obj) {
	cout << "Enter details for Truck: " << endl;
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
	cout << "Enter Category: " << endl;
	input >> temp;
	obj.setCategory(temp);
	char y = 0;
	cout << "does it have four wheel drive? enter Y for Yes and N for no : " << endl;
	cin >> y;
	if (y == 'Y') {
		obj.setFourWheel(true);
	}
	else {
		obj.setFourWheel(false);
	}
	return input;
}

ostream& operator <<(ostream& out, Truck& obj) {
	out << "Company name: " << obj.getCompanyName() << endl;
	out << "Color: " << obj.getColor() << endl;
	out << "Type of vehicle: " << obj.getTypeOfVehicle() << endl;
	out << "No. of wheels: " << obj.getNumOfWheels() << endl;
	out << "Power CC : " << obj.getPowerCC() << endl;
	out << "Enter Category: " << obj.getCategory() << endl;
	out << "Four wheel drive: " << obj.getFourWheel() << endl;
	out << "Container size: " << obj.getContainerSize() << endl;
	out << "\nTotal number Cars: " << obj.getNumOfTrucks() << endl;
	return out;
}

Truck::~Truck() {
	delete[] category;
	category = nullptr;
}

int Truck::numberOfTrucks = 0;