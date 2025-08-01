/*
Create class Painter with method paint(), class Singer with sing(), and derived class Artist which uses both.
*/
#include<iostream>
using namespace std;

// Base class 1
class Painter {
public:
    void paint() {
        cout << "Painting a beautiful picture." << endl;
    }
};

// Base class 2
class Singer {
public:
    void sing() {
        cout << "Singing a melodious song." << endl;
    }
};

// Derived class
class Artist : public Painter, public Singer {
public:
    void showTalent() {
        cout << "I am an artist with multiple talents!" << endl;
    }
};

int main() {
    Artist a;

    a.showTalent();   // Artist's own method
    a.paint();        // From Painter
    a.sing();         // From Singer

    return 0;
}
