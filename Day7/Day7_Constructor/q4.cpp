#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    int emp_id;
    string name;
    string dept;

    public:
      Employee(int emp_id,string name, string dept)
      {
        this->emp_id=emp_id;
        this->name=name;
        this->dept=dept;
      }

      void display()
      {
        cout<<emp_id<<" ,"<<name<<","<<dept<<endl;
      }

};
int main(){

    Employee e(101,"Aman kumar","java developer");
    e.display();
}