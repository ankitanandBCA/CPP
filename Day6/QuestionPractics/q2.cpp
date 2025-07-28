#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    string email;

    public:
    Student()
    {
        roll=0;
        name=" ";
        email=" ";
    }

    void setData()
    {    
        
        cout<<"enter roll number=";
        cin>>roll;
        cin.ignore();
        cout<<"enater nzme=";
        getline(cin,name);
        cout<<"enter email=";
        getline(cin,email);
    }

    void Display()
    {
        cout<<"roll="<<roll<<" "<<"name="<<name<<" "<<"emaill="<<email;
    }
};
int main()
{
    Student s;
    s.setData();
    s.Display();
    
}