#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Constructor
    Box() {
        length = 0;
        width = 0;
        height = 0;
    }
    
    // Member function to set dimensions
    void setDimensions() {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        cout << "Enter Height: ";
        cin >> height;
    }

    // Friend function declaration
    friend void calculateVolume(Box b);
};

// Friend function definition
void calculateVolume(Box b) {
    int volume = b.length * b.width * b.height;
    cout << "\n----- Box Details -----" << endl;
    cout << "Length: " << b.length << endl;
    cout << "Width: " << b.width << endl;
    cout << "Height: " << b.height << endl;
    cout << "Volume: " << volume << endl;
}

int main() {
    Box box1;    // Creating object of Box class
    
    cout << "Enter box dimensions:" << endl;
    box1.setDimensions();
    
    calculateVolume(box1);  // Calling friend function
    
    return 0;
}