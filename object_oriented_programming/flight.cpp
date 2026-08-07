/*
Model a FlightInstrument base class with a protected double reading and a protected string unit (e.g. "knots", "ft")
. 
Give it a constructor that initializes both, and a const-correct getter double GetReading() const (public).

Add a method void Calibrate(double& offset) that takes the offset by reference and adjusts reading by it — this forces you to use a reference on purpose, not just define one. 

Then create a derived class Altimeter : public FlightInstrument that adds its own private double maxAltitude, uses the inherited protected reading directly inside one
of its own methods (proving protected access works, unlike private), and has a public method that warns if reading exceeds maxAltitude. 

In main(), create one Altimeter on the stack normally, and one on the heap with new, called through a pointer — 


Then explain out loud which one you'd actually want in a real embedded system and why 
(hint: it's about who controls the lifetime, and it loops right back to what you'll say about RAII tomorrow)
*/
#include <iostream>
#include <string>
using namespace std;

// Base class 
class FlightInstrument
{
    protected:
        double reading;
        string unit; // this holds instruments value 
    public:
        FlightInstrument(double reading, string unit){
            this->reading = reading;
            this->unit = unit;
        }

        void Calibrate(double& offset){
            reading += offset;
        }

        double getReading() const{
            return reading;
        }
};

// Altimeter 
class Altimeter : public FlightInstrument {
    private: 
        double  maxAltitude;
    public:
        Altimeter(double r, string u, double maxAlt) : FlightInstrument(r,u) , maxAltitude(maxAlt) {
        };
    
        void CheckAltitude(){
            if (reading > maxAltitude){
                cout << "Warning: altitude exceeds maximum!" << endl;
            }
        }
};

int main(){
    // Stack: created directly, no "new", no pointer
    Altimeter stackAltimeter(2.5, "miles", 10000);
    stackAltimeter.CheckAltitude();

    // Heap: "new" returns a pointer, so the variable has to be a pointer type,
    // and you use -> instead of . to call methods through it
    Altimeter* heapAltimeter = new Altimeter(3.0, "ft", 5000);
    heapAltimeter->CheckAltitude();
    delete heapAltimeter; // heap memory doesn't clean itself up — you own this until you delete it

    cin.get();
    return 0;
}