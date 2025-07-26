#include<iostream>
using namespace std;
int main()
{
    int avg=0,sum=0;
    int arr[10];
    printf("enter the number of array=");
    for(int i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=9;i++)
    {
       
        sum += arr[i];

    }

    avg=sum/10;
    cout<<"avg="<<avg;
}
