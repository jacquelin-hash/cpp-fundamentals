#include <iostream>
using namespace std;

// CONDITIONS
int main(){
    bool isTodaySunny = false;
    bool isTodayWeekend = true;

    // if(isTodayWeekend && isTodaySunny){
    //    cout << "Go to the park" << endl;
    // }
    // else if(isTodayWeekend && !isTodaySunny){
    //     cout << "Go to the park but take an umbrella" << endl;
    // }
    // else {
    //     cout << "Go to work" << endl;
    // }

    if(isTodayWeekend) {
        if(isTodaySunny)
            cout << "Go to the park" << endl;
        else 
            cout << "Go to the park but take an Umbrella" << endl;
    }
    else
        cout << "Go to work" << endl;
    /*there is also a shorter way to write if-else statements 
    using the ternary operator 
    you specify the variable or the condition expression that you want to check 
    */
   
   /*isTodaySunny ? cout << "Go to the park" : cout << "Take an umbrella outside"; */
}
