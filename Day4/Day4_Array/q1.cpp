#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    printf("enter the number of array=\n");
    for(int i=0;i<9;i++)
    {
       cin>>arr[i];
    }
    printf("sum of array=\n");
    int sum=0;
    for(int i=0;i<9;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum="<<sum;


}