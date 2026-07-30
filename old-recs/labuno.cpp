#include <iostream>
#include <fstream>
using namespace std;


// main
int main() { // Yes, it has to have an int for the return type
    // Output
    
    // Task 1. Printing hello ...  No use of "using namespace"
    std::cout << "hello world" << std::endl;

    // Task 2  Printing hello ...  Using "using namespace"
    cout << "hello world" << endl;

    // Types and variables

    // Task 3  Displaying uninitialized variable
    int score;
    cout << score << endl;
    
    // Task 4 Use the sizeof function to see the size in bytes of
    //        different types on your machine.
    cout << "Size of int :" << sizeof(int) << "bytes" << endl;
    cout << "Size of float :" << sizeof(float) << "bytes" << endl;
    cout << "Size of double :" << sizeof(double) << "bytes" << endl;
    cout << "Size of char: " << sizeof(char) << "bytes" << endl;

    // Task 5  Attempt to assign the wrong type of thing to a variable
    // pick a variable of one type 
    // assign it a value of a clearly different/incompatible type 
    // print the variable with cout afterward 
    // compare what you expected what you got 

    bool fah; 
    fah = 11;
    cout << fah << endl;

    // Conditions
    // Task 6  Testing for a range

    // pick a variable 
    // give it a value 
    int icecream;
    icecream = 19;
    // pick your range 
    // write the condition using an if statement 
    if (icecream >= 15 && icecream <= 20){
        cout << icecream << endl;
    // add an else 
    } else {
        cout << "No ice cream" << endl;
    }
    // as a single condition 
    string result = (icecream >=15 && icecream <= 20) ? "Yes ice cream" : "No ice cream";

    // Loops and files
    // Task 7  Looping, printing values 10 to 20 inclusive

    /* inclusive means the boundary value itself count as part of the range >= and <= */
    // First with a for loop
    for (int i = 10; i <= 20; i++){
        cout << "Count: " << i << endl;
    }
    // Then with a while loop
    int j = 10;
    while (j <= 20){
        cout << "Count:" << j << endl;
        j++;
    }
    // Finally with a do-while loop
    int k = 10;
    do {
        cout << "Count:" << k << endl;
        k++;
    } while (k <= 20);

    // Task 8  Looping to successfully open a file, asking user for the name
    string die;
    die = "seb";
    bool urmom = false;
    ifstream live;

    while (urmom == false){
        cout << "What the fuck is the file name: " << endl;
        cin >> die;
        live.open(die);

        if (live){
            urmom = true;
        }
    }
    
    // Task 9  Looping, reading file word by "word".
    /* After the file has successfully opened, read it word by word 
    (i.e. whitespace delimited token) displaying each word on a separate line of output. 
    We have provided a file, text.txt, for you to use for this task.
    You will need to include the header file string, to provide the type string. 
    Remember to close the file when you are done.
    */
   


   

    // Task 10 Open a file of integers, read it in, and display the sum.
    /* Have your program open a file of integers, called “integers.txt”, read them in, adding them up to get a sum and print just the sum.
    We will provide a file, integers.txt.
    You don’t need any additional includes!!!
    Remember to test if the open succeeded, reporting if you failed. Its really annoying to debug a program that failed just because the file wasn’t where it was supposed to be.
    Since you are reading integers, you will want to read into a variable of type int.
    I hope you remember to close as soon as you are done reading.*/

    // Taks 11 Open and read a file of integers and words. Display the sum.
    return 0;
}

