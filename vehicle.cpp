#include <iostream>
#include <string>

using namespace std;

// Define the Spaceship class
class Spaceship {
private:
    string name;
    float fuel_level;
    float speed;
    float cargo_capacity;
    bool landed; // To track if the spaceship is landed or not
};