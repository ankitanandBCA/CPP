#include<iostream>
using namespace std;
int main()
{
    int *arr;
    int size;

    cout<<"enter the size of array=";
    cin>>size;

    cout<<"creating of array in size "<<size<<endl;
    arr=new int[size];

    cout<<"Dynamic memory allocation is successfull\n";

    for(int i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    cout<<"print array=\n";
     for(int i=0;i<=9;i++)
    {
        cout<<arr[i];
    }
     

    cout<<"delete memory for arry";
    delete arr;
    
}