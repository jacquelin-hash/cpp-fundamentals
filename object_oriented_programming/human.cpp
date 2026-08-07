#include <iostream>
#include <string>
using namespace std;

class Human{
    public:
        // attributes
        string name;
        string occupation;
        int age;

        // methods
        // this is a function that belongs to the class Human
        void eat(){
            cout << "This person is eating\n";
        }
        void drink(){
            cout << "This person is drinking\n";
        }
        void sleep(){
            cout << "This person is sleeping\n";
        }
};

int main(){
    Human human1; // Create an object of the Human class
    Human human2; // Create another object of the Human class
    human1.name = "Jacqueline";
    human1.occupation = "Software Engineer";
    human1.age = 22;

    human2.name = "John";
    human2.occupation = "Designer";
    human2.age = 25;

    cout << human1.name << endl;
    cout << human1.occupation << endl;
    cout << human1.age << endl;

    human1.eat();
    human1.drink();
    human1.sleep();
    cout << human2.name << endl;
    cout << human2.occupation << endl;
    cout << human2.age << endl;

    human2.eat();
    human2.drink();
    return 0;

}
// object = A collection of attributes and methods
//          they can have characteristics and could preform actions
//          Can be used to mimic real world items (ex. Phone, Book, Dog, Cat, etc.)
//          Created from a class which acts as a blueprint for the object

// objects can also preform actions, which are called methods. Methods are functions
// that belong to a class and can be used to manipulate the attributes of an object.
