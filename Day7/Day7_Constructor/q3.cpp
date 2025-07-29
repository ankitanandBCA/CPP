#include<iostream>
using namespace std;
class Ractangle{
   private:
    int langth;
    int breath;
    public:
    Ractangle(int langth,int breath)
    {
        this->langth=langth;
        this->breath=breath;
    }

    void display(){
        int area=langth*breath;
        cout<<"area="<<area;
    }
};
int main(){
Ractangle r(5,5);
r.display();
    
}