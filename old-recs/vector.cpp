#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
// Vectors

// Task 12 Filling a vector of ints
// Define a vector to hold ints. Next, fill the vector with even integers from 10 to 100 inclusive.
// You will need to include the header file vector.
// Remember how to define a variable for a vector of integers.

// vector<int> v1 = {1,2,3}

int main(){
    vector<int> v1;

    for (int i = 10; i <= 100; i += 2){
        v1.push_back(i);
    }

    for (auto itr = v1.begin(); itr != v1.end(); ++itr){
        cout << *itr << endl;
    }

    // Task 13 Displaying the vector THREE times
    // Loop through the above vector to print out the values 
    // first using the indicies remember to use size_t for the loop 
    // variable 
    for(size_t i = 10; i < v1.size(); ++i){
        cout << v1[i] << endl;
    }
    // then using a "ranged for" 
    for (int x : v1){
        cout << x << endl;
    }
    // and finally backwards, using indicies. Again remember to use size_t
    for (size_t i = v1.size()-1; i >0; --i){
        cout << v1[i - 1] << endl;
    }
}


/*
EXAMPLE: 
    vector<int> v1 = {1,2,3};

    for (int i = 0; i < v1.size(); ++i){
        cout << v1[i] << endl;
    }

    v1.insert(v1.begin(), 10);
    for (auto itr = v1.begin(); itr != v1.end(); ++itr){
        cout << *itr << endl;
    }
*/

/*
accessing elements in the vector 
.front() - you access the front of the vector 
.back() - you access the back of the vector 
.size() - the number of elements in the vector 
.capacity() - is how many elements it can currently hold
.push_back() - 
.pop_back() - return fthe element that was removed 
.shrink_to_fit() - it equals to its size 
*/

