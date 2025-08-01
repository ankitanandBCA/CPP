#include<iostream>
using namespace std;

class Appliance {
protected:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }

    void showBrand() {
        cout << "Appliance Brand: " << brand << endl;
    }
};

class WashingMachine : public Appliance {
public:
    void washClothes() {
        cout << "Washing machine is washing clothes." << endl;
    }
};

class Refrigerator : public Appliance {
public:
    void coolItems() {
        cout << "Refrigerator is cooling food items." << endl;
    }
};

class Microwave : public Appliance {
public:
    void heatFood() {
        cout << "Microwave is heating food." << endl;
    }
};

int main() {
    WashingMachine wm;
    wm.setBrand("LG");
    wm.showBrand();
    wm.washClothes();

    Refrigerator rf;
    rf.setBrand("Samsung");
    rf.showBrand();
    rf.coolItems();

    Microwave mw;
    mw.setBrand("IFB");
    mw.showBrand();
    mw.heatFood();

    return 0;
}
