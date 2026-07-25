/* write a function that takes two ints and 
return their average as a double */

/* warm up and arithmetic */
#include <iostream>
using namespace std;


double average(int a, int b) {
    double result = static_cast<double>(a + b)/2;
    return result;
}

int main() {
    int a;
    a = 2;
    int b;
    b = 4;
    double sum = average(a,b); // calling the function and storing what it returns 
    cout << sum << endl;       // printing the stored average
}

// both double and float store decimal numbers 
// float is 4 bytes 
// double is 8 bytes 


