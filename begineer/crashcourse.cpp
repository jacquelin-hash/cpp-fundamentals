#include <iostream>
using namespace std;

// int main(){
//     cout << "Hello world\n";  
//     cout << "Welcome to the C++ Crash Course\n";

// }

//varaibles and data types 
/*
variable is a container that is just a container that takes 
memory and that container can hold a data of a certain type 

the type can be an integer number or it can be a 
*/

int main(){
    const int age = 25;
    // age = 26; the expression needs to be a modifiable value 
    float weight = 65.5;
    double balance = 12345.67;
    char gender = 'f';
    string username = "jackieguacamole";
    bool isTodaySunny = false; // smallest data type in C++
    string colors[10] ={"red", "green", "pink", "blue", "black"};
    // if you create your array and then you intialize it you can omit that size of the array 
    // string colors[] = {"red", "green", "pink", "black"};

    // you don't even have to give variables that you are storing in your 
    // array upfront intially 

    // how to write out a value that is being stored in a specific array 
    cout << colors[0]; // indexing always starts at 0 
    cin >> colors[0]; // the user console inputs the value that is going to be stored in first 
    cout << colors[0];
    // you can change the original value of your array as well 
    colors[1] = "gray"; // hard coding this value 
    // once you hit that max limit you will have to re-intialize that array so it can take that 
    // continuous space of memory somewhere else 

}

// const you cannot change the value u assigned 
// with the variable 
// double is double the size of float it means it can 
// show a larger number and it can hold larger numbers 
// or it can represent a number with more decimal places 
// to higher precision 


/*
how can you create an array in C++ 
you can look at arrays as a collection of variables of a certain type 
an array takes a continuous place in memory when you declare an array 
you will have to specify its size up front 

in C++ you cannot have an array that stores a character, an integer or a string 
that does not exist in C++
*/

// to enter a value in your application you use cin 