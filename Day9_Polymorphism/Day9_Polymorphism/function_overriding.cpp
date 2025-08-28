#include<iostream>
using namespace std;
class Demo{
    public:
   virtual void Sound()
    {
        cout<<"Animal Sound"<<endl;
    };
};
class Dog:public Demo{
    public:
    void Sound() override
    {
        cout<<"Dog Sound"<<endl;
    };
};
class Cat:public Demo{
    public:
    void Sound() override
    {
        cout<<"Cat Sound"<<endl;
    };
};

int main()
{
Demo* d;
d=new Dog;
d->Sound();
d=new Cat;
d->Sound();
return 0;



}