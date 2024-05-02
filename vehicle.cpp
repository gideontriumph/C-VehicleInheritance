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

    // Method to decelerate the spaceship
    void decelerate(float decrement) {
        if (speed - decrement >= 0) {
            speed -= decrement;
            cout << "\033[1;34m" << name << " is now traveling at " << speed << " MPH." << endl;
        } else {
            cout << "\033[1;36m" << name << " cannot decelerate further." << endl;
        }
    }

    // Method to load cargo onto the spaceship
    void load_cargo(float cargo) {
        if (cargo <= cargo_capacity) {
            cout << "\033[1;34m" << cargo << " tons of cargo loaded onto " << name << "." << endl;
        } else {
            cout << "\033[1;36mNot enough capacity on " << name << " to load " << cargo << " tons of cargo." << endl;
        }
    }

    // Method to offload cargo from the spaceship
    void offload_cargo(float cargo) {
        cout << "\033[1;34m" << cargo << " tons of cargo offloaded from " << name << "." << endl;
    }

    // Method to land the spaceship
    void land() {
        if (!landed) {
            landed = true;
            cout << "\033[1;34m" << name << " has landed successfully." << endl;
        } else {
            cout << "\033[1;36m" << name << " is already landed." << endl;
        }
    }
};