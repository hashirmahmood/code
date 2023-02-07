#pragma once
#include "Vehicle.h"
class Bike: public Vehicle
{
private:
	double height;
	bool selfStart;
	bool discBrakes;
	static int numOfBikes;
public:
	Bike();
	Bike(const char* name, const char* col, int wheel, int power,
		double ht, bool self, bool disc);
	Bike(const Bike& obj);
	//getters
	double getHeight() const;
	bool getSelfStart() const;
	bool getDiscBrakes() const;
	int getNumOfBikes() const;
	//setters
	void setHeight(double h);
	void setSelfStart(bool s);
	void setDiscBrakes(bool d);
	//create setter for static numOfBikes
	void checkType();
	void display() const;

	Bike& operator =(const Bike& obj);
	~Bike();
};


istream& operator >>(istream& input, Bike& obj);
ostream& operator <<(ostream& output, Bike& obj);