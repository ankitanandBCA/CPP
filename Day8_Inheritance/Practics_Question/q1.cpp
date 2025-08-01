#include<iostream>
using namespace std;
class Veciale  {


    public:
     void StartEngine (){
        cout<<"engine start for vecial";

     }

};

class Car:public Veciale{
    public:
    void Derive()
    {
        cout<<"drive car";
    }
};

int main()
{
   Car c;
   c.StartEngine();
   c.Derive();
}