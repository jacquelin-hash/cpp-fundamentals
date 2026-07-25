/* FUNCTIONS
A function has a return type a name and parameters 
int add(int a, int b)
void that means the function is not returning anything 

pass by value copies the argument in 
changes inside the function don't affect the original 
pass by reference lets the function modify the original variable directly 

funtion overloading: multiple functions with the same name but different parameter 
types/counts; the compiler picks the right one based on the arguments you pass.
*/

#include <iostream>
using namespace std;

// try predicting output or writing the code: what is the bug here
// Basic function + return type 
int square(int x){
    return x * x; // this just computes x*x and then throws away the result 
    
}
// cout << square(5);

// the bug here is missing a return statement 

// the return statement was missing from this statement 
// return is the keyword that actually hands the value back to the caller 
// without it the function computes something entirely different 

// what would happen if you changed the return type to void instead 
void printSquare(int y){
    y * y;
}

void printCorrectSquare(int z){
    cout << z * z;
}
/*
int main(){
    printCorrectSquare(5); // you call it from inside main now 
    return 0;
}
*/

// void functions can do things (like print), but they can never
// return a usable value — so you can never wrap a void function call in cout 
// example: cout << printSquare(5);  <-- ERROR, printSquare returns void

// also: function calls must happen INSIDE another function (usually main())
// you cannot call a function at the global/file scope

// EXERCISE 1: PASS BY VALUE 
/*
write a function doubleValue that takes an int parameter and multiplies it by 
2 inside the function (just modify the parameter, dont return anything make it
a void and then main)
*/

void doubleValue(int fah){
    fah = fah * 2; // only changes the LOCAL copy of fah 
}

int main(){
    int fah = 10;
    doubleValue(fah); // a COPY of fah (value 10) is sent to the function
    cout << fah;      // prints 10 - original fah was never touched 
    return 0;
}

// WHY: when you pass by value, C++ copies the variable's VALUE
// into the function's parameter. The parameter and the original
// variable are two SEPARATE variables living in two SEPARATE scopes,
// even if they share the same name.
// Changing the parameter inside the function has ZERO effect
// on the original variable back in main().

// THERE ARE TWO WAYS TO GET 20 PRINTED 
// FIRST OPTION IS PASS BY REFERENCE 
void correctDoubleValue(int &hah){   // note the & — this is a REFERENCE
    hah = hah * 2;             // this modifies the ORIGINAL, not a copy
}

int main(){
    int hah = 10;
    correctDoubleValue(hah);
    cout << hah;    // prints 20
}
// WHY: & means "fah" inside the function IS the original variable,
// not a copy. There's no separate memory — it's just another name
// for the same variable. So changes inside the function DO affect main().

// SECOND OPTION: Return the value instead 
int anotherDoubleValue(int gah){
    return gah * 2;
}

int main(){
    int gah = 10;
    gah = anotherDoubleValue(gah);
    cout << gah; // prints 20 
}

// similar question pass-by-value (write this first)
/* Write a function called withdraw that takes an int balance and an int 
balance and an int amount, and substracts the amount from the balance 
inside the function (don't return anything, make it void) Then in main():
    - Declare an int variable balance = 100 
    - call withdraw(balance, 30)
    - print the balance afterwards 
*/

// this is pass by value 
void withdrawPart(int balance, int amount){
    // balance - amount;
    // mistake this is the correct answer balance = balance - amount;
    balance = balance - amount;

}

int main(){
    int balance = 100;
    withdrawPart(balance, 30);
    cout << balance;
}
// this is pass by reference 
void withdraw(int &balance, int &amount){
    balance = balance - amount;
}

int main(){
    int balance = 100; 
    int amount = 30;
    withdraw(balance, amount);
    cout << balance;
}

// only use reference when you want to make a modified function inside which in this case 
// we want to do that with balance NOT WITH AMOUNT 

// recap of this entire exercise 
/*
Part A (pass-by-value): function can compute correctly internally, 
but it's powerless to change the caller's variable — prints 100
Part B (pass-by-reference, using &): function directly modifies the original variable — prints 70

*/


// what inline does 
/*
when you mark a function you end up telling the compiler 
"Instead of making a separate jump-to-this-code function, 
just paste this function's code directly into every place it's called."
example 
*/
inline bool isEven(int x) {
    return x % 2 == 0;
    cout << isEven(4);
}

//  FUNCTION OVERLOADING 
/*
you can have multiple functions with the same name as long as they are 
different in the parameter list 

the number of the parameters or the types of parameters return type alone isn't 
enough to be able to differeintaite them. 

this is where the compiler comes in to figure out which version to call based 
on the arguments that you end up passing in
*/

#include <iostream>
using namespace std;

// Version 1: two ints
int add(int a, int b) {
    return a + b;
}

// Version 2: two doubles
double add(double a, double b) {
    return a + b;
}

// Version 3: three ints
int add(int a, int b, int c) {
    return a + b + c;
}

int main(){
    cout << add(2, 3) << endl;        // which version runs?
    cout << add(2.5, 3.5) << endl;    // which version runs?
    cout << add(1, 2, 3) << endl;     // which version runs?
    return 0;
}

// the compiler decides which one to call based off of the numbers that 
// are being called within the function 


