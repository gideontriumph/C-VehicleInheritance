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

public:
    // Constructor
    Spaceship(string n, float fuel, float s, float capacity) {
        name = n;
        fuel_level = fuel;
        speed = s;
        cargo_capacity = capacity;
        landed = false; // Initially, spaceship is not landed
    }

    // Method to refuel the spaceship
    void refuel(float amount) {
        fuel_level += amount;
        cout << "\033[1;34m" << name << " has been refueled." << endl;
        cout << "Current fuel level: " << fuel_level << endl;
    }

    // Method to accelerate the spaceship
    void accelerate(float increment) {
        speed += increment;
        cout << "\033[1;34m" << name << " is now traveling at " << speed << " MPH." << endl;
    }

};