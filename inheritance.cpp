#include <iostream>
#include <string>
using namespace std;
// inheritance allows us to have a hireachy of classes to relate to each other 
// allows us to have a base class which contains commong functionality and then allows us to branch off from that class 
// and create sub-classes from that parent class 
// helps avoid code duplication

class Entity 
{
public:
    float X, Y;

    // we would need the move function to carry accross
    void Move(float xa, float ya)
    {
        X += xa; // first float
        Y += ya; // second float 
    }   
};

// player is always going to be a superset of entity always has everything that entity has and more
class Player : public Entity
{
public:
    const char* Name; // pointers are typically 8 bytes
    void PrintName()
    {
        cout << Name << endl;
    }   

};

int main()
{
    cout << sizeof(Player) << endl; 
    Player player;
    player.X = 2;

    cin.get();
}

// inheritance is used all the time it is just a way to extend an existing class and provide new functionality to a base class
// a class defaults every member to private unless specified otherwise, so we need to specify public inheritance to allow access to the base class members
    // struct defaults to public 
