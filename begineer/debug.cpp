#include <iostream> 
using namespace std;

// DEBUG THE CODE 
// int main(){
//     const int max_score;
//     max_score = 100;
//     cout << max_score;
// }

// DEBUG THE CODE - 3 bugs (const, division, char/int)
int main(){
    // to debug this const 
    // const double PI;
    // PI = 3.14;

    // it would have to be like this in order to be correct 
    const double PI = 3.14; 
    // pi was not declared before the const thats why there is an error


    int total = 10; // this is an integer 
    int count = 4; // this is an integer 
    
    // this computes it as 10/4 = 2.0 and not 2.5 
    // the division happens before the conversion to double 
    double average = total / count;
    // to fix this it would need to be double average = (double)total / count; 
    // cast total to double first 
    cout << "Average: " << average << endl;

    char grade = 'B';
    // this would be a number of 67 
    cout << "Grade: " << grade + 1 << endl;
    // when you write grade + 1 C++ promotes grade to an int 
    // in order to then preform the addition (integer promotion)
    return 0;
}


int main(){
    const int max_score = 100;
    cout << max_score;

    double price = 9.99;
    int rounded = price;
    cout << rounded;

    char letter = 'A'; // this is stored as a small integer because it is an ASCII value
    int code = letter;
    cout << code;

    cout << letter + 1;
}

// NOTES
// -------------------------------------------------
// const must be intialized moment it is declared 
// int rounded = 9.99; → 9 (truncates, no error)
// int rounded = round(9.99); → 10 (this actually rounds, needs <cmath>)
// char - this prints as a character 
// int - this prints as a number 

// if the result is stored in a char variable this prints as a character 
// if the result is just an expression this turns into INTEGER PROMOTION

// const = must initialize immediately, never reassignable.
// int / int = integer division, regardless of what type you're storing the result in. 
// Cast before the division happens, not after.
// Arithmetic on char (+, -, etc.) promotes it to int
//  — if you want a char result, you must cast back with (char).

