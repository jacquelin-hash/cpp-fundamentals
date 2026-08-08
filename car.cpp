#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        // attributes
        string make;
        string model;
        int year;
        string color;

        // methods 
        // what kind of actions can a car do?
        void accelerate(){
            cout << "You step on the gas!\n";
        }

        void brake(){
            cout << "You step on the brakes!\n";
        }
};

int main(){
    Car car1; // Create an object of the Car class
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2022;
    car1.color = "Red";

    car1.accelerate();
    car1.brake();
    
    cout << car1.make << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    return 0;
}
