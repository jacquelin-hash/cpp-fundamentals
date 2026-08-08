#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string Name;

    // setter function to set the private member variable salary
    void set_salary(double potential_salary){
        if (potential_salary < 0) salary = 0; // if the potential salary is less than 0, set salary to 0
        else salary = potential_salary;
    }

    // getter function to get the private member variable salary
    double get_salary(){
        return salary;
    }
    // with these functions we are able to use the private member variable
    // because these functions are members of the class, they have access to the private member variable
    void print_bonus(){
        cout << Name << "bonus: " << calculate_bonus() << endl;
    }
private:
    double salary;

    double calculate_bonus(){
        return salary * 0.1;
    } // information hiding is a key concept in object oriented programming, it allows us to hide the implementation details of a class from the outside world, 
    // and only expose a public interface that can be used to interact with the class. This allows us to change the implementation of a class without affecting the code that uses it.

};

int main(){
    Employee employee1;
    employee1.Name = "Kevin";
    cout << employee1.Name << endl;

    employee1.set_salary(50000);
    cout << "salary: " << employee1.get_salary() << endl;
    // employee1.calculate_bonus(); // this will not work because calculate_bonus is a private member function and cannot be accessed outside of the class
    employee1.print_bonus();
return 0;
}