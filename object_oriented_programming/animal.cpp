#include <iostream>
#include <string>
using namespace std;

class Animal {
    public:
        void makeSound() {
            cout << "Animal makes a sound" << endl;
        }
};


/* Write a class Animal with a virtual method makeSound(). 
Then write a class Dog that inherits from Animal and overrides 
makeSound() through an Animal* pointer with non virtual destructor */