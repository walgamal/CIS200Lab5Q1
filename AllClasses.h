#pragma once

using namespace std;
#include <iostream>

class Vehicle {
	//base class
private:

	int age;
	float price;

public:

	Vehicle() { age = 0, price = 0.0; }		//constructor w init

	void SetAge(int vehicleAge) { age = vehicleAge; }
	void SetPrice(float vehiclePrice) { price = vehiclePrice; }
	void GetAge() { cout << age << endl; }
	void GetPrice() { cout << price << endl; }

};

class Car : public Vehicle {
	//car class inherits vehicle class
private:

	bool raceCarStatus;

public:

	Car() { raceCarStatus = false; }		//constructor w init

	void SetRaceCarStatus(bool vehicleRaceCarStatus) { raceCarStatus = vehicleRaceCarStatus; }
	void GetRaceCarStatus() {

		if (raceCarStatus == true) {
			cout << "This car is a Racecar." << endl;
		}
		else if (raceCarStatus == false) {
			cout << "This car is not a Racecar." << endl;
		}
		else {
			cout << "ERROR: RACE CAR STATUS NOT FOUND!" << endl;
		}
		//tests if racecar or not
	}

};

class Truck : public Vehicle {
	//car class inherits vehicle class
private:

	bool dieselTypeStatus;

public:

	Truck() { dieselTypeStatus = false; }		//constructor w init

	void SetDieselTypeStatus(bool truckDieselType) { dieselTypeStatus = truckDieselType; }
	void GetDieselTypeStatus() {

		if (dieselTypeStatus == true) {
			cout << "This truck is a diesel truck." << endl;
		}
		else if (dieselTypeStatus == false) {
			cout << "This truck is not a diesel truck." << endl;
		}
		else {
			cout << "ERROR: DIESEL STATUS NOT FOUND!" << endl;
		}
		//tests if diesel or not
	}

};
