#include<iostream>
#include<string>
using namespace std;

class Car {
   private:  // Added colon here
        string model;
        string color;
        float price;

   public:
    Car()
    {
        model = "";
        color = "";
        price = 0.0;
    }

    void setData()
    {
        cin.ignore(); // Clear input buffer
        cout << "Enter model: ";
        getline(cin, model);
        cout << "Enter color: ";
        getline(cin, color);
        cout << "Enter price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nCar Details:" << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Price: $" << price << endl;
    }
};

int main()
{
    Car c;
    c.setData();
    c.display();
    return 0;
}
