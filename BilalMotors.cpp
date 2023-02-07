#include "BilalMotors.h"
BilalMotors::BilalMotors() {
	for (int i = 0; i < 4; i++) {
		arr[i] = nullptr;
	}
}
void BilalMotors::addVehicle(Vehicle* obj) {
	for (int i = 0; i < 4; i++) {
		if (arr[i] == nullptr) {
			arr[i] = obj;
			break;
		}
	}
}
BilalMotors::~BilalMotors() {
	delete[] arr;
	for (int i = 0; i < 4; i++) {
		arr[i] = nullptr;
	}
}