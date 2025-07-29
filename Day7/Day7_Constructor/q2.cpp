#include<iostream>
#include<string>
using namespace std;
class Student{
     private:
     int roll;
     string name;
     float marks;

     public:

     Student()
     {
        roll=101;
        name="anman kumar";
        marks=78.5;
     }

     void display()
     {
        cout<<"roll="<<roll<<endl;
        cout<<"name="<<name<<endl;
        cout<<"marks="<<marks<<endl;
     }
};
int main(){
    Student s;
    s.display();


}