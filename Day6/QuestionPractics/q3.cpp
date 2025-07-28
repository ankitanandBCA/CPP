#include<iostream>
class Ractangle{
    private:
    int length;
    int breath;
    int area;
    public:
    Ractangle()
    {
        length=0;
        breath=0;
        area=0;
    }

    void input()
    {
        std::cout<<"enter length=";
        std::cin>>length;
        std::cout<<"breath = ";
        std::cin>>breath;

    }

    void display()
    {
        area=length*breath;
        std::cout<<area;
    }
};
int main()
{
    Ractangle r;
    r.input();
    r.display();
}