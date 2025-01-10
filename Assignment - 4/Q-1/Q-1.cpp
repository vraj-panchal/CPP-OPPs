/*
 * p_1.cpp
 *
 *  Created on: 14-Oct-2024
 *      Author: root
 */

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    virtual void showDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class TwoWheeler : public Vehicle {
protected:
    int distance;
    float mileage;

public:
    TwoWheeler(string b, int y, int d, float m) : Vehicle(b, y), distance(d), mileage(m) {}

    void showDetails(int km) {
        Vehicle::showDetails();
        cout << "Distance: " << distance << " km" << endl;
        cout << "Mileage: " << mileage << " kmpl" << endl;
        cout << "Travelled Distance: " << km << " km" << endl;
    }
};

class Scooter : public TwoWheeler {
public:
    Scooter(string b, int y, int d, float m) : TwoWheeler(b, y, d, m) {}

    void scooterDetails() {
        cout << "This is a scooter." << endl;
        showDetails(distance);
    }
};

int main() {
    Scooter s("TVS", 2021, 21000, 30.0);

    s.scooterDetails();

    return 0;
}

