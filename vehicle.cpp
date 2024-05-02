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

// Main function
int main() {
    // Print program title
    cout << "\033[1;34m\t\t===  Zorgo's Spaceship  ===\t\t" << endl;
    cout << "\033[1;36m\t\t  By Triumph Ogbonnia" << endl;

    string name;
    float fuel_level, speed, cargo_capacity;

    // Get user input for spaceship information
    cout << "\n\033[1;34mEnter spaceship name >> ";
    getline(cin, name);
    cout << "Enter current fuel level >> ";
    cin >> fuel_level;
    cout << "Enter current speed >> ";
    cin >> speed;
    cout << "Enter cargo capacity (tons) >> ";
    cin >> cargo_capacity;

    // Display current spaceship information to the user
    cout << "\n\033[1;36m" << name << " has fuel level " << fuel_level << " with a current speed of " << speed << " MPH and " << cargo_capacity << " tons of cargo capacity" << endl;

    char choice;

    // Create a spaceship instance using spaceship details
    Spaceship spaceship(name, fuel_level, speed, cargo_capacity);
}