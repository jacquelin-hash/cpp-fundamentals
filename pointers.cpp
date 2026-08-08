#include <iostream>
#include <string> 
using namespace std;

/*
pointer is an integer number which stores a memory address
*/
int main(){
    // int var = 8;
    // int* ptr = &var; // we are taking the memory address of var and storing it in a pointer variable ptr
    // *ptr = 10;

    char* buffer = new char[8]; // we are allocating 8 bytes of memory on the heap and storing the memory address in a pointer variable buffer
    memset(buffer, 0, 8);

    // double pointer 
    char** ptr = &buffer; // we are taking the memory address of buffer and storing it in a double pointer variable ptr
    delete[] buffer; // we are deallocating the memory that we allocated on the heap
    cin.get();
}