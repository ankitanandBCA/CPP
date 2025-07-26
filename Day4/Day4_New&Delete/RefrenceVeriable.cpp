#include<iostream>
using namespace std;
void m(int &x)
{
    x=x+x;
    cout<<"x="<<x;
}

int main()
{
    /*
    int sum=100;
    cout<<"sum="<<sum<<endl;
    int &total=sum;
    cout<<"total="<<total;
    */

    int f=100;
    m(f);

}