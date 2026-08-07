#include <iostream>
#include <string>
using namespace std;


struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    cout << "Name: " << student1.name << endl;
    cout << "GPA: " << student1.gpa << endl;
    cout << "Enrolled: " << student1.enrolled << endl;

    return 0;
}
