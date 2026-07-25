#include <iostream>
using namespace std;

// What would this code print out?
// this would print out 3
int main(){
    int x = 7/2;  // 3 (integer division)
    cout << x;

    cout << 7/2.0 << endl; // 3.5 (floating point division, since 2.0 is a double)
                           // if one operand is a floating point the whole expression
                           // is a floating point 

    cout << 7%2 << endl; // 1 ( this prints out the output of 7/2)
    int num = 7;
    if (num % 2 == 0){
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    return 0;
}

// REMINDER % this is a classic way to check even/odd 
// if (num % 2 == 0) //even
