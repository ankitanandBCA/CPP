#include<iostream>
using namespace std;
class Box{
    private:
    int x;
    public:
    Box(int x)
    {
        this->x=x;
    }
    void display()
    {
        cout<<x*x;
    }
};
int main(){
 
    Box b(5);
    b.display();
    
    
}