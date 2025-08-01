#include<iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Bike : public Vehicle {
public:
    void wheelie() {
        cout << "Bike is doing a wheelie!" << endl;
    }
};

class Car : public Vehicle {
public:
    void playMusic() {
        cout << "Car is playing music!" << endl;
    }
};

class Truck : public Vehicle {
public:
    void loadCargo() {
        cout << "Truck is loading cargo!" << endl;
    }
};

int main() {
    Bike b;
    b.setBrand("Yamaha");
    b.showBrand();
    b.wheelie();

    Car c;
    c.setBrand("Honda");
    c.showBrand();
    c.playMusic();

    Truck t;
    t.setBrand("Tata");
    t.showBrand();
    t.loadCargo();

    return 0;
}
