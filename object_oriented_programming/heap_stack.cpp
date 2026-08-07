#include <iostream>
#include <string>
using namespace std;

// object 
struct Vector3
{
    float x, y, z;
    Vector3() : x(10), y(11), z(12) {}
};

int main(){
    int value = 5; // stack allocation
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    Vector3 vector; // stack allocation
    // when this comes to an end everything in that stack gets popped off 

    int* hvalue = new int; // heap allocation
    /* new keyword is the same thing as a smart pointer*/
    *hvalue = 5;
    int* harray = new int[5]; // heap allocation
    harray[0] = 1;
    harray[1] = 2;
    harray[2] = 3;
    harray[3] = 4;
    harray[4] = 5;
    Vector3* hvector = new Vector3(); // heap allocation 
    /* you have to delete memory after allocating using new */
    /* smart pointers can do that for you but we are using new here*/
    delete hvalue; // deallocating memory
    delete[] harray; // deallocating memory
    delete hvector; // deallocating memory
}