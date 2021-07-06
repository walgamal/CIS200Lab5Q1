/*

 *Author: Wasim Algamal

 *Creation Date: 10/09/2020

 *Modification Date: 10/14/2020

 *Purpose: Create a specification of 3 classes that exhibit inheritance

*/

#include "AllClasses.h"


int main() {

     Vehicle vehicle1;
     Car car1;
     Truck truck1;

     cout << "Vehicle Age: ";
     vehicle1.GetAge();

     cout << "Vehicle Price: ";
     vehicle1.GetPrice();
     //shows initialized state for vehicle variables

     vehicle1.SetAge(10);
     cout << "\nVehicle Age Updated!\n";
     vehicle1.SetPrice(1999.99);
     cout << "Vehicle Price Updated!\n\n";
     //set methods update variables for vehicle

     cout << "New Vehicle Age: ";
     vehicle1.GetAge();
     cout << "New Vehicle Price: ";
     vehicle1.GetPrice();
     //get methods for vehicle

     cout << "\nCar Age: ";
     car1.GetAge();
     cout << "Car Price: ";
     car1.GetPrice();
     //shows initialized state for inherited car variables

     car1.SetAge(5);
     cout << "\nCar Age Updated!\n";
     car1.SetPrice(599.59);
     cout << "Car Price Updated!\n\n";
     //inherited set methods update variables for car

     cout << "New Car Age: ";
     car1.GetAge();
     cout << "New Car Price: ";
     car1.GetPrice();
     //inherited get methods display variables for car

     cout << endl;

     car1.GetRaceCarStatus();
     //shows initialized state for car variable raceCarStatus (false)
     car1.SetRaceCarStatus(true);
     //sets state for car variable raceCarStatus to true
     cout << "Race Car Status Updated!\n";
     car1.GetRaceCarStatus();
     //get method displays updated car is a racecar

     cout << "\nTruck Age: ";
     truck1.GetAge();
     cout << "Truck Price: ";
     truck1.GetPrice();
     //shows initialized state for truck variables

     cout << endl;
     truck1.SetAge(8);
     cout << "Truck Age Updated!\n";
     truck1.SetPrice(899.89);
     cout << "Truck Price Updated!\n";
     //inherited set methods updates variables for car

     cout << "\nNew Truck Age: ";
     truck1.GetAge();
     cout << "New Truck Price: ";
     truck1.GetPrice();
     cout << endl;
     //inherited get methods display variables for truck

     truck1.GetDieselTypeStatus();
     //shows initialized state for truck variable dieselTypeStatus (false)
     truck1.SetDieselTypeStatus(true);
     //sets state for car variable raceCarStatus to true
     cout << "Diesel Type Updated!\n";
     truck1.GetDieselTypeStatus();
     //get method displays updated truck is a diesel

}
